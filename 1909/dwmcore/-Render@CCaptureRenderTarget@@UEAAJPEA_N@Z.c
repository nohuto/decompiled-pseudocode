/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024E330
 * Callers:
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x1801A5980 (-Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ @ 0x1800EC8F4 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x18024DCFC (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024E73C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(CCaptureRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  struct CD3DDeviceLevel1 *D3DDeviceNoRef; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  signed int Buffer; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v5 = *((_QWORD *)this + 52);
  v16 = 0;
  if ( v5 && (v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, &v16), v2 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1E7u, 0LL);
  }
  else
  {
    D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 64));
    if ( D3DDeviceNoRef
      && *((_QWORD *)this + 55)
      && ((*((_QWORD *)this + 60) - *((_QWORD *)this + 59)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
      && *((_QWORD *)this + 52)
      && *((_BYTE *)this + 352)
      && v16 )
    {
      v9 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 64), D3DDeviceNoRef);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1F5u, 0LL);
      }
      else
      {
        Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)((char *)this - 64));
        v2 = Buffer;
        if ( Buffer < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Buffer, 0x1F8u, 0LL);
        }
        else if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)((char *)this - 64)) )
        {
          v13 = COffScreenRenderTarget::Render(this, a2);
          v2 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1FDu, 0LL);
          else
            *a2 = 1;
        }
      }
    }
  }
  return v2;
}
