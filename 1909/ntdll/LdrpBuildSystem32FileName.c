/*
 * XREFs of LdrpBuildSystem32FileName @ 0x180025714
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x1800253F0 (LdrpApplyFileNameRedirection.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D109C (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180025788 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(_WORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const WCHAR *NtSystemRoot; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &DestinationString, v6, v7);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &SlashSystem32SlashString, v8, v9);
  if ( a2 )
    return (unsigned int)LdrpAppendUnicodeStringToFilenameBuffer(a1, a2, v10, v11);
  return v2;
}
