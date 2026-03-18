/*
 * XREFs of ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0290944
 * Callers:
 *     NtGdiRemoveMergeFont @ 0x1C0260ED0 (NtGdiRemoveMergeFont.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 */

__int64 __fastcall XDCOBJ::bRemoveMergeFont(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // r9
  __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  __int64 v10; // rcx
  struct PFT **v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rax
  struct PFT **v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h]

  v16 = a2;
  v2 = 0;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 2080LL);
  v5 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = v4;
      if ( v2 )
        break;
      v7 = *v4;
      if ( *(_DWORD *)(*v4 + 136LL) == (_DWORD)a2 && (v8 = *(_DWORD *)(v7 + 208), v9 = 0, v8) )
      {
        v10 = v7 + 224;
        while ( *(_DWORD *)(*(_QWORD *)v10 + 88LL) != HIDWORD(v16) )
        {
          ++v9;
          v10 += 8LL;
          if ( v9 >= v8 )
            goto LABEL_8;
        }
        v2 = 1;
      }
      else
      {
LABEL_8:
        v4 = (_QWORD *)v4[1];
      }
      if ( v2 )
        v6 = v5;
      v5 = v6;
      if ( !v4 )
      {
        if ( !v2 )
          return v2;
        break;
      }
    }
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    v11 = *(struct PFT ***)(*v4 + 128LL);
    --*(_DWORD *)(*v4 + 64LL);
    v15 = v11;
    v12 = 64;
    if ( v11 != gpPFTPrivate )
      v12 = 32;
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v15, (struct PFF *)*v4, 0LL, v12);
    if ( v2 )
    {
      v13 = v4[1];
      if ( v4 == *(_QWORD **)(*(_QWORD *)a1 + 2080LL) )
        *(_QWORD *)(*(_QWORD *)a1 + 2080LL) = v13;
      else
        v5[1] = v13;
      Win32FreePool(v4);
    }
  }
  return v2;
}
