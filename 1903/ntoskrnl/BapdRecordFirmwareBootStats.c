/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x14059ECD0
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x1407244F0 (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     BapdRegisterEtwProvider @ 0x140182498 (BapdRegisterEtwProvider.c)
 *     ExIsSoftBoot @ 0x140182500 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdpWriteEventDataToRegistry @ 0x14059EF10 (BapdpWriteEventDataToRegistry.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 */

void BapdRecordFirmwareBootStats()
{
  REGHANDLE v0; // rdi
  _QWORD *PoolWithTag; // rbx
  unsigned __int64 v2; // kr00_8
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-D0h] BYREF
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 Data; // [rsp+48h] [rbp-C0h] BYREF
  REGHANDLE v6; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v8; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 *v16; // [rsp+B8h] [rbp-50h]
  __int64 v17; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *p_Data; // [rsp+C8h] [rbp-40h]
  __int64 v19; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v20; // [rsp+D8h] [rbp-30h]
  __int64 v21; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *v22; // [rsp+E8h] [rbp-20h]
  __int64 v23; // [rsp+F0h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  REGHANDLE *p_RegHandle; // [rsp+118h] [rbp+10h]
  __int64 v26; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v27; // [rsp+128h] [rbp+20h]
  __int64 v28; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v29; // [rsp+138h] [rbp+30h]
  __int64 v30; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v31; // [rsp+148h] [rbp+40h]
  __int64 v32; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v33; // [rsp+158h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+58h]

  RegHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v0 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  PoolWithTag = 0LL;
  Data = 0LL;
  TraceLoggingRegisterEx(&stru_140426750, 0LL, 0LL);
  if ( !ExIsSoftBoot() )
  {
    if ( BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0
      && ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140426798[0])(
           34LL,
           0LL,
           0LL,
           &NumberOfBytes) == -1073741820
      && (_DWORD)NumberOfBytes
      && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x73627746u)) != 0LL
      && ((int (__fastcall *)(__int64, _QWORD, _QWORD *, SIZE_T *))off_140426798[0])(
           34LL,
           (unsigned int)NumberOfBytes,
           PoolWithTag,
           &NumberOfBytes) >= 0 )
    {
      v0 = RegHandle;
      v6 = PoolWithTag[2] / 0xF4240uLL;
      v7 = PoolWithTag[3] / 0xF4240uLL;
      Data = PoolWithTag[4] / 0xF4240uLL;
      v8 = PoolWithTag[5] / 0xF4240uLL;
      v2 = PoolWithTag[6];
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v6;
      v16 = &v7;
      p_Data = &Data;
      v20 = &v8;
      v22 = &v9;
      v9 = v2 / 0xF4240;
      v17 = 8LL;
      v19 = 8LL;
      v21 = 8LL;
      v23 = 8LL;
      EtwWrite(RegHandle, &BOOT_FW_BOOT_PERF_DATA, 0LL, 5u, &UserData);
      if ( stru_140426750.LevelPlus1 > 4 && TlgKeywordOn(&stru_140426750, 0x400000000000uLL) )
      {
        RegHandle = v6;
        v10 = v7;
        v11 = Data;
        v12 = v8;
        v13 = v9;
        p_RegHandle = &RegHandle;
        v27 = &v10;
        v29 = &v11;
        v31 = &v12;
        v33 = &v13;
        v26 = 8LL;
        v28 = 8LL;
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        TlgWrite(&stru_140426750, &unk_14039459F, 0LL, 0LL, 7u, &pData);
      }
    }
    else
    {
      v0 = RegHandle;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  BapdpWriteEventDataToRegistry(&Data);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, NumberOfBytes);
  if ( v0 )
    EtwUnregister(v0);
}
