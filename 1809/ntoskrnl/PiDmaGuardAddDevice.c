/*
 * XREFs of PiDmaGuardAddDevice @ 0x1407035D8
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     PipDmgEnforceEnumerationPolicy @ 0x14083A580 (PipDmgEnforceEnumerationPolicy.c)
 */

__int64 __fastcall PiDmaGuardAddDevice(ULONG_PTR a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( PipDmaGuardPolicy )
  {
    if ( *(_QWORD *)(a1 + 720) )
      return PipDmgEnforceEnumerationPolicy(a1);
  }
  return result;
}
