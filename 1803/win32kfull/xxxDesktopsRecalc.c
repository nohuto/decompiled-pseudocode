/*
 * XREFs of xxxDesktopsRecalc @ 0x1C00F22DC
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2230 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDesktopRecalc @ 0x1C00F2340 (xxxDesktopRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalc(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  while ( v2 )
  {
    PushW32ThreadLock((__int64)v2, v6, UserDereferenceObject);
    ObfReferenceObject(v2);
    xxxDesktopRecalc(v2, a2);
    v2 = (_QWORD *)v2[4];
    result = PopAndFreeW32ThreadLock((__int64)v6, v4);
  }
  return result;
}
