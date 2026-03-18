/*
 * XREFs of xxxCancelTracking @ 0x1C0134DA0
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxCancelTrackingForThread @ 0x1C02005C0 (xxxCancelTrackingForThread.c)
 */

__int64 __fastcall xxxCancelTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v6; // r15
  int v7; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD v15[84]; // [rsp+20h] [rbp-2C8h] BYREF

  v3 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v6 = i - 92;
    if ( *(i - 9) )
    {
      if ( (unsigned int)v3 < 0xC )
      {
        LockW32Thread((__int64)(i - 92), &v15[3 * v3 + 48], a3);
        v8 = &v15[3 * v3 + 12];
        v9 = *(_QWORD *)(v6[83] + 16LL);
        *v8 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v8;
        v15[3 * v3 + 13] = v9;
        result = HMLockObject(v9);
        v15[v3] = v6;
        v3 = (unsigned int)(v3 + 1);
      }
    }
  }
  v7 = v3 - 1;
  if ( (int)v3 - 1 >= 0 )
  {
    v10 = &v15[v7];
    v11 = &v15[3 * v7 + 48];
    do
    {
      v12 = *v10;
      if ( (*(_DWORD *)(*v10 + 480LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v12, a2, a3);
      result = PopAndFreeW32ThreadLock((__int64)v11, v13, v14);
      v11 -= 3;
      --v10;
      --v7;
    }
    while ( v7 >= 0 );
  }
  return result;
}
