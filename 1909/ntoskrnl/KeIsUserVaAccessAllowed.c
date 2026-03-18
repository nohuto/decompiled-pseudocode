/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x14012DBD4
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     MiDbgCopyMemory @ 0x1402D0648 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

bool KeIsUserVaAccessAllowed()
{
  _BYTE v1[3]; // [rsp+0h] [rbp-8h]

  return !KeSmapEnabled || (*(_DWORD *)v1 & 0x40000) != 0;
}
