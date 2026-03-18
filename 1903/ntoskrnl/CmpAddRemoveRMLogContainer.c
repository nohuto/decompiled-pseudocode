/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x14083212C
 * Callers:
 *     CmpTransWriteLog @ 0x140633E50 (CmpTransWriteLog.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpQueryNameString @ 0x1406986B8 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1)
{
  __int64 v2; // rax
  UNICODE_STRING *v3; // r15
  int v4; // ebx
  int i; // esi
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v9; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v2 = qword_140424FF0;
    v3 = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v4 = CmpQueryNameString(*(void **)(*(_QWORD *)(a1 + 80) + 1536LL), &v9);
    if ( v4 < 0 )
      goto LABEL_14;
    v2 = *(_QWORD *)(a1 + 80);
    v3 = &v9;
  }
  v4 = RtlStringFromGUIDEx((unsigned int *)(*(_QWORD *)(v2 + 64) + 112LL), (__int64)&UnicodeString, 1);
  if ( v4 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); ; ++i )
    {
      v6 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             v3,
             &UnicodeString,
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
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
LABEL_14:
  if ( v9.Buffer )
    RtlFreeAnsiString(&v9);
  return (unsigned int)v4;
}
