/*
 * XREFs of ExpExpirationThread @ 0x14090A1C0
 * Callers:
 *     <none>
 * Callees:
 *     PsTerminateSystemThread @ 0x1406ADC90 (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x140913940 (ExRaiseHardError.c)
 */

void __fastcall ExpExpirationThread(__int64 a1)
{
  NTSTATUS v1; // eax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = ExRaiseHardError(a1, 0, 0, 0, 1, (__int64)&v2);
    PsTerminateSystemThread(v1);
  }
}
