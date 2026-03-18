/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0255558
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255108 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C001B4E0 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0255884 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0255958 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v4; // rdi
  __int64 v8; // r9
  char *v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // rbx
  __int64 v14; // rcx
  int v16; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+34h] [rbp-3Ch]
  __int128 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3) && (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 424) + 128LL)) != 0 )
    {
      v9 = (char *)(v8 + 40);
      v10 = *(_OWORD *)(*(_QWORD *)v9 + 104LL);
    }
    else
    {
      v9 = (char *)a3 + 40;
      v10 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v18 = v10;
    v16 = v10 + (DWORD2(v10) - (int)v10) / 2;
    v17 = DWORD1(v10) + (HIDWORD(v10) - DWORD1(v10)) / 2;
    LogicalToPhysicalDPIPoint(&v16, &v16, *(unsigned int *)(*(_QWORD *)v9 + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_9;
    v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v19 + 2) = 67109120;
    HIWORD(v19) = a2;
    v13 = PerformanceCounter;
    InputTraceLogging::Mouse::InjectInput();
    UserSessionSwitchLeaveCrit(v14);
    HIDWORD(v20) = v16;
    LODWORD(v21) = v17;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
      0LL,
      &v19,
      v11,
      (LARGE_INTEGER)v13.QuadPart,
      32864);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    if ( v3 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
