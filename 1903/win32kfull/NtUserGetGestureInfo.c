/*
 * XREFs of NtUserGetGestureInfo @ 0x1C022C990
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _FreeGestureInfo @ 0x1C0214470 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(unsigned __int64 a1, ULONG64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rax

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a2 )
  {
    v8 = 87LL;
LABEL_3:
    v4 = 0;
    UserSetLastError(v8, v5, v6, v7);
    goto LABEL_17;
  }
  v10 = (_DWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  if ( *v10 != 56 )
  {
    v4 = 0;
    UserSetLastError(87LL, v5, v6, v7);
    goto LABEL_17;
  }
  LOBYTE(v5) = 21;
  v11 = HMValidateHandle(a1, v5, v6, v7);
  v5 = v11;
  if ( !v11 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
  {
    v8 = 5LL;
    goto LABEL_3;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v11 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v11 + 80);
  v9 = *(_QWORD *)(gptiCurrent + 1072LL);
  if ( v9 == a1 && !*(_DWORD *)(v11 + 80) )
  {
    FreeGestureInfo(v9, 1LL, v6, v7);
    *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
