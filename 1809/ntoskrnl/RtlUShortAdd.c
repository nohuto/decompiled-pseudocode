/*
 * XREFs of RtlUShortAdd @ 0x14011CE1C
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x14011CBB0 (FsRtlValidateReparsePointBuffer.c)
 *     IopAllocateUnicodeString @ 0x14070FEF4 (IopAllocateUnicodeString.c)
 *     VrpBuildKeyPath @ 0x14080DFDC (VrpBuildKeyPath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140892A30 (RtlAddResourceAttributeAce.c)
 *     RtlpCreateServerAcl @ 0x140894900 (RtlpCreateServerAcl.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB7F0 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  USHORT v3; // ax
  USHORT v4; // dx

  v3 = usAddend + usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 < usAugend ? 0xC0000095 : 0;
}
