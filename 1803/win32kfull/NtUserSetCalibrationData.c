/*
 * XREFs of NtUserSetCalibrationData @ 0x1C01F49C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _SetCalibrationData @ 0x1C01A37C0 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v27; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
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
    v10 = *(_QWORD *)(gptiCurrent + 416LL);
    v9 = *(_QWORD *)(v10 + 872);
    if ( gbEnforceUIPI && (unsigned int)v9 < 0x2000 )
      goto LABEL_11;
  }
  else
  {
    v10 = *(_QWORD *)(gptiCurrent + 416LL);
    v9 = *(_QWORD *)(v10 + 872);
    if ( gbEnforceUIPI && (unsigned int)v9 < 0x3000 )
    {
LABEL_11:
      EtwTraceUIPISystemError(v10, 0LL, 11LL);
      v11 = 5LL;
LABEL_31:
      v17 = 0;
      UserSetLastError(v11, v9);
      goto LABEL_32;
    }
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_30:
    v11 = 87LL;
    goto LABEL_31;
  }
  v12 = HMValidateHandle(a1, 19);
  v16 = v12;
  if ( !v12 )
  {
LABEL_26:
    UserSetLastError(6LL, v13);
    v17 = 0;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(v12 + 184) & 0x1000) == 0 )
  {
    v19 = *(_QWORD *)(v12 + 480);
    if ( (*(_DWORD *)(v12 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v19 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, v13, v14, v15);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v21 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v21;
        if ( !v21 )
          ExRaiseStatus(-1073741801);
        memmove(v21, (const void *)a3, v6);
      }
      v17 = SetCalibrationData(v16, v6, v8, a4);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  UserSetLastError(6LL, v13);
  v17 = 0;
  UserSetLastError(0LL, v18);
LABEL_27:
  if ( v8 && !v17 )
    Win32FreePool(v8);
LABEL_32:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return v17;
}
