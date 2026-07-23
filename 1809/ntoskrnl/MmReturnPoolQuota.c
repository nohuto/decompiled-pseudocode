/*
 * XREFs of MmReturnPoolQuota @ 0x1401374F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140439C38 -= a2;
  else
    qword_140439C40 -= a2;
}
