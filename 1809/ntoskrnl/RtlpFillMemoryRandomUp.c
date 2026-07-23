/*
 * XREFs of RtlpFillMemoryRandomUp @ 0x1402F81B0
 * Callers:
 *     RtlpGenericRandomPatternWorker @ 0x1402F8724 (RtlpGenericRandomPatternWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpFillMemoryRandomUp(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 result; // rax
  unsigned __int64 *v6; // rdx

  v4 = 0LL;
  result = a1 + 4096;
  v6 = (unsigned __int64 *)a1;
  if ( (a1 + 4096 >= a1 ? 0x200 : 0) != 0 )
  {
    do
    {
      *v6++ = a3;
      result = a3 >> 4;
      ++v4;
      a3 = (a3 >> 4) ^ *(_QWORD *)(a4 + 8 * (a3 & 0xF));
    }
    while ( v4 < (a1 + 4096 >= a1 ? 0x200 : 0) );
  }
  return result;
}
