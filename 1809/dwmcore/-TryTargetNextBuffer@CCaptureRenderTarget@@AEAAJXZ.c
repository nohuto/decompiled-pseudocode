/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180159020
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180158C70 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180097528 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180157F88 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rax
  DWORD v5; // eax
  int RenderTargetForFrameBuffer; // eax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 70);
  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 71) - (_QWORD)v1) >> 3;
  if ( v4 )
  {
    v5 = WaitForMultipleObjects(v4, v1, 0, 0);
    if ( v5 == 258 )
    {
      ScheduleCompositionPass(0, 0x2000u);
    }
    else
    {
      if ( v5 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3) )
        ModuleFailFastForHRESULT(2147500037LL, retaddr);
      *((_DWORD *)this + 114) = v5;
      RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this, v5);
      v2 = RenderTargetForFrameBuffer;
      if ( RenderTargetForFrameBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, RenderTargetForFrameBuffer, 0x27Cu);
      if ( v2 == -2003304307 )
        CCaptureRenderTarget::ReleaseRenderingResources(this);
    }
  }
  return v2;
}
