/*
 * XREFs of RtlCreateUserThread @ 0x1408CE040
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x140612374 (RtlpCreateUserThreadEx.c)
 */

NTSTATUS __stdcall RtlCreateUserThread(
        PVOID ThreadContext,
        HANDLE *OutThreadHandle,
        PVOID Reserved1,
        PVOID Reserved2,
        PVOID Reserved3,
        PVOID Reserved4,
        PVOID Reserved5,
        PVOID Reserved6,
        PVOID Reserved7,
        PVOID Reserved8)
{
  __int64 v11; // [rsp+30h] [rbp-38h]

  return RtlpCreateUserThreadEx(
           (__int64)ThreadContext,
           (__int64)OutThreadHandle,
           (_BYTE)Reserved1 == 1,
           (__int64)Reserved2,
           (__int64)Reserved3,
           (__int64)Reserved4,
           v11,
           (__int64)Reserved5,
           (__int64)Reserved6,
           (HANDLE *)Reserved7,
           Reserved8);
}
