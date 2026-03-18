/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C01EFEF0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01A9250 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v18; // rbx

  v6 = a2;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 || a4 != 48 )
  {
    v15 = 87LL;
    goto LABEL_12;
  }
  v10 = HMValidateHandle(a1, 20);
  v14 = v10;
  if ( !v10 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v10 + 16) != gptiCurrent )
  {
    v15 = 5LL;
LABEL_12:
    v8 = 0;
    UserSetLastError(v15, v9);
    goto LABEL_13;
  }
  v16 = *(_DWORD *)(v10 + 24);
  if ( v16 < (unsigned int)v6 )
    v6 = v16;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v9, v12, v13);
  v18 = 48 * v6;
  ProbeForWrite(a3, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v14 + 32), v18);
  v11 = *(_QWORD *)(gptiCurrent + 1056LL);
  if ( v11 == a1 )
  {
    FreeTouchInputInfo(v11, 1LL);
    *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v11, v9, v12, v13);
  return v8;
}
