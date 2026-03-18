/*
 * XREFs of ExpTryUpgradeResource @ 0x14031F19C
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14031B560 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14031BCC8 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryUpgradeResource(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 64) != 1 )
    return 0;
  result = 1;
  *(_WORD *)(a1 + 26) |= 0x80u;
  return result;
}
