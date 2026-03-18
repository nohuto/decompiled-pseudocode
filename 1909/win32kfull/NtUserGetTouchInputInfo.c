/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C022EA10
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DF520 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(unsigned __int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v18; // rbx
  __int64 v19; // r8

  v6 = a2;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 || a4 != 48 )
  {
    v15 = 87LL;
    goto LABEL_12;
  }
  v12 = HMValidateHandle(a1, 20);
  v14 = v12;
  if ( !v12 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
  {
    v15 = 5LL;
LABEL_12:
    v8 = 0;
    UserSetLastError(v15, v9, v10, v11);
    goto LABEL_13;
  }
  v16 = *(_DWORD *)(v12 + 24);
  if ( v16 < (unsigned int)v6 )
    v6 = v16;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
  v18 = 48 * v6;
  ProbeForWrite(a3, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v14 + 32), v18);
  v13 = *(_QWORD *)(gptiCurrent + 1064LL);
  if ( v13 == a1 )
  {
    FreeTouchInputInfo(v13, 1LL, v19);
    *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}
