/*
 * XREFs of ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800D77A0
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800940C4 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::EstimateNextVSync(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v1; // r9
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9

  v1 = (_QWORD *)*((_QWORD *)this + 3238);
  if ( v1[2] )
  {
    v2 = v1[38];
    v3 = *((_QWORD *)this + 4455) - v2 + v1[183] - (*((_QWORD *)this + 4455) - v2) % v1[183];
  }
  else
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 3237) + 1464LL);
    v3 = *((_QWORD *)this + 4455) - *((_QWORD *)this + 4455) % v2;
  }
  return v2 + v3;
}
