/*
 * XREFs of EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KiGetCpuVendor @ 0x1405706EC (KiGetCpuVendor.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BB890 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BC514 (EtwpFindMatchingPmcRegistryGroup.c)
 */

__int64 __fastcall EtwpAddMicroarchitecturalPmcToRegistry(unsigned __int8 *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  size_t v6; // r14
  wchar_t *PoolWithTag; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rdi
  NTSTATUS MatchingPmcRegistryGroup; // ebx
  _QWORD *v12; // rsi
  _DWORD *v13; // rbx
  __int64 v14; // r15
  unsigned int v15; // esi
  PCWSTR *v16; // r15
  _DWORD *v17; // r14
  __int64 CreateOptions; // [rsp+28h] [rbp-61h]
  unsigned int Data; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp+7h] BYREF

  v23[0] = L"Family";
  v23[1] = L"Model";
  v23[2] = L"Stepping";
  Data = KiGetCpuVendor();
  v4 = -1LL;
  do
    ++v4;
  while ( aRegistryMachin_16[v4] );
  v5 = 2 * v4 + 514;
  v6 = v5;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v8, Data, a2, v5, PoolWithTag);
  if ( MatchingPmcRegistryGroup >= 0 )
    goto LABEL_16;
  RtlStringCbPrintfW(
    v9,
    v6,
    L"%ws\\%ws:%d",
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
    L"Architecture",
    Data);
  v12 = v23;
  v13 = a2;
  v14 = 3LL;
  do
  {
    if ( *v13 != -1 )
    {
      LODWORD(CreateOptions) = *v13;
      RtlStringCbPrintfW(v9, v6, L"%ws-%ws:%d", v9, *v12, CreateOptions);
    }
    ++v13;
    ++v12;
    --v14;
  }
  while ( v14 );
  RtlInitUnicodeString(&DestinationString, v9);
  v15 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MatchingPmcRegistryGroup = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( MatchingPmcRegistryGroup >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Architecture");
    MatchingPmcRegistryGroup = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v16 = (PCWSTR *)v23;
    v17 = a2;
    do
    {
      if ( *v17 != -1 )
      {
        RtlInitUnicodeString(&DestinationString, *v16);
        MatchingPmcRegistryGroup = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &a2[v15], 4u);
        if ( MatchingPmcRegistryGroup < 0 )
          break;
      }
      ++v15;
      ++v17;
      ++v16;
    }
    while ( v15 < 3 );
    ZwClose(KeyHandle);
    if ( MatchingPmcRegistryGroup >= 0 )
LABEL_16:
      EtwpAddMicroarchitecturalPmcToPmcGroup((__int64)v9, a1);
  }
  ExFreePoolWithTag(v9, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
