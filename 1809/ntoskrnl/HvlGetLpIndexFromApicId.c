/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1402713A0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14087B410 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x14087B4D0 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x14087B620 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x140271F7C (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
