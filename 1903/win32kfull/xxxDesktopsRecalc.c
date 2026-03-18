/*
 * XREFs of xxxDesktopsRecalc @ 0x1C0115E00
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0115BC0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopRecalc @ 0x1C0115E7C (xxxDesktopRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  memset(v10, 0, 24);
  while ( v4 )
  {
    PushW32ThreadLock((__int64)v4, v10, UserDereferenceObject, a4);
    ObfReferenceObject(v4);
    xxxDesktopRecalc(v4, a2);
    v4 = (_QWORD *)v4[4];
    result = PopAndFreeW32ThreadLock((__int64)v10, v7, v8, v9);
  }
  return result;
}
