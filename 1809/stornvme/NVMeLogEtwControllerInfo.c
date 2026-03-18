/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x1C0006588
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 3728) )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
}
