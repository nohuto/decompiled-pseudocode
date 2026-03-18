/*
 * XREFs of NtUserEndPaint @ 0x1C00FD820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int128 v15; // [rsp+60h] [rbp-48h]
  __int128 v16; // [rsp+70h] [rbp-38h]
  __int128 v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+90h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = v4;
  v9 = 0;
  if ( v4 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v13;
    v13[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v14 = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 16);
    v16 = *(_OWORD *)(a2 + 32);
    v17 = *(_OWORD *)(a2 + 48);
    v18 = *(_QWORD *)(a2 + 64);
    v9 = xxxEndPaint((struct tagWND *)v4);
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v7);
  return v9;
}
