/*
 * XREFs of LdrSetDllDirectory @ 0x18007EF40
 * Callers:
 *     sub_18007ED94 @ 0x18007ED94 (sub_18007ED94.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007F040 @ 0x18007F040 (sub_18007F040.c)
 *     wcschr @ 0x1800922E0 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  const wchar_t *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_180162714 & 4) == 0 )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( Buffer )
  {
    if ( !wcschr(Buffer, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, DllDirectory->Buffer) )
        return -1073741801;
      goto LABEL_5;
    }
    return -1073741811;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&stru_1801664A8);
  UnicodeString = stru_180166020;
  stru_180166020 = DestinationString;
  RtlReleaseSRWLockExclusive(&stru_1801664A8);
  RtlAcquireSRWLockExclusive(&stru_1801664A0);
  v3 = (void *)sub_18007F040(&unk_180164368);
  v4 = (void *)sub_18007F040(&unk_180164358);
  RtlReleaseSRWLockExclusive(&stru_1801664A0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
