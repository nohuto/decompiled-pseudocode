/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x140271590
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14087C670 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x14087C730 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x14087C880 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x14027216C (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
