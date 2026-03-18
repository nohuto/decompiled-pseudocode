/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x1406E8880
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E8458 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406E86F4 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x140198728 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x1401C2C50 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x1401C4450 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E8918 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x14071DCA0 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, _QWORD *a4, unsigned int a5)
{
  int v5; // edi
  int updated; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_1405098A0 )
        WmiTraceRundownNotify(*a4, a5);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_1405098A0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_1405098A0 = 0;
      }
    }
LABEL_8:
    updated = 0;
    v5 = 0;
    goto LABEL_9;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    goto LABEL_8;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v8 = ZwLoadDriver(&DestinationString);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_1405098A0 = 1;
    v5 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_1405098A0 = 0;
  }
  return (unsigned int)updated;
}
