/*
 * XREFs of RtlCreateUserThread @ 0x1408916A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x14068E0D4 (RtlpCreateUserThreadEx.c)
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
  int v11; // [rsp+30h] [rbp-38h]

  return RtlpCreateUserThreadEx(
           ThreadContext,
           OutThreadHandle,
           (_BYTE)Reserved1 == 1,
           (unsigned int)Reserved2,
           (SIZE_T)Reserved3,
           (SIZE_T)Reserved4,
           v11,
           (PUSER_THREAD_START_ROUTINE)Reserved5,
           Reserved6,
           (HANDLE *)Reserved7,
           Reserved8);
}
