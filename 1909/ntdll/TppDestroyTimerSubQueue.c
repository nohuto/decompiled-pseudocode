/*
 * XREFs of TppDestroyTimerSubQueue @ 0x180081DE0
 * Callers:
 *     TppInitializeTimerQueue @ 0x18002EB80 (TppInitializeTimerQueue.c)
 *     TppPoolpFree @ 0x180081CD0 (TppPoolpFree.c)
 * Callees:
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

NTSTATUS __fastcall TppDestroyTimerSubQueue(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  NtClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = NtClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
