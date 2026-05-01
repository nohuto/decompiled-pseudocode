/*
 * XREFs of ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x180372DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180374C6C (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x180374F44 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 */

void __fastcall CDragVisual::SetDragStartRect(CDragVisual *this, struct tagRECT *a2)
{
  __int128 v2; // xmm0
  LONG bottom; // eax
  HWND v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v10; // [rsp+60h] [rbp-20h] BYREF

  v2 = *(_OWORD *)((char *)this + 216);
  *((_BYTE *)this + 253) = 1;
  LODWORD(v7) = a2->left;
  *(_QWORD *)((char *)&v7 + 4) = *(_QWORD *)&a2->top;
  bottom = a2->bottom;
  v5 = (HWND)*((_QWORD *)this + 16);
  HIDWORD(v7) = bottom;
  v6 = v7;
  *(_OWORD *)((char *)this + 232) = v7;
  *(_OWORD *)&Points[0].x = v6;
  v10 = v2;
  MapWindowPoints(0LL, v5, Points, 2u);
  if ( CDragVisual::_UpdateThumbnailRect((CDragVisual *)((char *)this - 24), (const struct Geometry::CRect *)Points)
    && *((_QWORD *)this + 10) )
  {
    *(_QWORD *)&v7 = *((_QWORD *)this + 6);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v8, (__int64 *)&v7, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11)) )
      (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
        *((_QWORD *)this + 11),
        &v10,
        0LL,
        0LL);
    CDragVisual::_UpdateThumbnail((char *)this - 24, 3LL, 9LL);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v8);
  }
}
