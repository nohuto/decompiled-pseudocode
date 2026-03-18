/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x14012D104
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     MiDbgCopyMemory @ 0x1402D08E8 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

bool KeIsUserVaAccessAllowed()
{
  _BYTE v1[3]; // [rsp+0h] [rbp-8h]

  return !KeSmapEnabled || (*(_DWORD *)v1 & 0x40000) != 0;
}
