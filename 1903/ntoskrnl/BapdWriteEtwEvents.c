/*
 * XREFs of BapdWriteEtwEvents @ 0x1401820AC
 * Callers:
 *     BapdpProcessEtwEvents @ 0x14018BF4C (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x1407244F0 (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     BapdpParseEventParts @ 0x1401823F4 (BapdpParseEventParts.c)
 *     BapdRegisterEtwProvider @ 0x140182498 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     BapdpWriteEventDataToRegistry @ 0x14059EF10 (BapdpWriteEventDataToRegistry.c)
 *     EtwSetInformation @ 0x140737550 (EtwSetInformation.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 */

__int64 __fastcall BapdWriteEtwEvents(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  REGHANDLE v3; // r14
  REGHANDLE v4; // rdi
  NTSTATUS v5; // r15d
  int v6; // eax
  int *v7; // r12
  __int16 *v8; // r13
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rcx
  GUID *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // zf
  const WCHAR *v20; // rdx
  char v21; // [rsp+48h] [rbp-49h]
  int Data; // [rsp+4Ch] [rbp-45h] BYREF
  ULONG UserDataCount[2]; // [rsp+50h] [rbp-41h] BYREF
  REGHANDLE RegHandle; // [rsp+58h] [rbp-39h]
  REGHANDLE v25; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  REGHANDLE v27; // [rsp+78h] [rbp-19h] BYREF
  GUID *v28; // [rsp+80h] [rbp-11h]
  unsigned __int64 v29; // [rsp+88h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-1h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = a1;
  v3 = 0LL;
  v27 = 0LL;
  v29 = a1 + (unsigned int)a2;
  RegHandle = 0LL;
  LOBYTE(a2) = 1;
  v28 = &NullGuid;
  *(_QWORD *)UserDataCount = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v5 = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, a2, &v27);
  if ( v5 < 0 )
    goto LABEL_37;
  v21 = 0;
  v6 = BapdRegisterEtwProvider(&BOOT_PROVIDER_GUID, 0LL, UserDataCount);
  v3 = *(_QWORD *)UserDataCount;
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_37;
  while ( v2 < v29 )
  {
    if ( *(_DWORD *)(v2 + 8) == 6 )
    {
      v7 = (int *)(v2 + 68);
      v8 = (__int16 *)(v2 + 48);
      BapdpParseEventParts(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)UserDataCount);
      v9 = (_QWORD *)(v2 + 32);
      v10 = *(_QWORD *)(v2 + 32);
      v11 = BOOTENV_ETW_PROVIDER - v10;
      if ( BOOTENV_ETW_PROVIDER == v10 )
        v11 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
      if ( v11 )
      {
        v14 = BOOT_PROVIDER_GUID - v10;
        if ( BOOT_PROVIDER_GUID == v10 )
          v14 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v2 + 40);
        if ( v14 )
        {
          v15 = v28;
          v16 = *(_QWORD *)&v28->Data1 - v10;
          if ( *(_QWORD *)&v28->Data1 == v10 )
            v16 = *(_QWORD *)v28->Data4 - *(_QWORD *)(v2 + 40);
          if ( v16 )
          {
            if ( v4 )
            {
              EtwUnregister(v4);
              v25 = 0LL;
            }
            LOBYTE(v15) = *(_BYTE *)(v2 + 51) != 11;
            v17 = BapdRegisterEtwProvider(v2 + 32, v15, &v25);
            v4 = v25;
            v5 = v17;
            if ( v17 < 0 )
              goto LABEL_37;
            v18 = *(_BYTE *)(v2 + 51) == 11;
            v28 = (GUID *)(v2 + 32);
            RegHandle = v25;
            if ( v18 )
              EtwSetInformation(v25, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
          }
        }
        else
        {
          RegHandle = v3;
          if ( !v21 && *(_BYTE *)(v2 + 51) == 11 )
          {
            EtwSetInformation(v3, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
            v21 = 1;
          }
        }
      }
      else
      {
        RegHandle = v27;
      }
      if ( EtwEventEnabled(RegHandle, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
      {
        v5 = EtwWriteEx(
               RegHandle,
               (PCEVENT_DESCRIPTOR)(v2 + 48),
               0LL,
               0,
               (LPCGUID)((v2 + 16) & -(__int64)(*(_BYTE *)(v2 + 15) != 0)),
               0LL,
               UserDataCount[0],
               &UserData);
        if ( v5 < 0 )
          goto LABEL_37;
      }
      v12 = BOOTENV_ETW_PROVIDER - *v9;
      if ( BOOTENV_ETW_PROVIDER == *v9 )
        v12 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
      if ( !v12 )
      {
        v13 = *v8;
        if ( *v8 == 11 )
        {
          v20 = L"POSTTime";
LABEL_45:
          RtlInitUnicodeString(&DestinationString, v20);
          BapdpWriteEventDataToRegistry((PVOID)(v2 + 68));
          goto LABEL_18;
        }
        switch ( v13 )
        {
          case 20:
            if ( !*v7 )
              ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
            break;
          case 16:
          case 29:
            ExBootAppFailureStatus = *v7;
            break;
          case 32:
            v20 = L"BootmgrUserInputTime";
            goto LABEL_45;
          default:
            break;
        }
      }
    }
LABEL_18:
    v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  if ( (qword_1404324F8 & 4) != 0 )
  {
    Data = 0;
    RtlInitUnicodeString(&DestinationString, L"BootmgrUserInputTime");
    BapdpWriteEventDataToRegistry(&Data);
    RtlInitUnicodeString(&DestinationString, L"POSTTime");
    BapdpWriteEventDataToRegistry(&Data);
  }
LABEL_37:
  if ( v27 )
    EtwUnregister(v27);
  if ( v3 )
    EtwUnregister(v3);
  if ( v4 )
    EtwUnregister(v4);
  return (unsigned int)v5;
}
