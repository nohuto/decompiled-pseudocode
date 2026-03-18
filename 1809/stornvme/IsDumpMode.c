/*
 * XREFs of IsDumpMode @ 0x1C000ABC8
 * Callers:
 *     NVMeBuildPollingConfiguration @ 0x1C0014798 (NVMeBuildPollingConfiguration.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDumpMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 16) != 0;
}
