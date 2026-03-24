/*
 * XREFs of KbdConfiguration @ 0x1C0010560
 * Callers:
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002A00 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002AE0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002B70 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0002DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     _TlgKeywordOn @ 0x1C0007398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00073CC (_TlgWrite.c)
 */

void KbdConfiguration()
{
  char v0; // di
  const WCHAR *v1; // rsi
  _DWORD *PoolWithTag; // rax
  ULONGLONG Length; // rdx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // r8d
  _DWORD *v6; // rbx
  WCHAR *v7; // rax
  unsigned __int64 v8; // rdx
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int cData; // [rsp+20h] [rbp-99h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-89h] BYREF
  int v20; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+44h] [rbp-75h] BYREF
  KSPIN_LOCK Lock; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  int *v26; // [rsp+90h] [rbp-29h]
  __int64 v27; // [rsp+98h] [rbp-21h]
  int *v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+A8h] [rbp-11h]
  _DWORD *v30; // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+B8h] [rbp-1h]
  PWSTR v32; // [rsp+C0h] [rbp+7h]
  _DWORD v33[2]; // [rsp+C8h] [rbp+Fh] BYREF
  KSPIN_LOCK *p_Lock; // [rsp+D0h] [rbp+17h]
  __int64 v35; // [rsp+D8h] [rbp+1Fh]
  char *v36; // [rsp+E0h] [rbp+27h]
  __int64 v37; // [rsp+E8h] [rbp+2Fh]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&SourceString, 0LL);
  RtlInitUnicodeString(&SourceString, L"KeyboardClass");
  v0 = 1;
  dword_1C000A1D4 = 100;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 1LL;
  RtlCopyUnicodeString(&::DestinationString, &SourceString);
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x150uLL, 0x4364624Bu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v14 = 63;
LABEL_29:
    LOBYTE(Length) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v5, v14);
    goto LABEL_9;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  DestinationString.MaximumLength = word_1C000A2C8 + 26;
  v7 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C000A2C8 + 26), 0x4364624Bu);
  DestinationString.Buffer = v7;
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v14 = 64;
    goto LABEL_29;
  }
  memset(v7, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  Length = DestinationString.Length;
  v4 = (const struct _TlgProvider_t *)(DestinationString.Length + 2LL);
  if ( DestinationString.MaximumLength >= (unsigned __int64)v4 )
  {
    v8 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v8 + 1] = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, v5, 65);
    }
    v6[2] = 288;
    *((_QWORD *)v6 + 2) = L"KeyboardDataQueueSize";
    v6[8] = 67108868;
    *((_QWORD *)v6 + 3) = &dword_1C000A1D4;
    v6[16] = 288;
    *((_QWORD *)v6 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v6 + 10) = &WPP_MAIN_CB.DeviceQueue.1;
    *((_QWORD *)v6 + 16) = L"KeyboardDeviceBaseName";
    *((_QWORD *)v6 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v6 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    *((_QWORD *)v6 + 30) = L"SendOutputToAllPorts";
    *((_QWORD *)v6 + 31) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    v6[22] = 67108868;
    v6[30] = 288;
    *((_QWORD *)v6 + 17) = &::DestinationString;
    v6[36] = 16777217;
    v6[44] = 288;
    v6[50] = 67108868;
    v6[58] = 288;
    v6[64] = 67108868;
    Buffer = DestinationString.Buffer;
    *(_QWORD *)&SystemRoutineName.Length = 0LL;
    SystemRoutineName.Buffer = 0LL;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    cData = 0;
    v11 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
            0x80000000LL,
            Buffer,
            v6,
            0LL);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      LOBYTE(Length) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v5, 66, 0, v11);
    }
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v5, 67);
  }
LABEL_11:
  v12 = dword_1C000A1D4;
  if ( dword_1C000A1D4 )
  {
    if ( (unsigned int)dword_1C000A1D4 > 0x15555555 )
    {
      v13 = 1200;
      goto LABEL_14;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, Length, v5, 68, cData, 0);
    v12 = 100;
  }
  v13 = 12 * v12;
LABEL_14:
  dword_1C000A1D4 = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, Length, v5, 69, cData, v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Length) = 4;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v5, 70, cData, WPP_MAIN_CB.DeviceQueue.Busy);
    }
  }
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v0 = 0;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  }
  else
  {
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v5, 71, cData, v0);
  }
  if ( (unsigned int)dword_1C000A010 > 5 && TlgKeywordOn(v4, Length) )
  {
    v20 = dword_1C000A1D4;
    v21 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    v26 = &v20;
    v28 = &v21;
    v30 = v33;
    v32 = ::DestinationString.Buffer;
    v33[0] = ::DestinationString.Length;
    p_Lock = &Lock;
    v36 = (char *)&Lock + 4;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 2LL;
    v33[1] = 0;
    v35 = 4LL;
    v37 = 4LL;
    TlgWrite(v15, &unk_1C00086CD, v16, v17, 8u, &pData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
