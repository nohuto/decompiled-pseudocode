/*
 * XREFs of ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x18002D8FC
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x18002DEEC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::QueryWarpExtension(CD3DDeviceLevel1 *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v2; // r14
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 79);
  v2 = (__int64 *)((char *)this + 616);
  v4 = **v1;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 77);
  if ( v4(v1, &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71, v2) >= 0 )
  {
    v5 = *v2;
    v6 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 24LL))(v5, &v6) >= 0 )
      *((_DWORD *)this + 156) = v7;
  }
}
