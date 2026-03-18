/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0191EC8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0190448 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C0191E94 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C01921B8 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x1C01934A8 (-WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z.c)
 *     ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x1C019BE74 (ApiSetEditionExtensibility_WakeMITForInterceptCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::Marshal(
        __int64 a1,
        const struct _MouseInterceptorData *a2,
        _QWORD *a3)
{
  CInputThread *v5; // rbx
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // bl

  if ( CMouseProcessor::MouseInterceptState::PrepareForMarshaling((CMouseProcessor::MouseInterceptState *)a1, a2)
    && (unsigned int)ApiSetEditionExtensibility_WakeMITForInterceptCallout() )
  {
    v5 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5, 0LL);
    v6 = (struct _KTHREAD *)*((_QWORD *)v5 + 4);
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
    if ( !v6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    v10 = CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
            (CMouseProcessor::MouseInterceptState::MarshalSync *)(a1 + 112),
            v6);
    RIMLockExclusive(a1);
    if ( !v10
      || !CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
    {
      *(_OWORD *)(a1 + 88) = 0uLL;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 88);
  a3[2] = *(_QWORD *)(a1 + 104);
  return *(unsigned int *)a3;
}
