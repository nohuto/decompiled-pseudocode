/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1406F4910
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x1406F3CC8 (DrvDbGetObjectDatabaseNode.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     MiFindHotPatchRecord @ 0x140711564 (MiFindHotPatchRecord.c)
 *     PipAddBindingId @ 0x14077374C (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14085D6CC (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     NtManageHotPatch @ 0x1408918F0 (NtManageHotPatch.c)
 *     EtwpCovSampModuleGetName @ 0x140903B34 (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140913F50 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14091462C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x140914C80 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x140914D0C (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140914E94 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A19860 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14013E540 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
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
