/*
 * XREFs of ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C0035140
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0037C30 (VidSchiCreateNodeSchedulingLog.c)
 */

void __fastcall VidSchiProcessAsyncOperation(struct _VIDSCH_NODE **P)
{
  if ( *((_DWORD *)P + 10) == 1 )
    VidSchiCreateNodeSchedulingLog(P[6]);
  _InterlockedDecrement((volatile signed __int32 *)P[4] + 2790);
  KeSetEvent((PRKEVENT)((char *)P[4] + 11168), 0, 0);
  ExFreePoolWithTag(P, 0);
}
