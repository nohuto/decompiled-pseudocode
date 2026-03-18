/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C023CF90
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023CB50 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00AD214 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023D2B8 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023D38C (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+34h] [rbp-3Ch]
  __int128 v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3) && (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 432) + 120LL)) != 0 )
    {
      v9 = (char *)(v8 + 40);
      v10 = *(_OWORD *)(*(_QWORD *)v9 + 104LL);
    }
    else
    {
      v9 = (char *)a3 + 40;
      v10 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v21 = v10;
    v19 = v10 + (DWORD2(v10) - (int)v10) / 2;
    v20 = DWORD1(v10) + (HIDWORD(v10) - DWORD1(v10)) / 2;
    LogicalToPhysicalDPIPoint(&v19, &v19, *(unsigned int *)(*(_QWORD *)v9 + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_9;
    v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v22 + 2) = 67109120;
    HIWORD(v22) = a2;
    v13 = PerformanceCounter;
    InputTraceLogging::Mouse::InjectInput();
    UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
    HIDWORD(v23) = v19;
    LODWORD(v24) = v20;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
      0LL,
      &v22,
      v11,
      (LARGE_INTEGER)v13.QuadPart,
      65632);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    if ( v3 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
