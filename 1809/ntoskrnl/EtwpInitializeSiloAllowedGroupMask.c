/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x1407413EC
 * Callers:
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 * Callees:
 *     EtwpMapEnableFlags @ 0x1406CBBAC (EtwpMapEnableFlags.c)
 */

unsigned __int64 EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 0x600370Fu;
  dword_140541674 |= 0x8206u;
  dword_140541678 |= 0x10040u;
  dword_140541688 |= 0x1FFFFFFFu;
  return EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
}
