/*
 * XREFs of RtlpQueryRegistryValues @ 0x1405C1D18
 * Callers:
 *     WmipGetGuidSecurityDescriptor @ 0x1405C1430 (WmipGetGuidSecurityDescriptor.c)
 *     WmipQueryWmiDataBlock @ 0x1406A44A0 (WmipQueryWmiDataBlock.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406AEEB0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlQueryRegistryValues @ 0x1406E7EA0 (RtlQueryRegistryValues.c)
 *     RtlQueryRegistryValuesEx @ 0x1406E9590 (RtlQueryRegistryValuesEx.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14074B208 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14074B858 (EtwpGetAutoLoggerProviderFilter.c)
 *     PspQueryForwardersEnabled @ 0x140763D10 (PspQueryForwardersEnabled.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140764B10 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140764D88 (RtlSetActiveTimeBias.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407836E4 (IopQueryPassiveInterruptRegistryOptions.c)
 *     VRegSetup @ 0x1407842A0 (VRegSetup.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407897EC (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     ExIsMultiSessionSku @ 0x14078A774 (ExIsMultiSessionSku.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140865B0C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140867B68 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmRegisterSpmSettings @ 0x1408B68F0 (PpmRegisterSpmSettings.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1408C5474 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1408C5504 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     SmKmRegParamsLoad @ 0x1408E9C1C (SmKmRegParamsLoad.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1408F7AD0 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408F7ED0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408FD52C (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408FDA88 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     ExpPcwDisabledStatus @ 0x140913E48 (ExpPcwDisabledStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401C0EB0 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1405C2164 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1405C21E4 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 */

