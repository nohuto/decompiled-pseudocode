/*
 * XREFs of ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x1803D9330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18034F840 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18034F8C4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803DAA84 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 */

void __fastcall CDragVisual::ShowPlaceModeEntryAnimation(CDragVisual *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4[2]; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)&rc.left = *((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&rc.left);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v4, (__int64 *)&rc.left, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc.left);
  if ( *((_DWORD *)this + 31) == 6 && *((_QWORD *)this + 11) )
  {
    v2 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
    rc = *(struct tagRECT *)((char *)this + 216);
    InflateRect(
      &rc,
      (int)(float)((float)(*((_DWORD *)this + 56) - *((_DWORD *)this + 54)) * -0.3125),
      (int)(float)((float)v2 * -0.3125));
    v3 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
           *((_QWORD *)this + 11),
           &rc,
           0LL,
           0LL);
    if ( v3 >= 0 )
      CDragVisual::_UpdateThumbnail((char *)this - 24, 18LL, 1LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4A0,
        (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
        (const char *)(unsigned int)v3);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v4);
}
