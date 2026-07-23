/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x1407425DC
 * Callers:
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 * Callees:
 *     EtwpMapEnableFlags @ 0x1406CCE4C (EtwpMapEnableFlags.c)
 */

unsigned __int64 EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 0x600370Fu;
  dword_140542674 |= 0x8206u;
  dword_140542678 |= 0x10040u;
  dword_140542688 |= 0x1FFFFFFFu;
  return EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
}
