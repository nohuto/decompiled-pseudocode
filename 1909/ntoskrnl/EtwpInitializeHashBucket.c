/*
 * XREFs of EtwpInitializeHashBucket @ 0x140770264
 * Callers:
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpInitializeHashBucket(_QWORD *a1)
{
  __int64 result; // rax

  a1[6] = 0LL;
  result = 3LL;
  do
  {
    a1[1] = a1;
    *a1 = a1;
    a1 += 2;
    --result;
  }
  while ( result );
  return result;
}
