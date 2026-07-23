/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x14013CC4C
 * Callers:
 *     MiCreateUltraThreadContext @ 0x14013CBE4 (MiCreateUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x1402CE1DC (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14013DB2C (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed __int32 v3; // r10d
  bool v6; // zf
  signed __int32 v7; // eax
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 Page; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rdi

  v3 = dword_14043BDA4;
  if ( dword_14043BDA4 != dword_14043BDA0 )
  {
    while ( 1 )
    {
      v7 = _InterlockedCompareExchange(&dword_14043BDA4, v3 + 1, v3);
      v6 = v3 == v7;
      v3 = v7;
      if ( v6 )
        break;
      if ( v7 == dword_14043BDA0 )
        return 0LL;
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = -1LL;
    *(_QWORD *)(a1 + 16) = -1LL;
    v8 = a2;
    if ( !a2 )
      goto LABEL_10;
    if ( a2 > 2uLL )
      v8 = 2LL;
    if ( (unsigned int)MiAcquireNonPagedResources(&MiSystemPartition, (unsigned int)v8) )
    {
      v9 = 0LL;
      if ( v8 )
      {
        while ( 1 )
        {
          Page = MiGetPage((__int64)&MiSystemPartition, a3, 0x30Au);
          if ( Page == -1 )
            break;
          v11 = (_QWORD *)(48 * Page - 0x57FFFFFFFF0LL);
          *v11 = ZeroPte;
          MiSetOriginalPtePfnFromFreeList(v11);
          *(_QWORD *)(a1 + 8 * v9 + 8) = v12;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_10;
        }
        _InterlockedAdd(&dword_14043BDA4, 0xFFFFFFFF);
        if ( (_DWORD)v9 )
        {
          v14 = (_QWORD *)(a1 + 8 * v9 + 8);
          do
          {
            MiReleaseFreshPage(48LL * *--v14 - 0x58000000000LL);
            *v14 = -1LL;
            LODWORD(v9) = v9 - 1;
          }
          while ( (_DWORD)v9 );
        }
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, v8);
        return 0LL;
      }
LABEL_10:
      *(_BYTE *)(a1 + 24) = 1;
      return 1LL;
    }
    _InterlockedAdd(&dword_14043BDA4, 0xFFFFFFFF);
  }
  return 0LL;
}
