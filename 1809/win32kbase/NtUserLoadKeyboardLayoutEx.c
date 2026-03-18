/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C00F0D20
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0063F00 (xxxSafeLoadKeyboardLayoutEx.c)
 *     RtlStringCchCopyNW @ 0x1C0086424 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     SetLastNtError @ 0x1C0165E74 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v10; // rsi
  HKL KeyboardLayout; // rbx
  __int64 v12; // r8
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v14; // eax
  const wchar_t *v15; // rsi
  unsigned __int64 v16; // r14
  ULONG64 v17; // rdx
  _BYTE **v18; // rcx
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  _BYTE v25[4]; // [rsp+50h] [rbp-6E8h] BYREF
  int v26; // [rsp+54h] [rbp-6E4h]
  unsigned int v27; // [rsp+58h] [rbp-6E0h]
  unsigned int v28; // [rsp+5Ch] [rbp-6DCh]
  unsigned int v29; // [rsp+60h] [rbp-6D8h]
  NTSTATUS v30; // [rsp+70h] [rbp-6C8h]
  HKL v31; // [rsp+78h] [rbp-6C0h]
  __int64 v32; // [rsp+80h] [rbp-6B8h]
  int v33; // [rsp+90h] [rbp-6A8h]
  const wchar_t *v34; // [rsp+98h] [rbp-6A0h]
  _BYTE v35[800]; // [rsp+A0h] [rbp-698h] BYREF
  _BYTE v36[800]; // [rsp+3C0h] [rbp-378h] BYREF
  wchar_t pszDest[12]; // [rsp+6E0h] [rbp-58h] BYREF

  v28 = a3;
  v29 = a2;
  v31 = a5;
  v10 = a6;
  v27 = a7;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v25, a2, a3);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL);
    KeyboardLayout = 0LL;
    goto LABEL_27;
  }
  memset(v36, 0, 0x318uLL);
  ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v14 = *(_DWORD *)v10;
  v26 = v14;
  v33 = v14;
  v15 = *(const wchar_t **)(v10 + 8);
  v34 = v15;
  LOBYTE(v12) = 1;
  if ( ((unsigned __int8)v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (unsigned __int16)v14;
  v17 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v26) )
  {
    if ( (v14 & 1) != 0 )
    {
LABEL_13:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v17, v12);
      v18 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_14;
    }
    if ( v17 > (unsigned __int64)v15 )
    {
      KeyboardLayout = 0LL;
      goto LABEL_15;
    }
  }
  if ( (v14 & 1) != 0 )
    goto LABEL_13;
LABEL_14:
  KeyboardLayout = 0LL;
  **v18 = 0;
LABEL_15:
  v30 = RtlStringCchCopyNW(pszDest, 9uLL, v15, v16 >> 1);
  if ( v30 >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v19 = v35;
      v20 = 6LL;
      v21 = 6LL;
      do
      {
        *v19 = *a4;
        v19[1] = a4[1];
        v19[2] = a4[2];
        v19[3] = a4[3];
        v19[4] = a4[4];
        v19[5] = a4[5];
        v19[6] = a4[6];
        v19 += 8;
        *(v19 - 1) = a4[7];
        a4 += 8;
        --v21;
      }
      while ( v21 );
      *v19 = *a4;
      *((_QWORD *)v19 + 2) = *((_QWORD *)a4 + 2);
      v22 = v36;
      v23 = v35;
      do
      {
        *v22 = *v23;
        v22[1] = v23[1];
        v22[2] = v23[2];
        v22[3] = v23[3];
        v22[4] = v23[4];
        v22[5] = v23[5];
        v22[6] = v23[6];
        v22 += 8;
        *(v22 - 1) = v23[7];
        v23 += 8;
        --v20;
      }
      while ( v20 );
      *v22 = *v23;
      *((_QWORD *)v22 + 2) = *((_QWORD *)v23 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       v31,
                       v29,
                       v28,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v36,
                       pszDest,
                       v27,
                       a8);
  }
  else
  {
    v32 = 0LL;
  }
LABEL_27:
  UserSessionSwitchLeaveCrit();
  return KeyboardLayout;
}
