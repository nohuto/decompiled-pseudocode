/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C0088330 (ApiSetEditionInternalSetCursorPos.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0141D28 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C014A6F8 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A750 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A844 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C014A9FC (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C014AE28 (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C014BBC4 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C014C194 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C014C85C (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     IsMouseInterceptEnabled @ 0x1C0151420 (IsMouseInterceptEnabled.c)
 *     ApiSetCachePTPInertiaInfo @ 0x1C0160D98 (ApiSetCachePTPInertiaInfo.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C0164B48 (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C0164BD8 (ApiSetSend4FingerTapHotkey.c)
 *     ApiSetSendPTPAsMouse @ 0x1C0164C68 (ApiSetSendPTPAsMouse.c)
 *     ApiSetSendPTPCancelInertia @ 0x1C0164EDC (ApiSetSendPTPCancelInertia.c)
 *     ApiSetSendPTPEndInertia @ 0x1C0164F8C (ApiSetSendPTPEndInertia.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  int v4; // ecx
  CHidInput *v5; // rcx
  void *v6; // r9
  bool v7; // dl
  unsigned int v8; // r8d
  __int64 v9; // r8
  int v10; // ecx
  CPTPProcessor *v11; // rcx
  int v12; // ecx
  int v13; // ecx
  CPTPProcessor *v14; // rcx
  __int64 v15; // r8
  LPCWSTR *v16; // rcx
  LPCWSTR *v17; // rcx
  LONGLONG v18; // rbx
  LARGE_INTEGER v19; // rbp
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rdx

  if ( !HMValidateHandleNoSecure(*((_QWORD *)this + 49), 19) )
    return;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v22 = *((_DWORD *)a2 + 1);
      if ( !v22 )
      {
        ApiSetCachePTPInertiaInfo((char *)this + 8, *((_QWORD *)this + 49));
        return;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          if ( v24 == 1 && (*((_DWORD *)this + 42) & 1) != 0 )
            ApiSetSendPTPEndInertia((char *)this + 8);
          return;
        }
        v25 = 1LL;
      }
      else
      {
        v25 = 0LL;
      }
      ApiSetSendPTPCancelInertia((char *)this + 8, v25);
      return;
    case 1:
      v18 = gliQpcFreq.QuadPart * *((unsigned int *)a2 + 4) / 1000;
      v19.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v18;
      v20 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *((unsigned int *)a2 + 4);
      InputTraceLogging::PTP::MouseOutput(*((const struct CPointerInputFrame **)this + 50), v19.QuadPart, a2);
      v21 = *((_DWORD *)a2 + 1);
      if ( v21 == 5 )
        ApiSetEditionInternalSetCursorPos(*((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3), 2u);
      else
        ApiSetSendPTPAsMouse(*((_QWORD *)a2 + 1), 1 << v21, v19.LowPart, v20, *((_QWORD *)this + 49));
      break;
    case 2:
      if ( (!*((_DWORD *)a2 + 2)
         || CPTPProcessor::ShellEndpointExists((CPTPProcessor *)(unsigned int)(*(_DWORD *)a2 - 2)))
        && !(unsigned __int8)IsMouseInterceptEnabled() )
      {
        v10 = *((_DWORD *)a2 + 1);
        if ( !v10 )
        {
          CPTPProcessor::CreateGestureCache(
            (CPTPProcessor *)((char *)this - 168),
            *((_DWORD *)a2 + 5),
            (const struct PTPEngineOutput *)((char *)a2 + 24),
            *((_DWORD *)a2 + 2) != 0);
          return;
        }
        v11 = (CPTPProcessor *)(unsigned int)(v10 - 1);
        if ( !(_DWORD)v11 )
        {
          CPTPProcessor::CopyPointersIntoFrame(
            v11,
            *((struct CPointerInputFrame **)this + 48),
            v9,
            (const struct PTPEngineOutput *)((char *)a2 + 24),
            1);
          return;
        }
        v12 = (_DWORD)v11 - 1;
        if ( !v12 )
        {
          InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 48), a2);
          CPTPProcessor::SetHitTestResult(
            (CPTPProcessor *)((char *)this - 168),
            *((struct CPointerInputFrame **)this + 48),
            *((_DWORD *)a2 + 2) != 0);
          CTouchProcessor::ProcessInputWithoutHitTest(
            v17,
            *((struct CPointerInputFrame **)this + 48),
            *((_DWORD *)this + 102),
            *((_DWORD *)this + 103));
          *((_QWORD *)this + 48) = 0LL;
          return;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 50), a2);
          CPTPProcessor::CopyPointersIntoFrame(
            v14,
            *((struct CPointerInputFrame **)this + 50),
            v15,
            (const struct PTPEngineOutput *)((char *)a2 + 24),
            0);
          CPTPProcessor::SetHitTestResult(
            (CPTPProcessor *)((char *)this - 168),
            *((struct CPointerInputFrame **)this + 50),
            *((_DWORD *)a2 + 2) != 0);
          CTouchProcessor::ProcessInputWithoutHitTest(
            v16,
            *((struct CPointerInputFrame **)this + 50),
            *((_DWORD *)this + 102),
            *((_DWORD *)this + 103));
          *((_QWORD *)this + 50) = 0LL;
          return;
        }
        if ( v13 != 1 )
          return;
      }
      CPTPProcessor::CleanupGestureState((CPTPProcessor *)((char *)this - 168));
      return;
    case 3:
      v5 = (CHidInput *)*((unsigned int *)a2 + 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
          return;
        v6 = 0LL;
        v7 = 1;
        v8 = 0;
      }
      else
      {
        v6 = (void *)*((_QWORD *)this + 49);
        v7 = 0;
        v8 = *((_DWORD *)a2 + 2);
      }
      CHidInput::HandlePTPTimer(v5, v7, v8, v6);
      break;
    default:
      if ( *(_DWORD *)a2 == 4 && !(unsigned __int8)IsMouseInterceptEnabled() )
      {
        v4 = *((_DWORD *)a2 + 1);
        if ( v4 )
        {
          if ( v4 == 1 )
            ApiSetSend4FingerTapHotkey();
        }
        else
        {
          ApiSetSend3FingerTapHotkey();
        }
      }
      break;
  }
}
