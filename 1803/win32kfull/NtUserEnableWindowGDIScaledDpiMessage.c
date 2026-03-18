/*
 * XREFs of NtUserEnableWindowGDIScaledDpiMessage @ 0x1C01ED5A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableWindowGDIScaledDpiMessageX @ 0x1C01B0180 (xxxEnableWindowGDIScaledDpiMessageX.c)
 */

__int64 __fastcall NtUserEnableWindowGDIScaledDpiMessage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v14;
    v14[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v8 = xxxEnableWindowGDIScaledDpiMessageX(v4, a2);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
