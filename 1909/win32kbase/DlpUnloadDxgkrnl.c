/*
 * XREFs of DlpUnloadDxgkrnl @ 0x1C019F35C
 * Callers:
 *     DlpLoadDxgkrnl @ 0x1C00A40F8 (DlpLoadDxgkrnl.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C00A41F4 (DlpGetServiceNameInSystemSpace.c)
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
