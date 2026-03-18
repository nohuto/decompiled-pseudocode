/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C011B440
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C006FAC0 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C009EF8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00BF71C (SetLastNtError.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HKL KeyboardLayout; // rbx
  __int64 v15; // r8
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v17; // eax
  char *v18; // rsi
  unsigned __int64 v19; // r14
  ULONG64 v20; // rdx
  _BYTE **v21; // rcx
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  int v28; // [rsp+50h] [rbp-6D8h]
  _BYTE v31[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v32[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v33[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v10 = a6;
  memset(v32, 0, 0x318uLL);
  EnterCrit(0, 1);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL, v11);
    KeyboardLayout = 0LL;
    goto LABEL_26;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v17 = *(_DWORD *)v10;
  v28 = *(_DWORD *)v10;
  v18 = *(char **)(v10 + 8);
  if ( ((unsigned __int8)v18 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = (unsigned __int16)v17;
  v20 = (ULONG64)&v18[(unsigned __int16)v17 + 2];
  v21 = (_BYTE **)MmUserProbeAddress;
  if ( v20 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v28) )
  {
    if ( (v17 & 1) != 0 )
    {
LABEL_13:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v20, v15);
      v21 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_14;
    }
    if ( v20 > (unsigned __int64)v18 )
    {
      KeyboardLayout = 0LL;
      goto LABEL_15;
    }
  }
  if ( (v17 & 1) != 0 )
    goto LABEL_13;
LABEL_14:
  KeyboardLayout = 0LL;
  **v21 = 0;
LABEL_15:
  if ( (int)RtlStringCchCopyNW((char *)v33, 9LL, v18, v19 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v22 = v31;
      v23 = 6LL;
      v24 = 6LL;
      do
      {
        *v22 = *a4;
        v22[1] = a4[1];
        v22[2] = a4[2];
        v22[3] = a4[3];
        v22[4] = a4[4];
        v22[5] = a4[5];
        v22[6] = a4[6];
        v22 += 8;
        *(v22 - 1) = a4[7];
        a4 += 8;
        --v24;
      }
      while ( v24 );
      *v22 = *a4;
      *((_QWORD *)v22 + 2) = *((_QWORD *)a4 + 2);
      v25 = v32;
      v26 = v31;
      do
      {
        *v25 = *v26;
        v25[1] = v26[1];
        v25[2] = v26[2];
        v25[3] = v26[3];
        v25[4] = v26[4];
        v25[5] = v26[5];
        v25[6] = v26[6];
        v25 += 8;
        *(v25 - 1) = v26[7];
        v26 += 8;
        --v23;
      }
      while ( v23 );
      *v25 = *v26;
      *((_QWORD *)v25 + 2) = *((_QWORD *)v26 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v32,
                       v33,
                       a7,
                       a8);
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v13, v12);
  return KeyboardLayout;
}
