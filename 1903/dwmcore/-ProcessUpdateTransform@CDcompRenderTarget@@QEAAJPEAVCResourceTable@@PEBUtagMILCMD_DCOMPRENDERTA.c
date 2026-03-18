/*
 * XREFs of ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800B0FE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x1800B10D8 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessUpdateTransform(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r11
  __int64 result; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((unsigned int *)a3 + 10);
  v4 = *((_QWORD *)this + 7);
  v7[0] = *((_DWORD *)a3 + 2);
  v7[1] = *((_DWORD *)a3 + 3);
  v7[2] = *((_DWORD *)a3 + 4);
  v7[3] = *((_DWORD *)a3 + 5);
  v8[0] = *((_DWORD *)a3 + 6);
  v8[1] = *((_DWORD *)a3 + 7);
  v8[2] = *((_DWORD *)a3 + 8);
  v8[3] = *((_DWORD *)a3 + 9);
  CHwndRenderTarget::SetTransformParameters(v4, v3, v8, v7);
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(v5 + 56) + 866LL) = 1;
  return result;
}
