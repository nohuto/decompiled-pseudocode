/*
 * XREFs of ?MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x1C020CB60
 * Callers:
 *     UIPISQMChangeFilter @ 0x1C0087C78 (UIPISQMChangeFilter.c)
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C020C930 (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMPopulateProcessSQMInfo(struct tagPROCESSINFO *a1, WCHAR *a2)
{
  __int64 v3; // rcx
  const char *ProcessImageFileName; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  v3 = *(_QWORD *)a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(v3);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  Destination.Buffer = a2;
  *(_QWORD *)&Destination.Length = 0x200000LL;
  if ( RtlAnsiStringToUnicodeString(&Destination, &DestinationString, 0) < 0 )
  {
    RtlCopyUnicodeString(&Destination, 0LL);
    RtlAppendUnicodeToString(&Destination, L"Unknown");
  }
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 218);
  *((_DWORD *)a2 + 9) = *((_DWORD *)a1 + 219);
  *((_DWORD *)a2 + 10) = *((_DWORD *)a1 + 3) >> 31;
}
