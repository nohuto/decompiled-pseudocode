/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C00B8650
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RtlStringCchCopyNW @ 0x1C00BB768 (RtlStringCchCopyNW.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C012AD00 (xxxSafeLoadKeyboardLayoutEx.c)
 *     SetLastNtError @ 0x1C0142AA4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserLoadKeyboardLayoutEx(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v10; // rsi
  __int64 v11; // rcx
  __int64 KeyboardLayout; // rbx
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v14; // eax
  const wchar_t *v15; // rsi
  unsigned __int64 v16; // r14
  ULONG64 v17; // rdx
  _BYTE **v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  _BYTE v25[4]; // [rsp+50h] [rbp-6C8h] BYREF
  int v26; // [rsp+54h] [rbp-6C4h]
  unsigned int v27; // [rsp+58h] [rbp-6C0h]
  unsigned int v28; // [rsp+5Ch] [rbp-6BCh]
  unsigned int v29; // [rsp+60h] [rbp-6B8h]
  NTSTATUS v30; // [rsp+70h] [rbp-6A8h]
  HKL v31; // [rsp+78h] [rbp-6A0h]
  __int64 v32; // [rsp+80h] [rbp-698h]
  int v33; // [rsp+90h] [rbp-688h]
  const wchar_t *v34; // [rsp+98h] [rbp-680h]
  _BYTE v35[784]; // [rsp+A0h] [rbp-678h] BYREF
  _BYTE v36[784]; // [rsp+3B0h] [rbp-368h] BYREF
  wchar_t pszDest[12]; // [rsp+6C0h] [rbp-58h] BYREF

  v28 = a3;
  v29 = a2;
  v31 = a5;
  v10 = a6;
  v27 = a7;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v25, a2, a3);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
    KeyboardLayout = 0LL;
    goto LABEL_27;
  }
  memset(v36, 0, sizeof(v36));
  ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v14 = *(_DWORD *)v10;
  v26 = v14;
  v33 = v14;
  v15 = *(const wchar_t **)(v10 + 8);
  v34 = v15;
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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v17);
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
      if ( a4 + 49 < a4 || (unsigned __int64)(a4 + 49) > MmUserProbeAddress )
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
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       Handle,
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
  UserSessionSwitchLeaveCrit(v11);
  return KeyboardLayout;
}
