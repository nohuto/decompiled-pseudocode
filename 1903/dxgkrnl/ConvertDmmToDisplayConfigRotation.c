/*
 * XREFs of ConvertDmmToDisplayConfigRotation @ 0x1C00DE258
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigRotation(unsigned int a1)
{
  unsigned int v1; // r10d
  __int64 result; // rax

  v1 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  result = 1LL;
  if ( v1 - 1 <= 3 )
    return v1;
  return result;
}
