/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x1400E2A60
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1400E2A84 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_14043BE50);
  return result;
}
