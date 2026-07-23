/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x1407F9E38
 * Callers:
 *     CmpTransWriteLog @ 0x1406F9138 (CmpTransWriteLog.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1)
{
  ULONG_PTR v2; // rax
  UNICODE_STRING *p_UnicodeString; // r15
  NTSTATUS v4; // ebx
  int i; // esi
  int v6; // eax
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v2 = qword_1403FFFF0;
    p_UnicodeString = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v4 = CmpQueryNameString(*(void **)(*(_QWORD *)(a1 + 80) + 1536LL), &UnicodeString);
    if ( v4 < 0 )
      goto LABEL_14;
    v2 = *(_QWORD *)(a1 + 80);
    p_UnicodeString = &UnicodeString;
  }
  v4 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v2 + 64) + 112LL), &GuidString, 1u);
  if ( v4 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); ; ++i )
    {
      v6 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             p_UnicodeString,
             &GuidString,
             &CmpLogExt,
             &CmpContainerSuffix,
             i,
             (PULONGLONG)(a1 + 72));
      v4 = v6;
      if ( v6 != -1073741771 && v6 != -1073741635 )
        break;
    }
    if ( v6 >= 0 )
      ++*(_DWORD *)(a1 + 68);
  }
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
LABEL_14:
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v4;
}
