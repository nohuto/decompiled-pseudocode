/*
 * XREFs of ?UpdateTouchpadDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x1802E5160
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1802E5050 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::UpdateTouchpadDimensions(
        MultitaskingViewGestureHandler *this,
        unsigned int a2)
{
  const char *v3; // r9
  __int64 v4; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v7; // [rsp+30h] [rbp-29h]
  _QWORD v8[2]; // [rsp+80h] [rbp+27h] BYREF
  __int128 v9; // [rsp+90h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !(unsigned int)GetPointerInfo(a2, v6) )
  {
    v4 = 257LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v3);
  }
  v8[0] = 0LL;
  v8[1] = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v7, &v9, v8) )
  {
    v4 = 263LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v3);
  }
  LODWORD(v8[0]) = DWORD2(v9) - v9;
  HIDWORD(v8[0]) = HIDWORD(v9) - DWORD1(v9);
  *((_QWORD *)this + 10) = v8[0];
  return 0LL;
}
