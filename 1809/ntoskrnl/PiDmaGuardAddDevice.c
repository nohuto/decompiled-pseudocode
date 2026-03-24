/*
 * XREFs of PiDmaGuardAddDevice @ 0x140702338
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E6C4C (PipCallDriverAddDevice.c)
 * Callees:
 *     PipDmgEnforceEnumerationPolicy @ 0x140839320 (PipDmgEnforceEnumerationPolicy.c)
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
