/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x14070E784
 * Callers:
 *     MiSessionRemoveImage @ 0x1401687C4 (MiSessionRemoveImage.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x1400D9D20 (MiUnlockCodePage.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiFindDriverNonPagedSections @ 0x14070E8F0 (MiFindDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140710D4C (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x140710DE8 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2, int a3)
{
  int v6; // esi
  char v7; // bl
  unsigned __int64 v8; // rdi
  char v9; // di
  int v10; // r12d
  unsigned __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // rbx
  int v15; // ebx
  unsigned __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return 0LL;
  v6 = 0;
  v7 = 1;
  if ( a3 == 1 )
  {
    if ( (dword_140571184 & 1) == 0 && (a2 & 2) == 0 )
    {
      if ( (a2 & 1) == 0 )
        MiDisablePagingOfDriver(a1);
      v7 = !(a2 & 1) + 1;
      goto LABEL_8;
    }
    v9 = ((a2 & 1) == 0) + 1;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = MiSnapDriverRange(a1, v10, 8, 0, (__int64)&v18, (__int64)v16);
      v13 = v18;
      v10 = v12;
      if ( !v18 )
        goto LABEL_17;
      if ( v11 )
      {
        if ( v18 == v11 )
          return (unsigned int)v6;
        MiUnlockCodePage(v18, v16[0]);
LABEL_17:
        if ( !v10 )
          return (unsigned int)v6;
      }
      else
      {
        v6 = MiLockCode(a1, v18, v16[0], v9);
        if ( v6 >= 0 )
          goto LABEL_17;
        v10 = 0;
        v11 = v13;
      }
    }
  }
  if ( (dword_140571184 & 1) != 0 )
  {
    v15 = 0;
    do
    {
      v15 = MiSnapDriverRange(a1, v15, 8, 0, (__int64)&v18, (__int64)v16);
      if ( v18 )
        MiUnlockCodePage(v18, v16[0]);
    }
    while ( v15 );
    return 0LL;
  }
LABEL_8:
  v17 = 0;
  v8 = 0LL;
  v18 = 0LL;
  while ( (int)MiFindDriverNonPagedSections(a1, &v17, &v18, v16) >= 0 )
  {
    if ( a3 == 1 )
    {
      v6 = MiLockCode(a1, v18, v16[0], v7);
      if ( v6 < 0 )
      {
        v8 = v18;
        a3 = 0;
        v17 = 0;
      }
    }
    else
    {
      if ( v18 == v8 )
        return (unsigned int)v6;
      MiUnlockCodePage(v18, v16[0]);
    }
  }
  return (unsigned int)v6;
}
