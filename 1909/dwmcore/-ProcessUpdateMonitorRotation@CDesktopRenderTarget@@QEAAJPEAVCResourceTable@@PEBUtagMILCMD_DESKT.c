/*
 * XREFs of ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1801A7168
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180025B40 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessUpdateMonitorRotation(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *a3)
{
  __int64 *v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v11) = *((_DWORD *)a3 + 2);
  v5 = (__int64 *)*((_QWORD *)this + 22);
  DWORD1(v11) = *((_DWORD *)a3 + 3);
  v6 = *((_DWORD *)a3 + 10);
  v7 = *v5;
  *((_QWORD *)&v11 + 1) = *((_QWORD *)a3 + 2);
  v12 = *(_OWORD *)((char *)a3 + 24);
  CHwndRenderTarget::SetTransformParameters(v7, v6, &v12, &v11);
  v8 = 0LL;
  *(_BYTE *)(**((_QWORD **)this + 22) + 866LL) = 1;
  if ( *((_DWORD *)this + 50) )
  {
    do
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
      *(_BYTE *)(v9 + 866) = 1;
    }
    while ( (unsigned int)v8 < *((_DWORD *)this + 50) );
    *((float *)this + 82) = (float)*((int *)a3 + 3);
    *((float *)this + 84) = (float)*((int *)a3 + 5);
    *((float *)this + 81) = (float)*((int *)a3 + 2);
    *((float *)this + 83) = (float)*((int *)a3 + 4);
  }
  return 0LL;
}
