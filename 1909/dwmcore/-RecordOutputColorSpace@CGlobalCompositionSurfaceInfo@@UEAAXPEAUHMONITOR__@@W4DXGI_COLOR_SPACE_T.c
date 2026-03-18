/*
 * XREFs of ?RecordOutputColorSpace@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18001A280
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180017840 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::RecordOutputColorSpace(
        CGlobalCompositionSurfaceInfo *this,
        HMONITOR a2,
        __int64 a3)
{
  CComposition *v4; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HMONITOR, __int64))(**((_QWORD **)this + 29) + 32LL))(
         *((_QWORD *)this + 29),
         a2,
         a3) )
  {
    v4 = (CComposition *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
    CComposition::AddCompSurfInfoUpdate(v4, this);
  }
}
