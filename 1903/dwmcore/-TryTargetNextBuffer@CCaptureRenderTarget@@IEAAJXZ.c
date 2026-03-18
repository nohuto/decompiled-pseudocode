/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024FE4C
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024FA40 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180043B58 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024F14C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rax
  DWORD v5; // eax
  signed int RenderTargetForFrameBuffer; // eax
  __int64 v8; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

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
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      *((_DWORD *)this + 112) = v5;
      RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
      v2 = RenderTargetForFrameBuffer;
      if ( RenderTargetForFrameBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, RenderTargetForFrameBuffer, 0x299u, 0LL);
    }
  }
  return v2;
}
