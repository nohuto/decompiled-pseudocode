/*
 * XREFs of _PnpMultiSzDeleteString @ 0x1409016D0
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1408FF190 (_CmGetDeviceSiblings.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpMultiSzGetLen @ 0x14059E928 (_PnpMultiSzGetLen.c)
 */

char __fastcall PnpMultiSzDeleteString(wchar_t *a1, wchar_t *Str2)
{
  wchar_t *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  wchar_t *v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  PVOID PoolWithTag; // rax
  void *v11; // rsi

  v3 = a1;
  if ( a1 && Str2 )
  {
    if ( !*a1 )
      return 1;
    while ( 1 )
    {
      v4 = wcsicmp(v3, Str2);
      v5 = -1LL;
      do
        ++v5;
      while ( v3[v5] );
      if ( !v4 )
        break;
      v3 += v5 + 1;
      if ( !*v3 )
        return 1;
    }
    v6 = &v3[v5];
    if ( !v6[1] )
    {
      *(_DWORD *)v3 = 0;
      return 1;
    }
    v8 = 2 * PnpMultiSzGetLen(v6 + 1);
    if ( v8 )
    {
      v9 = v8;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x52504E50u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v6 + 1, v9);
        memmove(v3, v11, v9);
        ExFreePoolWithTag(v11, 0);
        return 1;
      }
    }
  }
  return 0;
}
