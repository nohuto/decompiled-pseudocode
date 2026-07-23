/*
 * XREFs of sub_18008BAD0 @ 0x18008BAD0
 * Callers:
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_180082D20 @ 0x180082D20 (sub_180082D20.c)
 * Callees:
 *     ZwCompareSigningLevels @ 0x18009DA10 (ZwCompareSigningLevels.c)
 *     ZwGetCachedSigningLevel @ 0x18009E430 (ZwGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x18009F730 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall sub_18008BAD0(void *a1, __int64 a2, ULONG *a3, SE_SIGNING_LEVEL a4, _BYTE *a5)
{
  SE_SIGNING_LEVEL *v5; // rsi
  _BYTE *v6; // r14
  NTSTATUS CachedSigningLevel; // ebx
  HANDLE SourceFiles; // [rsp+40h] [rbp+8h] BYREF

  SourceFiles = a1;
  v5 = (SE_SIGNING_LEVEL *)(a2 + 284);
  v6 = a5;
  *a5 = 0;
  CachedSigningLevel = ZwGetCachedSigningLevel(a1, a3, (PSE_SIGNING_LEVEL)(a2 + 284), 0LL, 0LL, 0LL);
  if ( CachedSigningLevel < 0 || ZwCompareSigningLevels(*v5, a4) < 0 )
  {
    CachedSigningLevel = ZwSetCachedSigningLevel(4u, a4, &SourceFiles, 1u, SourceFiles);
    if ( CachedSigningLevel < 0 )
      *v6 = 1;
    else
      *v5 = a4;
  }
  return (unsigned int)CachedSigningLevel;
}
