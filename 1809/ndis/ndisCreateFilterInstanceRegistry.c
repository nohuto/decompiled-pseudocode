/*
 * XREFs of ndisCreateFilterInstanceRegistry @ 0x1C00EC7E8
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00ECA34 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00ED2C0 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterInstanceRegistry(PCUNICODE_STRING Source, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  PUNICODE_STRING Destination; // [rsp+28h] [rbp-30h]
  _UNICODE_STRING v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)&v9.Length = 0;
  v9.Buffer = 0LL;
  LOBYTE(v10) = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x56u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, Source, a3, a2);
  v6 = ndisGetOrCreateFilterInstanceKey((int)Source, a2, a3, 1, (__int64)&v10, &v9);
  if ( !v6 && !(_BYTE)v10 )
    v6 = ndisSetAllFilterDefaultParameters(Source);
  if ( v9.Buffer )
    ExFreePoolWithTag(v9.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(Destination) = v6;
    WPP_SF_qqqL(
      0x57u,
      &WPP_121f726d2db93de0e5803b82441184b1_Traceguids,
      Source,
      a3,
      a2,
      Destination,
      *(_QWORD *)&v9.Length);
  }
  return v6;
}
