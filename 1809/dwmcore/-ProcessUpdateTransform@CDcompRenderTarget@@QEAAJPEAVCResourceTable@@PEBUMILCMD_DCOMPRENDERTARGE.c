/*
 * XREFs of ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18007A59C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x18008FE14 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessUpdateTransform(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM *a3)
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
  ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))CHwndRenderTarget::SetTransformParameters)(v4, v3, v8, v7);
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(v5 + 56) + 866LL) = 1;
  return result;
}
