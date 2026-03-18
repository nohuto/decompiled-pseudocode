/*
 * XREFs of ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E7594
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00DE8C0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorDepthFromPickedWireFormat(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a1;
  switch ( (((unsigned int)a1 | (((unsigned int)a1 | (((unsigned int)a1 | ((unsigned int)a1 >> 6)) >> 6)) >> 6)) >> 2) & 0x3F )
  {
    case 1u:
      return 6LL;
    case 2u:
      return 8LL;
    case 4u:
      return 10LL;
    case 8u:
      return 12LL;
    case 0x10u:
      return 14LL;
    case 0x20u:
      return 16LL;
  }
  v5 = WdLogNewEntry5_WdError(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = v3;
  WdLogEvent5_WdError(v5);
  return 0LL;
}
