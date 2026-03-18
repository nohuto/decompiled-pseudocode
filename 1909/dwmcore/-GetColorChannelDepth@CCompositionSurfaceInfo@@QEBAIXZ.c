/*
 * XREFs of ?GetColorChannelDepth@CCompositionSurfaceInfo@@QEBAIXZ @ 0x1801CC02C
 * Callers:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801853F4 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800451AC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::GetColorChannelDepth(CCompositionSurfaceInfo *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  int *v3; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(CCompositionSurfaceInfo *))(*(_QWORD *)this + 48LL))(this);
  if ( v2 )
  {
    v3 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v2 + 144) + 24LL))(v2 + 144, v5);
    return (unsigned int)GetColorChannelDepth(*v3);
  }
  return v1;
}
