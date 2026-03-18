/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00DB490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (_QWORD *)v2;
  if ( v2 )
  {
    v11 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v11;
    v12 = v2;
    HMLockObject(v2);
    v8 = v5[5];
    if ( (*(_DWORD *)(v8 + 288) & 0xF) == 2 )
    {
      v9 = v5[13];
      if ( v9 )
      {
        v6 = v5[3];
        v7 = 0LL;
        if ( v6 )
        {
          v6 = *(_QWORD *)(v6 + 8);
          if ( v6 )
            v7 = *(_QWORD *)(v6 + 24);
        }
        if ( v9 == v7 && (*(_DWORD *)(v8 + 232) & 0x10000000) != 0 )
          v4 = 1LL;
      }
    }
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
