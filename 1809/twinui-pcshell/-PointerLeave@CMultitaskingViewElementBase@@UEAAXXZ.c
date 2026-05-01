/*
 * XREFs of ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1803049A0
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1802F74C0 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x18030C510 (-PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x180310760 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x1803035D4 (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x180303640 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1803036A4 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-49h] BYREF
  int v4; // [rsp+30h] [rbp-39h]
  int v5; // [rsp+34h] [rbp-35h]
  int v6; // [rsp+38h] [rbp-31h]
  _OWORD v7[2]; // [rsp+40h] [rbp-29h] BYREF
  int v8; // [rsp+60h] [rbp-9h]
  _DWORD v9[8]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v10; // [rsp+90h] [rbp+27h] BYREF
  __int64 v11; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v12; // [rsp+A0h] [rbp+37h]
  int v13; // [rsp+B0h] [rbp+47h]

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v9,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  if ( *((_DWORD *)this + 25) )
  {
    v9[0] = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v13 = 0;
    v12 = 0LL;
  }
  else
  {
    memset_0(&v3, 0, 0x48uLL);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v8 = 0;
    v3 = 0LL;
    memset(v7, 0, sizeof(v7));
    CMultitaskingViewElementBase::PointerTracking::operator=((__int64)v9, (__int64)&v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7 + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7);
  }
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2);
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v9);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 568LL))(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
