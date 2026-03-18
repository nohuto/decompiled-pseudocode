/*
 * XREFs of NtUserGetGestureInfo @ 0x1C01EE650
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _FreeGestureInfo @ 0x1C01D8130 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, ULONG64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // rax

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a2 )
  {
    v6 = 87LL;
LABEL_3:
    v4 = 0;
    UserSetLastError(v6, v5);
    goto LABEL_17;
  }
  v10 = (_DWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  if ( *v10 != 56 )
  {
    v4 = 0;
    UserSetLastError(87LL, v5);
    goto LABEL_17;
  }
  v11 = HMValidateHandle(a1, 21);
  v5 = v11;
  if ( !v11 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
  {
    v6 = 5LL;
    goto LABEL_3;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v11 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v11 + 80);
  v7 = *(_QWORD *)(gptiCurrent + 1064LL);
  if ( v7 == a1 && !*(_DWORD *)(v11 + 80) )
  {
    FreeGestureInfo(v7, 1LL);
    *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v7, v5, v8, v9);
  return v4;
}
