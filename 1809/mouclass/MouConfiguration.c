/*
 * XREFs of MouConfiguration @ 0x1C000FA00
 * Callers:
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001670 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0001AC0 (memset.c)
 *     WPP_RECORDER_SF_D @ 0x1C00049FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0004AA8 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_S @ 0x1C0004B78 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004CDC (WPP_RECORDER_SF_d.c)
 *     _TlgWrite @ 0x1C00061F8 (_TlgWrite.c)
 */

void MouConfiguration()
{
  const wchar_t *v0; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rdi
  unsigned __int16 v3; // r9
  WCHAR *v4; // rax
  PWSTR Buffer; // rbx
  PVOID SystemRoutineAddress; // rax
  int v7; // eax
  __int64 v8; // r8
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // eax
  int v13; // ecx
  __int64 v14; // r8
  const struct _TlgProvider_t *v15; // rcx
  int cData; // [rsp+28h] [rbp-89h]
  int cDataa; // [rsp+28h] [rbp-89h]
  int cDatac; // [rsp+28h] [rbp-89h]
  UINT32 cDatab; // [rsp+28h] [rbp-89h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-81h]
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-69h] BYREF
  int v22; // [rsp+58h] [rbp-59h] BYREF
  int Lock_high; // [rsp+5Ch] [rbp-55h] BYREF
  int Lock; // [rsp+60h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-49h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+78h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-29h] BYREF
  int *v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  int *v30; // [rsp+B8h] [rbp+7h]
  __int64 v31; // [rsp+C0h] [rbp+Fh]
  _DWORD *v32; // [rsp+C8h] [rbp+17h]
  __int64 v33; // [rsp+D0h] [rbp+1Fh]
  PWSTR v34; // [rsp+D8h] [rbp+27h]
  _DWORD v35[2]; // [rsp+E0h] [rbp+2Fh] BYREF
  int *v36; // [rsp+E8h] [rbp+37h]
  __int64 v37; // [rsp+F0h] [rbp+3Fh]

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PointerClass");
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  RtlCopyUnicodeString(&::DestinationString, &DestinationString);
  v0 = (const wchar_t *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x43756F4Du);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = 59;
LABEL_5:
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, v3, cData, v0);
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, 0x118uLL);
  RtlInitUnicodeString(&Destination, 0LL);
  Destination.MaximumLength = word_1C0009280 + 26;
  v4 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C0009280 + 26), 0x43756F4Du);
  Destination.Buffer = v4;
  if ( !v4 )
  {
    v3 = 60;
    goto LABEL_5;
  }
  memset(v4, 0, Destination.MaximumLength);
  RtlAppendUnicodeToString(&Destination, v0);
  RtlAppendUnicodeToString(&Destination, L"\\Parameters");
  if ( Destination.MaximumLength >= (unsigned __int64)Destination.Length + 2 )
  {
    Destination.Buffer[((unsigned __int64)Destination.Length >> 1) + 1] = 0;
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Du, cData, Destination.Buffer);
    v2[36] = 16777217;
    v2[2] = 288;
    v2[8] = 67108868;
    *((_QWORD *)v2 + 2) = L"MouseDataQueueSize";
    *((_QWORD *)v2 + 3) = &WPP_MAIN_CB.Reserved + 1;
    *((_QWORD *)v2 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v2 + 10) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    *((_QWORD *)v2 + 16) = L"PointerDeviceBaseName";
    *((_QWORD *)v2 + 17) = &::DestinationString;
    *((_QWORD *)v2 + 23) = L"ConnectMultiplePorts";
    v2[16] = 288;
    v2[22] = 67108868;
    v2[30] = 288;
    v2[44] = 288;
    v2[50] = 67108868;
    *((_QWORD *)v2 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    Buffer = Destination.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    cData = 0;
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v7 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(0x80000000LL, Buffer, v2, 0LL);
    if ( v7 < 0 )
    {
      LODWORD(pData) = v7;
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, v8, 0x3Eu, 0, pData);
    }
  }
LABEL_11:
  WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Fu, cData, ::DestinationString.Buffer);
  v12 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, cDataa, 0);
    v12 = 100;
  }
  if ( v12 <= 0xAAAAAAA )
    v13 = 24 * v12;
  else
    v13 = 2400;
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v13;
  WPP_RECORDER_SF_Dd(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    v10,
    v11,
    cDataa,
    v13,
    SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v14, 0x42u, cDatac);
  if ( (unsigned int)dword_1C0009000 > 5
    && (qword_1C0009010 & 0x400000000000LL) != 0
    && (qword_1C0009018 & 0x400000000000LL) == qword_1C0009018 )
  {
    v22 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
    v28 = &v22;
    v30 = &Lock_high;
    v32 = v35;
    v34 = ::DestinationString.Buffer;
    v35[0] = ::DestinationString.Length;
    v36 = &Lock;
    Lock_high = HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 2LL;
    v35[1] = 0;
    v37 = 4LL;
    TlgWrite(
      v15,
      &unk_1C00071E9,
      (LPCGUID)HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock),
      (LPCGUID)*((unsigned int *)&WPP_MAIN_CB.Reserved + 2),
      cDatab,
      &v27);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
