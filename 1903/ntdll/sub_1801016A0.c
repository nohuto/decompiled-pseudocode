/*
 * XREFs of sub_1801016A0 @ 0x1801016A0
 * Callers:
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_180101010 @ 0x180101010 (sub_180101010.c)
 *     sub_180101400 @ 0x180101400 (sub_180101400.c)
 *     sub_18010194C @ 0x18010194C (sub_18010194C.c)
 *     sub_180102C88 @ 0x180102C88 (sub_180102C88.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_1801016A0(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 20 )
  {
    sub_18010194C(sub_1801016A0);
  }
  else if ( a1 == 21 )
  {
    sub_180101010();
  }
  if ( a1 == 3 )
    sub_180102C88(a2, a3);
  return sub_180101400();
}
