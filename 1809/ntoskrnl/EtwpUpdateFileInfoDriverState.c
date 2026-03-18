/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x1406C5BD8
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C57B0 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406C5A4C (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x14018DEB4 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x1401BA150 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x1401BB950 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C5C64 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x140753C1C (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, _QWORD *a4, unsigned int a5)
{
  int v5; // edi
  int updated; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_1404DC3EC )
        WmiTraceRundownNotify(*a4, a5);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_1404DC3EC )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_1404DC3EC = 0;
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
    dword_1404DC3EC = 1;
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
    dword_1404DC3EC = 0;
  }
  return (unsigned int)updated;
}
