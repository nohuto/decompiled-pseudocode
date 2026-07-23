/*
 * XREFs of PsGetThreadTeb @ 0x140123BB0
 * Callers:
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
