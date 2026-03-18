/*
 * XREFs of PsGetThreadTeb @ 0x140121A70
 * Callers:
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406C8D28 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
