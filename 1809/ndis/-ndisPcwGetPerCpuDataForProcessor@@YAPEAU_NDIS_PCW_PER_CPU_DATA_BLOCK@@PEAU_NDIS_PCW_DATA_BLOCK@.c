/*
 * XREFs of ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C00099C8
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B8FF8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B9708 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisGetPerformanceCounters @ 0x1C00EEB68 (ndisGetPerformanceCounters.c)
 *     ndisSetPerfTrackParameters @ 0x1C00EEE54 (ndisSetPerfTrackParameters.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PCW_PER_CPU_DATA_BLOCK *__fastcall ndisPcwGetPerCpuDataForProcessor(
        struct _NDIS_PCW_DATA_BLOCK *a1,
        int a2)
{
  return (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)((char *)a1 + ndisPcwPerCpuDataStride * a2 + ndisPcwOffsetToPerCpuData);
}
