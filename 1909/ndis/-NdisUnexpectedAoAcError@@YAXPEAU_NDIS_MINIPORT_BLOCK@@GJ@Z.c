/*
 * XREFs of ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00BA880
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011D330 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3C58 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall NdisUnexpectedAoAcError(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int16 a2, int a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx

  AoAc = a1->AoAc;
  NdisTraceLoggingUnexpectedAoAcError(a1, a2, a3);
  AoAc->LastUnexpectedFailureLine[1] = AoAc->LastUnexpectedFailureLine[0];
  AoAc->LastUnexpectedFailureLine[0] = a2;
}
