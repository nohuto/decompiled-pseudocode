/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180158C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ @ 0x180158500 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158AE0 (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180159020 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(CCaptureRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int Buffer; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v5 = *((_QWORD *)this + 52);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, &v15);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1C9u);
      return v2;
    }
    if ( !v15 )
      CCaptureRenderTarget::ReleaseFlipResources((void **)this - 8, (__int64)a2);
  }
  if ( *((_QWORD *)this + 42)
    && *((_QWORD *)this + 55)
    && ((*((_QWORD *)this + 60) - *((_QWORD *)this + 59)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
    && *((_QWORD *)this + 52)
    && *((_BYTE *)this + 360) )
  {
    v8 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 64), (unsigned __int64)a2);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1D9u);
    }
    else
    {
      Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)((char *)this - 64));
      v2 = Buffer;
      if ( Buffer < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Buffer, 0x1DCu);
      }
      else if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)((char *)this - 64)) )
      {
        v12 = COffScreenRenderTarget::Render(this, a2);
        v2 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1E1u);
        else
          *a2 = 1;
      }
    }
  }
  return v2;
}
