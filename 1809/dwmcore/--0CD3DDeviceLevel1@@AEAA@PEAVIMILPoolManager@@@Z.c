/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z @ 0x1800D5D40
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800D60A8 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CD2DContext@@IEAA@XZ @ 0x1800D5FC0 (--0CD2DContext@@IEAA@XZ.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::CD3DDeviceLevel1(CD3DDeviceLevel1 *this, struct IMILPoolManager *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8

  CD2DContext::CD2DContext(this);
  *(_QWORD *)(v3 + 512) = v4;
  *(_DWORD *)(v3 + 504) = 0;
  *(_QWORD *)(v3 + 520) = v3 + 552;
  *(_QWORD *)(v3 + 528) = v3 + 552;
  *(_DWORD *)(v3 + 536) = 1;
  *(_QWORD *)(v3 + 540) = 1LL;
  *(_DWORD *)(v3 + 560) = 0;
  *(_QWORD *)(v3 + 568) = 0LL;
  *(_QWORD *)(v3 + 576) = 0LL;
  *(_QWORD *)(v3 + 584) = 0LL;
  *(_QWORD *)v3 = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *(_QWORD *)(v3 + 496) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v3 + 592) = 0LL;
  *(_QWORD *)(v3 + 600) = -1LL;
  *(_QWORD *)(v3 + 608) = 0LL;
  *(_QWORD *)(v3 + 616) = 0LL;
  *(_QWORD *)(v3 + 632) = 0LL;
  *(_QWORD *)(v3 + 640) = 0LL;
  *(_QWORD *)(v3 + 648) = 0LL;
  *(_QWORD *)(v3 + 656) = 0LL;
  *(_QWORD *)(v3 + 664) = 0LL;
  *(_QWORD *)(v3 + 672) = 0LL;
  *(_QWORD *)(v3 + 696) = 0LL;
  *(_QWORD *)(v3 + 704) = 0LL;
  *(_QWORD *)(v3 + 720) = 0LL;
  *(_QWORD *)(v3 + 728) = 0LL;
  *(_QWORD *)(v3 + 736) = 1LL;
  *(_QWORD *)(v3 + 768) = 0LL;
  *(_QWORD *)(v3 + 744) = 0LL;
  *(_QWORD *)(v3 + 752) = 0LL;
  *(_QWORD *)(v3 + 760) = 0xFFFFLL;
  *(_WORD *)(v3 + 776) = 0;
  *(_BYTE *)(v3 + 778) = 0;
  *(_DWORD *)(v3 + 784) = 0;
  *(_QWORD *)(v3 + 832) = 0LL;
  *(_QWORD *)(v3 + 840) = 0LL;
  *(_QWORD *)(v3 + 864) = &CD3DResourceManager::`vftable';
  *(_DWORD *)(v3 + 936) = 0;
  InitializeSListHead((PSLIST_HEADER)(v3 + 880));
  *((_QWORD *)this + 113) = (char *)this + 896;
  *((_QWORD *)this + 112) = (char *)this + 896;
  *((_QWORD *)this + 116) = (char *)this + 920;
  *((_QWORD *)this + 115) = (char *)this + 920;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_BYTE *)this + 1027) = 1;
  `vector constructor iterator'(
    (char *)this + 1032,
    8LL,
    8LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 278) = 0;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 143) = 0LL;
  `vector constructor iterator'(
    (char *)this + 1152,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1184,
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1376,
    8LL,
    48LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1760,
    8LL,
    1LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1768,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  return this;
}
