/*
 * XREFs of KeInitAmd64SpecificState @ 0x140A11978
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140A0FDEC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  _mm_lfence();
  if ( !InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
