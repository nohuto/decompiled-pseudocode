/*
 * XREFs of NtUserSendEventMessage @ 0x1C00084F0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rsi
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v8;
  if ( v8 && (((*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    v13 = v8;
    HMLockObject(v8);
    if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      v9 = PostEventMessageEx(*(struct tagTHREADINFO **)(v10 + 16), a2, a3, a4, 0LL);
    else
      UserSetLastError(5LL);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v9;
}
