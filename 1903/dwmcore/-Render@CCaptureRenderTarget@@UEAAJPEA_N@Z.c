/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024FA40
 * Callers:
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x1801A7240 (-Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ @ 0x1800EA934 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EBBE4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x18024F40C (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024FE4C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(CCaptureRenderTarget *this, bool *a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  struct CD3DDeviceLevel1 *D3DDeviceNoRef; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  signed int Buffer; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0;
  v6 = *((_QWORD *)this + 52);
  v17 = 0;
  if ( v6 && (v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v17), v3 = v7, v7 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1CDu, 0LL);
  }
  else
  {
    D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 64));
    if ( D3DDeviceNoRef
      && *((_QWORD *)this + 55)
      && ((*((_QWORD *)this + 60) - *((_QWORD *)this + 59)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
      && *((_QWORD *)this + 52)
      && *((_BYTE *)this + 352)
      && v17 )
    {
      v10 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 64), D3DDeviceNoRef);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1DBu, 0LL);
      }
      else
      {
        Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)((char *)this - 64));
        v3 = Buffer;
        if ( Buffer < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Buffer, 0x1DEu, 0LL);
        }
        else if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)((char *)this - 64)) )
        {
          v14 = COffScreenRenderTarget::Render(this, a2, a3);
          v3 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1E3u, 0LL);
          else
            *a2 = 1;
        }
      }
    }
  }
  return v3;
}
