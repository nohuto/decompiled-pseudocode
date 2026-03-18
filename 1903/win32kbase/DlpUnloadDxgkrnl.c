/*
 * XREFs of DlpUnloadDxgkrnl @ 0x1C01A160C
 * Callers:
 *     DlpLoadDxgkrnl @ 0x1C00A5208 (DlpLoadDxgkrnl.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C00A5304 (DlpGetServiceNameInSystemSpace.c)
 */

void DlpUnloadDxgkrnl()
{
  const WCHAR *ServiceNameInSystemSpace; // rax
  WCHAR *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ServiceNameInSystemSpace = (const WCHAR *)DlpGetServiceNameInSystemSpace();
  v1 = (WCHAR *)ServiceNameInSystemSpace;
  if ( ServiceNameInSystemSpace )
  {
    RtlInitUnicodeString(&DestinationString, ServiceNameInSystemSpace);
    ZwUnloadDriver(&DestinationString);
    ExFreePoolWithTag(v1, 0);
  }
}
