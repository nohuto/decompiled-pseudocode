/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C00B8AF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]
  int v16; // [rsp+78h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = v4;
  v9 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v14[0] = *(_OWORD *)a2;
      v14[1] = *(_OWORD *)(a2 + 16);
      v15 = *(_QWORD *)(a2 + 32);
      v16 = *(_DWORD *)(a2 + 40);
      if ( LODWORD(v14[0]) == 44 || *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
        v9 = xxxSetWindowPlacement((struct tagWND *)v4, (__int64)v14);
      else
        UserSetLastError(87LL, gptiCurrent, v4, v7);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v7);
  return v9;
}
