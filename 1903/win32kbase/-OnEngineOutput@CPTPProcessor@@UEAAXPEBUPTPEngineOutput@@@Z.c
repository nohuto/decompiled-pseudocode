/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00998E8 (ApiSetEditionInternalSetCursorPos.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01709BC (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C017A194 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C017A2DC (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C017A334 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C017A438 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C017A760 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C017A968 (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C017ADCC (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017BBA0 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C017BC7C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C017C1F8 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C017E75C (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C017E800 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     IsMouseInterceptEnabled @ 0x1C01844D0 (IsMouseInterceptEnabled.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C01A07A8 (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C01A085C (ApiSetSend4FingerTapHotkey.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01A0910 (ApiSetSendPTPAsMouse.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  int v4; // ecx
  CHidInput *v5; // rcx
  void *v6; // r9
  bool v7; // dl
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  CPTPProcessor *v12; // rcx
  int v13; // ecx
  int v14; // ecx
  CPTPProcessor *v15; // rcx
  __int64 v16; // r8
  LPCWSTR *v17; // rcx
  LPCWSTR *v18; // rcx
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 QuadPart; // r8
  int v23; // ecx
  int v24; // r8d
  int v25; // ecx
  CHidInput *v26; // rcx

  if ( HMValidateHandleNoSecure(*((_QWORD *)this + 49), 19) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v20 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          InputTraceLogging::PTP::MouseOutput(
            *((const struct CPointerInputFrame **)this + 50),
            PerformanceCounter.QuadPart,
            a2);
          v21 = *((_QWORD *)this + 50);
          QuadPart = PerformanceCounter.QuadPart;
          if ( v21 )
            QuadPart = *(_QWORD *)(v21 + 104);
          v23 = *((_DWORD *)a2 + 1);
          if ( v23 == 5 )
            ApiSetEditionInternalSetCursorPos(*((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3), 2u);
          else
            ApiSetSendPTPAsMouse(
              *((_QWORD *)a2 + 1),
              1 << v23,
              PerformanceCounter.LowPart,
              v20,
              QuadPart,
              *((_QWORD *)this + 49));
          break;
        case 2:
          if ( (!*((_DWORD *)a2 + 2)
             || CPTPProcessor::ShellEndpointExists((CPTPProcessor *)(unsigned int)(*(_DWORD *)a2 - 2)))
            && !(unsigned __int8)IsMouseInterceptEnabled() )
          {
            v11 = *((_DWORD *)a2 + 1);
            if ( !v11 )
            {
              CPTPProcessor::CreateGestureCache(
                (CPTPProcessor *)((char *)this - 200),
                *((_DWORD *)a2 + 4),
                (const struct PTPEngineOutput *)((char *)a2 + 20),
                *((_DWORD *)a2 + 2) != 0);
              return;
            }
            v12 = (CPTPProcessor *)(unsigned int)(v11 - 1);
            if ( !(_DWORD)v12 )
            {
              CPTPProcessor::CopyPointersIntoFrame(
                v12,
                *((struct CPointerInputFrame **)this + 47),
                v10,
                (const struct PTPEngineOutput *)((char *)a2 + 20),
                1);
              return;
            }
            v13 = (_DWORD)v12 - 1;
            if ( !v13 )
            {
              InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 47), a2);
              CPTPProcessor::SetHitTestResult(
                (CPTPProcessor *)((char *)this - 200),
                *((struct CPointerInputFrame **)this + 47),
                *((_DWORD *)a2 + 2) != 0);
              CTouchProcessor::ProcessInputWithoutHitTest(
                v18,
                *((struct CPointerInputFrame **)this + 47),
                *((_DWORD *)this + 102),
                *((_DWORD *)this + 103));
              *((_QWORD *)this + 47) = 0LL;
              return;
            }
            v14 = v13 - 1;
            if ( !v14 )
            {
              InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 50), a2);
              CPTPProcessor::CopyPointersIntoFrame(
                v15,
                *((struct CPointerInputFrame **)this + 50),
                v16,
                (const struct PTPEngineOutput *)((char *)a2 + 20),
                0);
              CPTPProcessor::SetHitTestResult(
                (CPTPProcessor *)((char *)this - 200),
                *((struct CPointerInputFrame **)this + 50),
                *((_DWORD *)a2 + 2) != 0);
              CTouchProcessor::ProcessInputWithoutHitTest(
                v17,
                *((struct CPointerInputFrame **)this + 50),
                *((_DWORD *)this + 102),
                *((_DWORD *)this + 103));
              *((_QWORD *)this + 50) = 0LL;
              return;
            }
            if ( v14 != 1 )
              return;
          }
          CPTPProcessor::CleanupGestureState((CPTPProcessor *)((char *)this - 200), v9, v10);
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
    else
    {
      v24 = *((_DWORD *)this + 55);
      if ( (v24 & 1) != 0 || (v24 & 2) == 0 )
      {
        v25 = *((_DWORD *)a2 + 1);
        if ( v25 )
        {
          v26 = (CHidInput *)(unsigned int)(v25 - 1);
          if ( (_DWORD)v26 )
          {
            if ( (unsigned int)((_DWORD)v26 - 1) <= 1 )
              CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 200));
          }
          else
          {
            if ( *((_BYTE *)this + 384) )
            {
              CHidInput::HandlePTPInertiaTimer(v26, 1, 0, *((void **)this + 49));
              v24 = *((_DWORD *)this + 55);
              *((_BYTE *)this + 384) = 0;
            }
            *((_DWORD *)this + 55) = v24 & 0xFFFFFFFE;
          }
        }
        else
        {
          CPTPProcessor::CacheInertia((CPTPProcessor *)((char *)this - 200));
        }
      }
      else
      {
        CPTPProcessor::SendPTPInertiaEndToContainer((CPTPProcessor *)((char *)this - 200), a2);
      }
    }
  }
}
