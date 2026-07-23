/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x1402E3DA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 */

__int64 PpmHeteroDispatchHgsInterrupt()
{
  REGHANDLE v0; // rbx
  __int64 result; // rax

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HGS_UPDATE) )
      EtwWriteEx(v0, &PPM_ETW_HGS_UPDATE, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  result = (unsigned int)_InterlockedExchange(&PpmHeteroHgsUpdateQueued, 1);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc((ULONG_PTR)&PpmHeteroHgsUpdateDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
