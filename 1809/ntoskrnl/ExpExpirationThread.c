/*
 * XREFs of ExpExpirationThread @ 0x1408CE410
 * Callers:
 *     <none>
 * Callees:
 *     PsTerminateSystemThread @ 0x1406CD810 (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 */

void __fastcall ExpExpirationThread(__int64 a1)
{
  NTSTATUS v1; // eax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = ExRaiseHardError(a1, 0LL, 0LL, 0LL, 1, &v2);
    PsTerminateSystemThread(v1);
  }
}
