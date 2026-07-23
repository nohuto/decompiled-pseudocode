/*
 * XREFs of EtwpCreateEtwThread @ 0x180051000
 * Callers:
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlCreateUserThread @ 0x180051070 (RtlCreateUserThread.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwResumeThread @ 0x1800A0D40 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A0D60 (NtTerminateThread.c)
 */

HANDLE __fastcall EtwpCreateEtwThread(NTSTATUS (__cdecl *a1)(PVOID), void *a2)
{
  HANDLE v2; // rbx
  int v3; // eax
  HANDLE ThreadHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( RtlCreateUserThread((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 1u, 0, 0LL, 0LL, a1, a2, &ThreadHandle, 0LL) < 0 )
    return 0LL;
  v2 = ThreadHandle;
  v3 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v3 < 0 )
  {
    NtTerminateThread(v2, v3);
    NtClose(v2);
    return 0LL;
  }
  return v2;
}
