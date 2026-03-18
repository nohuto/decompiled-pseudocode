/*
 * XREFs of ?ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETTRANSFORM@@@Z @ 0x1801CF114
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x18024FDE0 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 */

__int64 __fastcall CCaptureController::ProcessSetTransform(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETTRANSFORM *a3)
{
  unsigned int v5; // edx
  __int64 Resource; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  CCaptureRenderTarget **v9; // rbx
  CCaptureRenderTarget **v10; // rbp
  signed int v11; // eax
  __int64 v12; // rcx

  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  v7 = 0;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xB4u)) != 0 )
  {
    v8 = *((_QWORD *)this + 15);
    if ( Resource != v8 )
    {
      *((_QWORD *)this + 15) = Resource;
      if ( Resource )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (CCaptureRenderTarget **)*((_QWORD *)this + 7);
      v10 = (CCaptureRenderTarget **)*((_QWORD *)this + 8);
      while ( v9 != v10 )
      {
        v11 = CCaptureRenderTarget::SetTransform(*v9, *((struct CTransform3D **)this + 15));
        v7 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x80u, 0LL);
          return v7;
        }
        ++v9;
      }
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88980403, 0x75u, 0LL);
  }
  return v7;
}
