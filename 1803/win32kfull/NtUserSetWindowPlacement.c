/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C0065870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
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
  __int64 v12; // r8
  _QWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int128 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+70h] [rbp-18h]
  int v18; // [rsp+78h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = v4;
  v9 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v14;
      v14[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v15 = *(_OWORD *)a2;
      v16 = *(_OWORD *)(a2 + 16);
      v17 = *(_QWORD *)(a2 + 32);
      v18 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v15 == 44 || *(_WORD *)(gptiCurrent + 624LL) < 0x400u )
        v9 = xxxSetWindowPlacement((struct tagWND *)v4);
      else
        UserSetLastError(87LL, gptiCurrent);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v7);
  return v9;
}
