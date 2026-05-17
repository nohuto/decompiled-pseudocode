/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800DB5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlWow64SetThreadContext()
{
  return NtSetInformationThread();
}
