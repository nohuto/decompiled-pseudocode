/*
 * XREFs of RtlUShortAdd @ 0x14011CDFC
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x14011CB90 (FsRtlValidateReparsePointBuffer.c)
 *     IopAllocateUnicodeString @ 0x14070FF14 (IopAllocateUnicodeString.c)
 *     VrpBuildKeyPath @ 0x14080DFFC (VrpBuildKeyPath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140892A50 (RtlAddResourceAttributeAce.c)
 *     RtlpCreateServerAcl @ 0x140894920 (RtlpCreateServerAcl.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB810 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
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
