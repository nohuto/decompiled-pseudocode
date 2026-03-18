/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1406F2E70
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x1406F2228 (DrvDbGetObjectDatabaseNode.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     MiFindHotPatchRecord @ 0x14070F784 (MiFindHotPatchRecord.c)
 *     PipAddBindingId @ 0x140770168 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14085DFCC (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140879864 (PiDrvDbQuerySystemPathWin32.c)
 *     NtManageHotPatch @ 0x1408920D0 (NtManageHotPatch.c)
 *     EtwpCovSampModuleGetName @ 0x1409041D4 (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409144F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140914BCC (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x140915220 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x1409152AC (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140915434 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A193A0 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14013E000 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 Length; // si
  wchar_t *v6; // r15
  ULONG v7; // r13d
  ULONG v8; // edi
  NTSTATUS result; // eax
  size_t v10; // r14
  unsigned __int16 v11; // bx
  wchar_t *StringRoutine; // rax

  Length = 0;
  v6 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut )
    return -1073741811;
  v7 = Flags & 2;
  if ( (Flags & 2) == 0 )
  {
    v8 = Flags & 1;
    goto LABEL_5;
  }
  v8 = Flags & 1;
  if ( (Flags & 1) == 0 )
    return -1073741811;
LABEL_5:
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( v8 )
  {
    if ( Length == 0xFFFE )
      return -1073741562;
    v10 = Length;
    v11 = Length + 2;
  }
  else
  {
    v11 = Length;
    v10 = Length;
  }
  if ( !v7 && !Length )
    v11 = 0;
  if ( !v11 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v11);
  v6 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, v10);
    if ( v8 )
      v6[v10 >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v11;
    StringOut->Length = Length;
    StringOut->Buffer = v6;
    return 0;
  }
  return -1073741801;
}
