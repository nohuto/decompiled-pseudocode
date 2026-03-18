/*
 * XREFs of MmReturnPoolQuota @ 0x1401373D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140438B78 -= a2;
  else
    qword_140438B80 -= a2;
}
