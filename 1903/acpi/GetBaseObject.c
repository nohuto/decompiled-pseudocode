/*
 * XREFs of GetBaseObject @ 0x1C0010D44
 * Callers:
 *     AMLIFindNameSpaceObject @ 0x1C00084CC (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 *     DerefOf @ 0x1C001BE00 (DerefOf.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
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
