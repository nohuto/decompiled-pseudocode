/*
 * XREFs of ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180028108
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180025B40 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessUpdateTransform(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r11
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 10);
  v4 = *((_QWORD *)this + 7);
  v7 = *(_OWORD *)((char *)a3 + 8);
  v8 = *(_OWORD *)((char *)a3 + 24);
  CHwndRenderTarget::SetTransformParameters(v4, v3, &v8, &v7);
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(v5 + 56) + 866LL) = 1;
  return result;
}
