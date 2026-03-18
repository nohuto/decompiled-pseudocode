/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x140111ED4
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x1401115EC (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhBucketInitialize @ 0x1401117BC (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x140111F54 (RtlpHpLfhBucketAllocateSlot.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

_BYTE *__fastcall RtlpHpLfhOwnerInitialize(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 = 1;
  else
    a1[2] = a3;
  a1[1] = a2;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  return result;
}
