/*
 * XREFs of GetBaseObject @ 0x1C00141B8
 * Callers:
 *     DerefOf @ 0x1C000B120 (DerefOf.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C001398C (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
