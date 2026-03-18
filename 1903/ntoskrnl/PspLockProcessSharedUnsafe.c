/*
 * XREFs of PspLockProcessSharedUnsafe @ 0x14030761C
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSharedUnsafe(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 736, 0LL);
}
