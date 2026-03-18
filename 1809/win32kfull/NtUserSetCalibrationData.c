/*
 * XREFs of NtUserSetCalibrationData @ 0x1C021C140
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     _SetCalibrationData @ 0x1C01C5510 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r15
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v31; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v31);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_30;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_30;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_30;
  }
  if ( a4 == 3 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 424LL);
    v9 = *(_QWORD *)(v12 + 880);
    if ( gbEnforceUIPI && (unsigned int)v9 < 0x2000 )
      goto LABEL_11;
  }
  else
  {
    v12 = *(_QWORD *)(gptiCurrent + 424LL);
    v9 = *(_QWORD *)(v12 + 880);
    if ( gbEnforceUIPI && (unsigned int)v9 < 0x3000 )
    {
LABEL_11:
      EtwTraceUIPISystemError(v12, 0LL, 11LL);
      v13 = 5LL;
LABEL_31:
      v19 = 0;
      UserSetLastError(v13, v9, v10, v11);
      goto LABEL_32;
    }
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_30:
    v13 = 87LL;
    goto LABEL_31;
  }
  LOBYTE(v9) = 19;
  v14 = HMValidateHandle(a1, v9);
  v18 = v14;
  if ( !v14 )
  {
LABEL_26:
    UserSetLastError(6LL, v15, v16, v17);
    v19 = 0;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(v14 + 184) & 0x2000) == 0 )
  {
    v23 = *(_QWORD *)(v14 + 480);
    if ( (*(_DWORD *)(v14 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v23 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v25 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v25;
        if ( !v25 )
          ExRaiseStatus(-1073741801);
        memmove(v25, (const void *)a3, v6);
      }
      v19 = SetCalibrationData(v18, v6, v8, a4);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  UserSetLastError(6LL, v15, v16, v17);
  v19 = 0;
  UserSetLastError(0LL, v20, v21, v22);
LABEL_27:
  if ( v8 && !v19 )
    Win32FreePool(v8);
LABEL_32:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v31);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return v19;
}
