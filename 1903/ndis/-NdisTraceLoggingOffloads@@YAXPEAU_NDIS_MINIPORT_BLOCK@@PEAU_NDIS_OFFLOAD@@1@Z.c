/*
 * XREFs of ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0030770
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020870 (-NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00209BC (-NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020B08 (-NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020BDC (-NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020CB0 (-NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020DE0 (-NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00308F4 (-NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0030C3C (-NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0030F84 (-NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00310F8 (-NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 */

void __fastcall NdisTraceLoggingOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        struct _NDIS_OFFLOAD *a3)
{
  UCHAR Revision; // al

  NdisTraceLoggingChecksumHardwareOffloads(a1, a2);
  NdisTraceLoggingChecksumConfigOffloads(a1, a3);
  NdisTraceLoggingLsoV2HardwareOffloads(a1, a2);
  NdisTraceLoggingLsoV2ConfigOffloads(a1, a3);
  Revision = a2->Header.Revision;
  if ( Revision >= 3u )
  {
    NdisTraceLoggingRscHardwareOffloads(a1, a2);
    NdisTraceLoggingRscConfigOffloads(a1, a3);
    NdisTraceLoggingGreTaskHardwareOffloads(a1, a2);
    NdisTraceLoggingGreTaskeConfigOffloads(a1, a3);
    Revision = a2->Header.Revision;
  }
  if ( Revision >= 4u )
  {
    NdisTraceLoggingVxLanHardwareOffloads(a1, a2);
    NdisTraceLoggingVxLanConfigOffloads(a1, a3);
  }
}
