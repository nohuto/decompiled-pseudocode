/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x1801683C0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?PushCandidates@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800D5208 (-PushCandidates@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  CMILCOMBase *v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)this = *(_QWORD *)a2;
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    *((_QWORD *)a2 + 2));
  v4 = (CMILCOMBase *)*((_QWORD *)a2 + 3);
  *((_QWORD *)this + 3) = v4;
  if ( v4 )
    CMILCOMBase::InternalAddRef(v4);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)((char *)a2 + 56);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 88);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)a2 + 136);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a2 + 152);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v5 = *((_QWORD *)a2 + 22);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 21);
  *((_QWORD *)this + 22) = *((_QWORD *)a2 + 22);
  *((_BYTE *)this + 184) = *((_BYTE *)a2 + 184);
  *((_BYTE *)this + 185) = *((_BYTE *)a2 + 185);
  *((_BYTE *)this + 186) = *((_BYTE *)a2 + 186);
  *((_BYTE *)this + 187) = *((_BYTE *)a2 + 187);
  *((_BYTE *)this + 188) = *((_BYTE *)a2 + 188);
  *((_BYTE *)this + 189) = *((_BYTE *)a2 + 189);
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 24);
  *((_BYTE *)this + 200) = *((_BYTE *)a2 + 200);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_BYTE *)this + 208) = *((_BYTE *)a2 + 208);
  *((_BYTE *)this + 209) = *((_BYTE *)a2 + 209);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_BYTE *)this + 224) = *((_BYTE *)a2 + 224);
  *((_BYTE *)this + 225) = *((_BYTE *)a2 + 225);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_BYTE *)this + 236) = *((_BYTE *)a2 + 236);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  *((_BYTE *)this + 248) = *((_BYTE *)a2 + 248);
  return this;
}
