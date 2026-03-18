/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00F6C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v8 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v12;
    v12[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v9 = *(_QWORD *)(v2 + 40);
    if ( (*(_DWORD *)(v9 + 288) & 0xF) == 2 )
    {
      v10 = *(_QWORD *)(v2 + 80);
      if ( v10 )
      {
        v7 = *(_QWORD *)(v7 + 24);
        v8 = 0LL;
        if ( v7 )
        {
          v7 = *(_QWORD *)(v7 + 8);
          if ( v7 )
            v8 = *(_QWORD *)(v7 + 24);
        }
        if ( v10 == v8 && (*(_DWORD *)(v9 + 232) & 0x10000000) != 0 )
          v6 = 1LL;
      }
    }
    ThreadUnlock1(v8, v7);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
