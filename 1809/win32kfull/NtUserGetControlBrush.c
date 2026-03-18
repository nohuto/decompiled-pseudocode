/*
 * XREFs of NtUserGetControlBrush @ 0x1C014C3C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlBrush @ 0x1C014C484 (xxxGetControlBrush.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 ControlBrush; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  ControlBrush = 0LL;
  v11 = v6;
  if ( v6 )
  {
    v12 = gptiCurrent;
    v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v14;
    v14[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( a2 && a3 - 306 <= 6 )
      ControlBrush = xxxGetControlBrush(v6, a2, a3);
    ThreadUnlock1(v12, v7);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return ControlBrush;
}
