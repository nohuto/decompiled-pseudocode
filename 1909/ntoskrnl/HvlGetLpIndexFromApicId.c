/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x140284EA0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1408B7260 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1408B7320 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1408B7470 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x140285D08 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
