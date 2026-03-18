/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x1400D4EE0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1400D4F04 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_140467610);
  return result;
}
