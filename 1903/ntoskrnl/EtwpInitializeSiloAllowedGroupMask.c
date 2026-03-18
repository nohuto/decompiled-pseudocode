/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x14076B13C
 * Callers:
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     EtwpMapEnableFlags @ 0x1406EB3DC (EtwpMapEnableFlags.c)
 */

unsigned __int64 EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 0x1600370Fu;
  dword_14057271C |= 0x8206u;
  dword_140572720 |= 0x10040u;
  dword_140572730 |= 0x1FFFFFFFu;
  return EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
}
