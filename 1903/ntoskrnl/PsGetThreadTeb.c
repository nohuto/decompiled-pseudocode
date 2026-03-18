/*
 * XREFs of PsGetThreadTeb @ 0x140120C20
 * Callers:
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406CA310 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
