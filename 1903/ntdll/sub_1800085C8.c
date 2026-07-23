/*
 * XREFs of sub_1800085C8 @ 0x1800085C8
 * Callers:
 *     RtlpInitializeLangRegistryInfo @ 0x180005EE0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18008AC6C @ 0x18008AC6C (sub_18008AC6C.c)
 * Callees:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_1800093C4 @ 0x1800093C4 (sub_1800093C4.c)
 *     sub_180009670 @ 0x180009670 (sub_180009670.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009E4F0 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1800FDA50 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall sub_1800085C8(_QWORD *a1)
{
  _DWORD *v1; // rbx
  PVOID Heap; // rax
  void *v4; // rsi
  int v5; // edi
  void *RegistryInfo; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h]

  v1 = 0LL;
  BaseAddress = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
    BaseAddress = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v5 >= 0 )
      {
        v5 = 0;
        v1[3] = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v5 = -1073741801;
    goto LABEL_16;
  }
  if ( DataSize )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    v1 = BaseAddress;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, v4) < 0
    || (int)sub_180009670(v4, DataSize, &BaseAddress) < 0
    || (v1 = BaseAddress, v5 = sub_1800093C4(BaseAddress), v5 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *((_QWORD *)v1 + 5) && (int)sub_180009204(0x2000000u) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      ZwClose(KeyHandle);
    }
    ZwClose(Handle);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
