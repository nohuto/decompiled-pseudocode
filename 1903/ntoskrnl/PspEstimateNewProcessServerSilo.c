/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x140618978
 * Callers:
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 EffectiveServerSilo; // rsi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  v6 = 0;
  if ( !a3 )
    return PsGetHostSilo();
  v8 = 0LL;
  while ( 1 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * v8));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
    v8 = ++v6;
    if ( v6 >= a3 )
      return PsGetHostSilo();
  }
  return EffectiveServerSilo;
}
