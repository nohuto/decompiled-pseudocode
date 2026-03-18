/*
 * XREFs of NtUserSetCalibrationData @ 0x1C02342F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     _SetCalibrationData @ 0x1C01D88F8 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(unsigned __int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v24; // rax
  __int64 v25; // rcx
  _DWORD v27[2]; // [rsp+20h] [rbp-38h] BYREF
  void *v28; // [rsp+28h] [rbp-30h]
  _BYTE v29[40]; // [rsp+30h] [rbp-28h] BYREF
  int v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+64h] [rbp+Ch]

  v6 = a2;
  v8 = 0LL;
  v28 = 0LL;
  v27[0] = 0x2000;
  v27[1] = -1;
  v30 = 12288;
  v31 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_28;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_28;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_28;
  }
  if ( a4 == 3 )
  {
    if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, v27) )
      goto LABEL_10;
  }
  else if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, &v30) )
  {
LABEL_10:
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 11LL);
    v12 = 5LL;
LABEL_29:
    v18 = 0;
    UserSetLastError(v12, v9, v10, v11);
    goto LABEL_30;
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_28:
    v12 = 87LL;
    goto LABEL_29;
  }
  LOBYTE(v9) = 19;
  v13 = HMValidateHandle(a1, v9, v10, v11);
  v17 = v13;
  if ( !v13 )
  {
LABEL_24:
    UserSetLastError(6LL, v14, v15, v16);
    v18 = 0;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v13 + 184) & 0x2000) == 0 )
  {
    v22 = *(_QWORD *)(v13 + 480);
    if ( (*(_DWORD *)(v13 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v22 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v24 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v24;
        v28 = v24;
        if ( !v24 )
          ExRaiseStatus(-1073741801);
        memmove(v24, (const void *)a3, v6);
      }
      v18 = SetCalibrationData(v17, v6, v8, a4);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  UserSetLastError(6LL, v14, v15, v16);
  v18 = 0;
  UserSetLastError(0LL, v19, v20, v21);
LABEL_25:
  if ( v8 && !v18 )
    Win32FreePool(v8);
LABEL_30:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v25);
  return v18;
}
