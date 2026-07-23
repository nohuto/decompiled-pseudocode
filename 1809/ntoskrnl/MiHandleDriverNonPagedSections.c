/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x14065694C
 * Callers:
 *     MiSessionRemoveImage @ 0x140158200 (MiSessionRemoveImage.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiUnlockCodePage @ 0x14009C6B0 (MiUnlockCodePage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x140654DA0 (MiSnapDriverRange.c)
 *     MiFindDriverNonPagedSections @ 0x14065685C (MiFindDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x1406CC9F0 (MiDisablePagingOfDriver.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2, int a3)
{
  unsigned int v6; // esi
  char v7; // di
  unsigned __int64 v8; // rbx
  char v9; // r12
  unsigned int v10; // r15d
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned int v15; // ebx
  unsigned __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG v17; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
  {
    v6 = 0;
    v7 = 1;
    if ( a3 == 1 )
    {
      if ( (dword_140541174 & 1) == 0 && (a2 & 2) == 0 )
      {
        if ( (a2 & 1) == 0 )
          MiDisablePagingOfDriver(a1);
        v7 = !(a2 & 1) + 1;
LABEL_8:
        v17 = 0;
        v8 = 0LL;
        v18 = 0LL;
        while ( (int)MiFindDriverNonPagedSections(a1, &v17, (__int64 *)&v18, v16) >= 0 )
        {
          if ( a3 == 1 )
          {
            v6 = MiLockCode(a1, v18, v16[0], v7);
            if ( (v6 & 0x80000000) != 0 )
            {
              v8 = v18;
              a3 = 0;
              v17 = 0;
            }
          }
          else
          {
            if ( v18 == v8 )
              return v6;
            MiUnlockCodePage(v18, v16[0]);
          }
        }
        return v6;
      }
      v9 = ((a2 & 1) == 0) + 1;
      if ( ((a2 & 1) == 0) == -1 )
        return v6;
      v10 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        v12 = MiSnapDriverRange(a1, v10, 8, 0LL, &v18, v16);
        v13 = v18;
        v10 = v12;
        if ( !v18 )
          goto LABEL_18;
        if ( v11 )
        {
          if ( v18 == v11 )
            return v6;
          MiUnlockCodePage(v18, v16[0]);
LABEL_18:
          if ( !v10 )
            return v6;
        }
        else
        {
          v6 = MiLockCode(a1, v18, v16[0], v9);
          if ( (v6 & 0x80000000) == 0 )
            goto LABEL_18;
          v10 = 0;
          v11 = v13;
        }
      }
    }
    if ( (dword_140541174 & 1) == 0 )
      goto LABEL_8;
    v15 = 0;
    do
    {
      v15 = MiSnapDriverRange(a1, v15, 8, 0LL, &v18, v16);
      if ( v18 )
        MiUnlockCodePage(v18, v16[0]);
    }
    while ( v15 );
  }
  return 0LL;
}
