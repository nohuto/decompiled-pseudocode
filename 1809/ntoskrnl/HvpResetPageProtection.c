/*
 * XREFs of HvpResetPageProtection @ 0x14068F970
 * Callers:
 *     HvResetDirtyData @ 0x1405A96E4 (HvResetDirtyData.c)
 * Callees:
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 */

__int64 __fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int i; // ebx
  unsigned int j; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(BugCheckParameter2 + 88);
  v2 = 0;
  if ( v1 )
  {
    do
    {
      for ( i = v2; i < v1; ++i )
      {
        if ( _bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), i) == 1 )
          break;
      }
      for ( j = i; i < v1; ++i )
      {
        if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), i) )
          break;
      }
      v2 = i;
      result = HvpSetRangeProtection(BugCheckParameter2, j << 9, (i - j) << 9, 2u);
    }
    while ( i < v1 );
  }
  return result;
}