__int64 RtlpQueryRegistryValues(unsigned int a1, const WCHAR *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v7; // r15
  __int64 result; // rax
  ULONG v9; // r14d
  int v10; // r12d
  const WCHAR *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  NTSTATUS v16; // ebx
  ULONG Length; // r13d
  int v18; // eax
  const WCHAR *v19; // rdx
  int v20; // eax
  int v21; // eax
  char v22; // al
  ULONG v23; // ebx
  int v24; // r15d
  ULONG v25; // ebx
  __int64 v26; // rax
  int v27; // eax
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG v30; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  __int64 v32; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  __int64 v38; // [rsp+108h] [rbp+77h] BYREF
  va_list va; // [rsp+108h] [rbp+77h]
  __int64 v40; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v7 = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v9 = 0;
  LODWORD(v38) = result;
  if ( (int)result < 0 )
    return result;
  v10 = a1 & 0x40000000;
  if ( v10 )
    v11 = 0LL;
  else
    v11 = a2;
  RtlInitUnicodeString(&DestinationString, v11);
  v32 = 136LL;
  v13 = RtlpAllocDeallocQueryBuffer(&v32, 0LL, v12, (__int64 *)va);
  v15 = v13;
  if ( v13 )
  {
    v16 = v38;
    Length = 134;
    *(_DWORD *)(v13 + 8) = 0;
    KeyHandle = Handle;
LABEL_6:
    if ( !*(_QWORD *)a3 && (*(_DWORD *)(a3 + 8) & 0x21) == 0 )
    {
LABEL_8:
      if ( Handle && !v10 )
        ZwClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          ZwClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v15, v14, 0LL);
      return (unsigned int)v16;
    }
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v18 & 1) != 0 || *(_QWORD *)a3) )
    {
LABEL_76:
      v16 = -1073741811;
      goto LABEL_8;
    }
    if ( (v18 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
      v18 = *(_DWORD *)(a3 + 8);
    }
    v19 = *(const WCHAR **)(a3 + 16);
    if ( (v18 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_76;
      RtlInitUnicodeString(&DestinationString, v19);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
      if ( v16 < 0 )
        goto LABEL_8;
      if ( !*(_QWORD *)a3 )
        goto LABEL_31;
    }
    else
    {
      if ( v19 )
      {
        RtlInitUnicodeString(&ValueName, v19);
        while ( 1 )
        {
          v20 = v9++;
          if ( v20 > 4 )
          {
            DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
            goto LABEL_8;
          }
          v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v15, Length, &v30);
          if ( v16 == -2147483643 )
            v16 = -1073741789;
          LODWORD(v38) = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1073741772 )
            {
              v22 = v40;
              *(_DWORD *)(v15 + 4) = 0;
              *(_DWORD *)(v15 + 12) = 0;
              v30 = Length;
              v16 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, v7, ResultLength, v22);
              LODWORD(v38) = v16;
            }
            if ( v16 != -1073741789 )
              goto LABEL_36;
          }
          else
          {
            if ( *(_DWORD *)(v15 + 4) == 7 )
            {
              *(_WORD *)(v30 + v15) = 0;
              *(_DWORD *)(v15 + 12) += 2;
            }
            v30 = Length;
            v21 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, v7, ResultLength, v40);
            LODWORD(v38) = v21;
            v16 = v21;
            if ( v21 != -1073741789 )
            {
              v9 = 0;
              if ( v21 < 0 )
                goto LABEL_8;
              if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
                ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_31:
              if ( v16 >= 0 )
              {
                a3 += 56LL;
                goto LABEL_6;
              }
              goto LABEL_8;
            }
          }
          v23 = v30 + 10;
          v32 = v30 + 10LL;
          v15 = RtlpAllocDeallocQueryBuffer(&v32, v15, v14, (__int64 *)va);
          if ( !v15 )
          {
            v16 = v38;
            goto LABEL_8;
          }
          Length = v23 - 2;
          *(_DWORD *)(v15 + 8) = 0;
          v16 = v38;
        }
      }
      if ( (v18 & 8) != 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                0LL,
                0LL,
                0LL,
                0LL,
                v7,
                *(_QWORD *)(a3 + 24));
        goto LABEL_31;
      }
    }
    v24 = 0;
    while ( 1 )
    {
      v16 = ZwEnumerateValueKey(KeyHandle, v9, KeyValueFullInformation, (PVOID)v15, Length, &v30);
      if ( v16 == -2147483643 )
        v16 = -1073741789;
      LODWORD(v38) = v16;
      if ( v16 == -2147483622 )
      {
        if ( v9 || (*(_DWORD *)(a3 + 8) & 4) == 0 )
        {
          v9 = 0;
          v16 = 0;
        }
        else
        {
          v16 = -1073741772;
          v9 = 0;
        }
        v7 = a4;
        goto LABEL_31;
      }
      if ( v16 >= 0 )
      {
        v30 = Length;
        v16 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, a4, ResultLengtha, v40);
        LODWORD(v38) = v16;
      }
      if ( v16 == -1073741789 )
      {
        v25 = v30 + 10;
        v32 = v30 + 10LL;
        v26 = RtlpAllocDeallocQueryBuffer(&v32, v15, v14, (__int64 *)va);
        v15 = v26;
        if ( !v26 )
          goto LABEL_75;
        *(_DWORD *)(v26 + 8) = 0;
        Length = v25 - 2;
        v27 = v24;
        --v9;
        ++v24;
        if ( v27 > 4 )
        {
          DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
LABEL_75:
          v16 = v38;
          v7 = a4;
LABEL_36:
          v9 = 0;
          goto LABEL_31;
        }
      }
      else
      {
        if ( v16 < 0 )
          goto LABEL_8;
        v24 = 0;
        if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
        {
          ValueName.Buffer = (wchar_t *)(v15 + 20);
          ValueName.Length = *(_WORD *)(v15 + 16);
          ValueName.MaximumLength = *(_WORD *)(v15 + 16);
          if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
            --v9;
        }
      }
      ++v9;
    }
  }
  if ( !v10 )
    ZwClose(Handle);
  return (unsigned int)v38;
}
