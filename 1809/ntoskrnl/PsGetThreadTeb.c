/*
 * XREFs of PsGetThreadTeb @ 0x140123AE0
 * Callers:
 *     PspWow64SetContextThread @ 0x1406A89BC (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406A8D74 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
