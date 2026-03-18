/*
 * XREFs of xxxCancelTracking @ 0x1C00D81FC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 */

__int64 __fastcall xxxCancelTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v5; // r15
  int v6; // ebx
  __int64 *v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD v12[84]; // [rsp+20h] [rbp-2C8h] BYREF

  v2 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v5 = i - 93;
    if ( *(i - 9) )
    {
      if ( (unsigned int)v2 < 0xC )
      {
        LockW32Thread((__int64)(i - 93), &v12[3 * v2 + 48]);
        v7 = &v12[3 * v2 + 12];
        a2 = *(_QWORD *)(v5[84] + 16LL);
        result = *(_QWORD *)(gptiCurrent + 416LL);
        *v7 = result;
        *(_QWORD *)(gptiCurrent + 416LL) = v7;
        v12[3 * v2 + 13] = a2;
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
        v12[v2] = v5;
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  v6 = v2 - 1;
  if ( (int)v2 - 1 >= 0 )
  {
    v8 = &v12[v6];
    v9 = &v12[3 * v6 + 48];
    do
    {
      v10 = *v8;
      if ( (*(_DWORD *)(*v8 + 488LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v10, a2);
      result = PopAndFreeW32ThreadLock((__int64)v9, v11);
      v9 -= 3;
      --v8;
      --v6;
    }
    while ( v6 >= 0 );
  }
  return result;
}
