/*
 * XREFs of ?MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x1C01D1374
 * Callers:
 *     UIPISQMChangeFilter @ 0x1C0061FDC (UIPISQMChangeFilter.c)
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01D1154 (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMPopulateProcessSQMInfo(struct tagPROCESSINFO *a1, WCHAR *a2)
{
  const char *ProcessImageFileName; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  *(_DWORD *)&Destination.Length = 0x200000;
  Destination.Buffer = a2;
  if ( RtlAnsiStringToUnicodeString(&Destination, &DestinationString, 0) < 0 )
  {
    RtlCopyUnicodeString(&Destination, 0LL);
    RtlAppendUnicodeToString(&Destination, L"Unknown");
  }
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 218);
  *((_DWORD *)a2 + 9) = *((_DWORD *)a1 + 219);
  *((_DWORD *)a2 + 10) = *((_DWORD *)a1 + 3) >> 31;
}
