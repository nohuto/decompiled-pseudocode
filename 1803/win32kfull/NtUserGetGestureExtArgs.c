/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C01EE510
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _FreeGestureInfo @ 0x1C01D8130 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 CurrentProcessWow64Process; // rax

  v6 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 )
  {
    v8 = 87LL;
LABEL_3:
    v6 = 0;
    UserSetLastError(v8, v7);
    goto LABEL_12;
  }
  v12 = HMValidateHandle(a1, 21);
  v13 = v12;
  if ( !v12 )
  {
    v6 = 0;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
  {
    v8 = 5LL;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v12 + 80) )
  {
    v8 = 122LL;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v7, v10, v11);
  ProbeForWrite(a3, *(unsigned int *)(v13 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v13 + 88), *(unsigned int *)(v13 + 80));
  v9 = *(_QWORD *)(gptiCurrent + 1064LL);
  if ( v9 == a1 )
  {
    FreeGestureInfo(v9, 1LL);
    *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v9, v7, v10, v11);
  return v6;
}
