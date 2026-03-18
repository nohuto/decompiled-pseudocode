/*
 * XREFs of ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801A7040
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801A6B0C (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x18024A54C (-Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024F8FC (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBindData(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA *a3)
{
  signed int v3; // edi
  char v6; // dl
  unsigned int v7; // eax
  enum DXGI_FORMAT v8; // r9d
  void *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  signed int Textures; // eax
  __int64 v13; // rcx
  void *v15; // [rsp+20h] [rbp-28h]
  struct CHolographicFrameProcessor *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v3 = 0;
  *((_QWORD *)this + 74) = *((_QWORD *)a3 + 1);
  *(_OWORD *)((char *)this + 600) = *((_OWORD *)a3 + 1);
  v6 = *((_BYTE *)a3 + 32);
  *((_BYTE *)this + 616) = v6;
  *((_DWORD *)this + 155) = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 156) = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 157) = *((_DWORD *)a3 + 6) - *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 158) = *((_DWORD *)a3 + 7) - *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 159) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 160) = *((_DWORD *)a3 + 5);
  if ( !v6 )
    goto LABEL_13;
  if ( *((_QWORD *)this + 82) )
    goto LABEL_13;
  *((_QWORD *)this + 82) = 0LL;
  v7 = *((_DWORD *)this + 158);
  v8 = *((_DWORD *)this + 157);
  v9 = (void *)*((_QWORD *)this + 59);
  v10 = *((_DWORD *)this + 148);
  v16 = 0LL;
  LODWORD(v15) = v8;
  v3 = CHolographicFrameProcessor::Create(*((struct CComposition **)this + 2), v10, v9, v8, v15, v7, &v16);
  *((_QWORD *)this + 82) = v16;
  if ( v3 >= 0 )
  {
LABEL_13:
    if ( *((_BYTE *)this + 616) )
    {
      Textures = CVirtualMonitorCaptureRenderTarget::CreateTextures(this, *((_DWORD *)a3 + 9));
      v3 = Textures;
      if ( Textures >= 0 )
        return (unsigned int)v3;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Textures, 0xC3u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xBEu, 0LL);
  }
  if ( v3 < 0 )
    CCaptureRenderTarget::ReleaseRenderingResources(this);
  return (unsigned int)v3;
}
