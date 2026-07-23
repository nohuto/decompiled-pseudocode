/*
 * XREFs of PspFreezeProcessWorker @ 0x14088C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x14011B058 (SmIsCompressionProcess.c)
 *     PsCaptureExceptionPort @ 0x1405F8D1C (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x14088DF50 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  __int64 v2; // rcx
  void *v3; // rax

  if ( (a1[435] & 0x1000) == 0
    && a1 != PsIdleProcess
    && a1 != *((_DWORD **)PsGetServerSiloGlobals(0LL) + 110)
    && !SmIsCompressionProcess(a1) )
  {
    v3 = PsCaptureExceptionPort(v2);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( (a1[193] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
