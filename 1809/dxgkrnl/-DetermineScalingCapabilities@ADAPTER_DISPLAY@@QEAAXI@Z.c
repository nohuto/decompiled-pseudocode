/*
 * XREFs of ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C012E100
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C012E474 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C012E8D0 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

void __fastcall ADAPTER_DISPLAY::DetermineScalingCapabilities(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rdi
  bool v4; // bl
  unsigned int v5; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v6[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v7; // [rsp+80h] [rbp+30h] BYREF
  float v8; // [rsp+88h] [rbp+38h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS v9; // [rsp+90h] [rbp+40h] BYREF
  float v10; // [rsp+98h] [rbp+48h] BYREF

  v2 = a2;
  v4 = 0;
  if ( ((int)ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(this, a2, v6, &v7, &v5, &v9, &v8, &v10) < 0
     || v7 == 1
     || (*(_BYTE *)&v9.0 & 0x10) == 0
     || v8 == 1.0)
    && (int)ADAPTER_DISPLAY::GetPostCompositionCaps(this, v2, &v8, &v10) >= 0 )
  {
    v4 = v8 > 1.0;
  }
  *(_BYTE *)(3760 * v2 + *((_QWORD *)this + 14) + 1113) = v4;
}
