/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x140749610
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1400D4F04 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
