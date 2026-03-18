/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x1C000BF18
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 3736) )
    StorPortExtendedFunction(87LL, a1, 0LL);
  return StorPortExtendedFunction(87LL, a1, 0LL);
}
