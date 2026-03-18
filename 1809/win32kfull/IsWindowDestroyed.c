/*
 * XREFs of IsWindowDestroyed @ 0x1C007C730
 * Callers:
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C00024E0 (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 19LL) >> 7;
}
