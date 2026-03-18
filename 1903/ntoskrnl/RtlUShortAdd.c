/*
 * XREFs of RtlUShortAdd @ 0x14011ED4C
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x14011EB80 (FsRtlValidateReparsePointBuffer.c)
 *     IopAllocateUnicodeString @ 0x1407320B0 (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1408D0CA0 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140928538 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     VfSuspectDriversAllocateEntry @ 0x140976D68 (VfSuspectDriversAllocateEntry.c)
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
