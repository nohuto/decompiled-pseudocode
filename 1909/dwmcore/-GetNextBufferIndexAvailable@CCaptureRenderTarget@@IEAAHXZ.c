/*
 * XREFs of ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1800EE2E8
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1800EDE00 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024E73C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800CA438 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCaptureRenderTarget::GetNextBufferIndexAvailable(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rax
  DWORD v5; // eax
  __int64 v6; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 70);
  v2 = -1;
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
        ModuleFailFastForHRESULT(2147500037LL, retaddr, v6);
      return v5;
    }
  }
  return v2;
}
