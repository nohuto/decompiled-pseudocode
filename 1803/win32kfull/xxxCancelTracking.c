/*
 * XREFs of xxxCancelTracking @ 0x1C00597BC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 */

__int64 __fastcall xxxCancelTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v6; // r15
  int v7; // ebx
  __int64 *v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD v12[84]; // [rsp+20h] [rbp-2C8h] BYREF

  v3 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v6 = i - 91;
    if ( *(i - 8) )
    {
      if ( (unsigned int)v3 < 0xC )
      {
        LockW32Thread(i - 91, &v12[3 * v3 + 48]);
        v8 = &v12[3 * v3 + 12];
        a2 = *(_QWORD *)(v6[83] + 16LL);
        result = *(_QWORD *)(gptiCurrent + 408LL);
        *v8 = result;
        *(_QWORD *)(gptiCurrent + 408LL) = v8;
        v12[3 * v3 + 13] = a2;
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
        v12[v3] = v6;
        v3 = (unsigned int)(v3 + 1);
      }
    }
  }
  v7 = v3 - 1;
  if ( (int)v3 - 1 >= 0 )
  {
    v9 = &v12[v7];
    v10 = &v12[3 * v7 + 48];
    do
    {
      v11 = *v9;
      if ( (*(_DWORD *)(*v9 + 480LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v11, a2, a3);
      result = PopAndFreeW32ThreadLock(v10);
      v10 -= 3;
      --v9;
      --v7;
    }
    while ( v7 >= 0 );
  }
  return result;
}
