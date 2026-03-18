/*
 * XREFs of ExpIoPoolDeadlockWorker @ 0x140913520
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpIoPoolDeadlockWorker(int *a1)
{
  return DbgkWerCaptureLiveKernelDump(L"IoThreadpool", 453, *a1, *((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, 0LL, 0);
}
