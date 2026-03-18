/*
 * XREFs of ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0157720
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0158370 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C01586C4 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01586F8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 *     ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C0158818 (-PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA-AW4InterceptMarshalCheck@12@XZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01599C0 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::CallInterceptor(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edi
  _OWORD v13[5]; // [rsp+48h] [rbp+7h] BYREF

  *(_OWORD *)a3 = 0uLL;
  *(_QWORD *)(a3 + 16) = 0LL;
  RIMLockExclusive(a1);
  memset(v13, 0, 0x48uLL);
  v6 = v13[1];
  *(_OWORD *)(a1 + 40) = v13[0];
  v7 = v13[2];
  *(_OWORD *)(a1 + 56) = v6;
  v8 = v13[3];
  *(_OWORD *)(a1 + 72) = v7;
  *(_QWORD *)&v7 = *(_QWORD *)&v13[4];
  *(_OWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 104) = v7;
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
  {
    v9 = CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(a1);
    if ( v9 == 1 )
    {
      v10 = CMouseProcessor::MouseInterceptState::UserModeCallout(a1, a2, a3);
LABEL_9:
      v11 = v10;
      goto LABEL_10;
    }
    if ( v9 != 2 )
    {
      if ( v9 )
        MicrosoftTelemetryAssertTriggeredMsgKM("Unknown InterceptMarshalCheck value, did we add new value but forgot handler?");
      v10 = CMouseProcessor::MouseInterceptState::Marshal(a1, a2, a3);
      goto LABEL_9;
    }
  }
  v11 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
