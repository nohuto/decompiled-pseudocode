/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C00128BC
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00127A0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013BD8 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v4; // r8

  if ( *(_BYTE *)(a1 + 2008) && (v4 = *(_QWORD *)(a1 + 1984)) != 0 && a2 > v4 + *(_QWORD *)(a1 + 1992) )
  {
    VidSchiStopNodeYield((struct _VIDSCH_NODE *)a1);
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
}
