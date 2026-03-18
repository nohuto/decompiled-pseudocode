/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x140747710
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x140098AC4 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
