/*
 * XREFs of ?Valid@CVidSchSubmitData@@QEBAEXZ @ 0x1C00038B0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVidSchSubmitData::Valid(CVidSchSubmitData *this)
{
  return *(_QWORD *)this != 0LL;
}
