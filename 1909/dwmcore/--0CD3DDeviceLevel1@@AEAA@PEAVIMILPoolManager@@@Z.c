/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z @ 0x18002D074
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x18002D3CC (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD2DContext@@IEAA@XZ @ 0x18002D2E4 (--0CD2DContext@@IEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
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
  *(_DWORD *)(v3 + 776) = 0;
  *(_DWORD *)(v3 + 820) = 0;
  *(_QWORD *)(v3 + 864) = 0LL;
  *(_QWORD *)(v3 + 872) = 0LL;
  *(_QWORD *)(v3 + 896) = &CD3DResourceManager::`vftable';
  *(_DWORD *)(v3 + 968) = 0;
  InitializeSListHead((PSLIST_HEADER)(v3 + 912));
  *((_QWORD *)this + 117) = (char *)this + 928;
  *((_QWORD *)this + 116) = (char *)this + 928;
  *((_QWORD *)this + 120) = (char *)this + 952;
  *((_QWORD *)this + 119) = (char *)this + 952;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 124) = (char *)this + 1016;
  *((_QWORD *)this + 125) = (char *)this + 1016;
  *((_QWORD *)this + 126) = (char *)this + 1128;
  *((_BYTE *)this + 1163) = 1;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_DWORD *)this + 296) = 0;
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 150) = 0LL;
  *((_DWORD *)this + 302) = 0;
  *((_QWORD *)this + 152) = 0LL;
  *((_QWORD *)this + 153) = 0LL;
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 155) = 0LL;
  `vector constructor iterator'(
    (char *)this + 1248,
    8uLL,
    0xCuLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1344,
    8uLL,
    0x18uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1536,
    8uLL,
    0x30uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1920,
    8uLL,
    1uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 1928,
    8uLL,
    4uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  return this;
}
