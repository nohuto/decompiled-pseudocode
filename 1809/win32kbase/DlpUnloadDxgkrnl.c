/*
 * XREFs of DlpUnloadDxgkrnl @ 0x1C016568C
 * Callers:
 *     DlpLoadDxgkrnl @ 0x1C0090C48 (DlpLoadDxgkrnl.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C0090D34 (DlpGetServiceNameInSystemSpace.c)
 */

void DlpUnloadDxgkrnl()
{
  const WCHAR *ServiceNameInSystemSpace; // rax
  WCHAR *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  ServiceNameInSystemSpace = (const WCHAR *)DlpGetServiceNameInSystemSpace();
  v1 = (WCHAR *)ServiceNameInSystemSpace;
  if ( ServiceNameInSystemSpace )
  {
    RtlInitUnicodeString(&DestinationString, ServiceNameInSystemSpace);
    ZwUnloadDriver(&DestinationString);
    ExFreePoolWithTag(v1, 0);
  }
}
