/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x18000A300
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180007A10 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     sub_18000B320 @ 0x18000B320 (sub_18000B320.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // rsi
  unsigned int LastErrorValue; // ebx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v8 = a1;
  if ( !a1 || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
LABEL_10:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  v9 = *a3;
  *a8 = 0LL;
  v14 = v9;
  v10 = sub_18000B320(a1, a2, (unsigned int)&v14, a4, a5);
  if ( v10 )
  {
    LastErrorValue = EtwNotificationRegister((unsigned int)&v14, 2, v8, v10, (__int64)&v13);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
    else
      *a8 = v13;
  }
  else
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
  }
  if ( LastErrorValue )
    goto LABEL_10;
  return LastErrorValue;
}
