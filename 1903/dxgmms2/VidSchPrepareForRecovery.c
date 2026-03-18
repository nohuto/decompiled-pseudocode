/*
 * XREFs of VidSchPrepareForRecovery @ 0x1C00CDF80
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00CE17C (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchPrepareForRecovery(__int64 a1)
{
  VidSchiBlockDriverCallback(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2560LL) + 528LL));
  return 0LL;
}
