/*
 * XREFs of CommonBuffer_ReleaseSecureBuffer @ 0x1C00025D8
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 * Callees:
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C006B054 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

void __fastcall CommonBuffer_ReleaseSecureBuffer(__int64 a1, _QWORD *a2)
{
  SecureDmaEnabler_FreeCommonBufferPage(a1, a2[11]);
  ExFreePoolWithTag(a2, 0x49434858u);
}
