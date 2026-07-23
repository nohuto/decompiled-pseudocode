/*
 * XREFs of HvFreeUnreconciledData @ 0x1406C4FE4
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvFoldBackUnreconciledData @ 0x1407FBF28 (HvFoldBackUnreconciledData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeUnreconciledData(__int64 a1)
{
  void *v2; // rcx
  __int64 i; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1768);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1768) = 0LL;
    *(_BYTE *)(a1 + 1720) = 0;
  }
  if ( *(_QWORD *)(a1 + 1736) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1760); i = (unsigned int)(i + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1752) + 24 * i + 8);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1752), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1736), 0);
    *(_QWORD *)(a1 + 1752) = 0LL;
    *(_DWORD *)(a1 + 1760) = 0;
    *(_DWORD *)(a1 + 1728) = 0;
    *(_QWORD *)(a1 + 1736) = 0LL;
  }
}
