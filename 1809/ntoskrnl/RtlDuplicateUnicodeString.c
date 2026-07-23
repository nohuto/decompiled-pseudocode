/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1406D4EA0
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiFindHotPatchRecord @ 0x1406833C4 (MiFindHotPatchRecord.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D42FC (DrvDbGetObjectDatabaseNode.c)
 *     PipAddBindingId @ 0x14073B008 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x140824D7C (PipAddRequestToEdge.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083E918 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083F5D4 (PiDrvDbQuerySystemPathWin32.c)
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 *     EtwpCovSampModuleGetName @ 0x1408C8014 (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D8520 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x1408D9298 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x1408D9320 (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x1408D94A4 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1409D6630 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14013E020 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // si
  unsigned __int16 Length; // di
  wchar_t *v7; // r14
  ULONG v8; // r13d
  NTSTATUS result; // eax
  int v10; // esi
  unsigned __int16 v11; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  v10 = v5 & 1;
  if ( v10 && Length == 0xFFFE )
    return -1073741562;
  if ( v10 )
    v11 = Length + 2;
  else
    v11 = Length;
  if ( !v8 && !Length )
    v11 = 0;
  if ( !v11 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v11);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( v10 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v11;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
