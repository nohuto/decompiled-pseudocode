/*
 * XREFs of ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x180078B10
 * Callers:
 *     ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x180078AE0 (-GetZbid@CImmersiveApp@@UEAA-AW4ZBID@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 152) + 136LL))(*(_QWORD *)(a1 + 152), &v4) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v5) >= 0 )
  {
    GetWindowBand(v5, &v3);
  }
  v1 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  return v1;
}
