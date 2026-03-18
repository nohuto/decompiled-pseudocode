/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C012F330
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v11;
    v11[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x40) != 0 )
    {
      SetOrClrWF(1, v2, 0xD910u, 1);
      v6 = 1LL;
    }
    else
    {
      UserSetLastError(87LL, v2, v4, v5);
    }
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
