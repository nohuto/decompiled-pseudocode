/*
 * XREFs of QpcToMilliseconds @ 0x1800A51D0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

double __fastcall QpcToMilliseconds(__int64 a1)
{
  double v1; // xmm0_8

  v1 = (double)(int)a1;
  if ( a1 < 0 )
    v1 = v1 + 1.844674407370955e19;
  return v1 / ((double)(int)g_qpcFrequency.LowPart / 1000.0);
}
