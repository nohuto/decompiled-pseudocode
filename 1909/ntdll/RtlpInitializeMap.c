/*
 * XREFs of RtlpInitializeMap @ 0x1800F461C
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800F4574 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800F4D74 (RtlpSetBlockInfo.c)
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x838uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
