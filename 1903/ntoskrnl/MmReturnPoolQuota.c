/*
 * XREFs of MmReturnPoolQuota @ 0x14013AB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140464550 -= a2;
  else
    qword_140464558 -= a2;
}
