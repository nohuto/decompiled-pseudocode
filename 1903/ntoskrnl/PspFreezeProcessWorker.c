/*
 * XREFs of PspFreezeProcessWorker @ 0x1408C9B30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x14011CC14 (SmIsCompressionProcess.c)
 *     PsCaptureExceptionPort @ 0x14060EE54 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1408CB120 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  __int64 v3; // rcx
  void *v4; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  if ( (a1[447] & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[110] && !SmIsCompressionProcess(a1) )
  {
    v4 = PsCaptureExceptionPort(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (a1[195] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
