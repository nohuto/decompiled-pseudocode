/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0213738
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C021331C (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0213A30 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0213AF8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
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
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+34h] [rbp-3Ch]
  __int128 v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3) && (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 424) + 120LL)) != 0 )
    {
      v9 = (char *)(v8 + 40);
      v10 = *(_OWORD *)(*(_QWORD *)v9 + 104LL);
    }
    else
    {
      v9 = (char *)a3 + 40;
      v10 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v20 = v10;
    v18 = v10 + (DWORD2(v10) - (int)v10) / 2;
    v19 = DWORD1(v10) + (HIDWORD(v10) - DWORD1(v10)) / 2;
    LogicalToPhysicalDPIPoint(&v18, &v18, *(unsigned int *)(*(_QWORD *)v9 + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_9;
    v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v12 = MilliSecsToQpcCount(v11);
    *(_DWORD *)((char *)&v21 + 2) = 67109120;
    HIWORD(v21) = a2;
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    HIDWORD(v22) = v18;
    LODWORD(v23) = v19;
    SynthesizeMouseInput(0LL, &v21, v11, v12, 65632);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    if ( v3 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
