/*
 * XREFs of ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C018E258
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C018F8E4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C018FCA4 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C018FCD8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 *     ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C018FDF8 (-PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA-AW4InterceptMarshalCheck@12@XZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0191190 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::CallInterceptor(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edi
  _OWORD v16[5]; // [rsp+40h] [rbp-58h] BYREF

  *(_OWORD *)a3 = 0uLL;
  *(_QWORD *)(a3 + 16) = 0LL;
  RIMLockExclusive(a1);
  memset(v16, 0, 0x48uLL);
  v6 = v16[1];
  *(_OWORD *)(a1 + 40) = v16[0];
  v7 = v16[2];
  *(_OWORD *)(a1 + 56) = v6;
  v8 = v16[3];
  *(_OWORD *)(a1 + 72) = v7;
  *(_QWORD *)&v7 = *(_QWORD *)&v16[4];
  *(_OWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 104) = v7;
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
  {
    v9 = CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(a1);
    if ( v9 == 1 )
    {
      v13 = CMouseProcessor::MouseInterceptState::UserModeCallout(a1, a2, a3);
LABEL_9:
      v14 = v13;
      goto LABEL_10;
    }
    if ( v9 != 2 )
    {
      if ( v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      v13 = CMouseProcessor::MouseInterceptState::Marshal(a1, a2, a3);
      goto LABEL_9;
    }
  }
  v14 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v14;
}
