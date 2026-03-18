/*
 * XREFs of ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x1800D62FC
 * Callers:
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D6178 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DDeviceLevel1::CheckTextureFormatSupported(CD3DDeviceLevel1 *this, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 79);
  v3 = 0;
  v5 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 232LL))(v2, a2, &v5) >= 0 )
    return (v5 & 0x8220) == 33312;
  return v3;
}
