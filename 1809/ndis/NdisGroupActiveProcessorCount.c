/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0025BB0
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B8FF8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C4DF8 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
