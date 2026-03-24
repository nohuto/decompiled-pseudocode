/*
 * XREFs of KbdConfiguration @ 0x1C000F530
 * Callers:
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002610 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C00026F0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002780 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0002C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003080 (memset.c)
 *     _TlgWrite @ 0x1C0006B78 (_TlgWrite.c)
 */

void KbdConfiguration()
{
  char v0; // di
  const WCHAR *v1; // rsi
  _DWORD *PoolWithTag; // rax
  int v3; // edx
  int v4; // r8d
  _DWORD *v5; // rbx
  WCHAR *v6; // rax
  int v7; // r8d
  int Length; // edx
  unsigned __int64 v9; // rdx
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  const struct _TlgProvider_t *v21; // rcx
  int v22; // r9d
  int cData; // [rsp+20h] [rbp-99h]
  int cDatac; // [rsp+20h] [rbp-99h]
  int cDataa; // [rsp+20h] [rbp-99h]
  UINT32 cDatab; // [rsp+20h] [rbp-99h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-89h] BYREF
  int v28; // [rsp+40h] [rbp-79h] BYREF
  int v29; // [rsp+44h] [rbp-75h] BYREF
  KSPIN_LOCK Lock; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  int *v34; // [rsp+90h] [rbp-29h]
  __int64 v35; // [rsp+98h] [rbp-21h]
  int *v36; // [rsp+A0h] [rbp-19h]
  __int64 v37; // [rsp+A8h] [rbp-11h]
  _DWORD *v38; // [rsp+B0h] [rbp-9h]
  __int64 v39; // [rsp+B8h] [rbp-1h]
  PWSTR v40; // [rsp+C0h] [rbp+7h]
  _DWORD v41[2]; // [rsp+C8h] [rbp+Fh] BYREF
  KSPIN_LOCK *v42; // [rsp+D0h] [rbp+17h]
  __int64 v43; // [rsp+D8h] [rbp+1Fh]
  char *v44; // [rsp+E0h] [rbp+27h]
  __int64 v45; // [rsp+E8h] [rbp+2Fh]

  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&SourceString, 0LL);
  RtlInitUnicodeString(&SourceString, L"KeyboardClass");
  v0 = 1;
  dword_1C00091B4 = 100;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 1LL;
  RtlCopyUnicodeString(&::DestinationString, &SourceString);
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x150uLL, 0x4364624Bu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v22 = 61;
LABEL_21:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v22);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  DestinationString.MaximumLength = word_1C00092A8 + 26;
  v6 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C00092A8 + 26), 0x4364624Bu);
  DestinationString.Buffer = v6;
  if ( !v6 )
  {
    v22 = 62;
    goto LABEL_21;
  }
  memset(v6, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    v9 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v9 + 1] = 0;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v9, v7, 63);
    v5[2] = 288;
    *((_QWORD *)v5 + 2) = L"KeyboardDataQueueSize";
    v5[8] = 67108868;
    *((_QWORD *)v5 + 3) = &dword_1C00091B4;
    v5[16] = 288;
    *((_QWORD *)v5 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v5 + 10) = &WPP_MAIN_CB.DeviceQueue.1;
    *((_QWORD *)v5 + 16) = L"KeyboardDeviceBaseName";
    *((_QWORD *)v5 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v5 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    *((_QWORD *)v5 + 30) = L"SendOutputToAllPorts";
    *((_QWORD *)v5 + 31) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    v5[22] = 67108868;
    v5[30] = 288;
    *((_QWORD *)v5 + 17) = &::DestinationString;
    v5[36] = 16777217;
    v5[44] = 288;
    v5[50] = 67108868;
    v5[58] = 288;
    v5[64] = 67108868;
    Buffer = DestinationString.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    cData = 0;
    v12 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
            0x80000000LL,
            Buffer,
            v5,
            0LL);
    if ( v12 < 0 )
    {
      LOBYTE(Length) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v7, 64, 0, v12);
    }
  }
LABEL_8:
  LOBYTE(Length) = 4;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v7, 65);
  v15 = dword_1C00091B4;
  if ( !dword_1C00091B4 )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 66, cData, 0);
    v15 = 100;
    goto LABEL_10;
  }
  if ( (unsigned int)dword_1C00091B4 <= 0x15555555 )
  {
LABEL_10:
    v16 = 12 * v15;
    goto LABEL_11;
  }
  v16 = 1200;
LABEL_11:
  dword_1C00091B4 = v16;
  WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 67, cData, v16);
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v17, v18, 68, cDatac, WPP_MAIN_CB.DeviceQueue.Busy);
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v0 = 0;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  }
  else
  {
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  }
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v19, v20, 69, cDataa, v0);
  if ( (unsigned int)dword_1C0009008 > 5
    && (qword_1C0009018 & 0x400000000000LL) != 0
    && (qword_1C0009020 & 0x400000000000LL) == qword_1C0009020 )
  {
    v28 = dword_1C00091B4;
    v34 = &v28;
    v36 = &v29;
    v38 = v41;
    v40 = ::DestinationString.Buffer;
    v41[0] = ::DestinationString.Length;
    v42 = &Lock;
    v44 = (char *)&Lock + 4;
    v29 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 2LL;
    v41[1] = 0;
    v43 = 4LL;
    v45 = 4LL;
    TlgWrite(
      v21,
      &unk_1C0007641,
      (LPCGUID)LODWORD(WPP_MAIN_CB.DeviceQueue.Lock),
      (LPCGUID)*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Busy,
      cDatab,
      &pData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
