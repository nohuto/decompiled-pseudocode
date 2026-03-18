/*
 * XREFs of RtlUShortAdd @ 0x14011FAFC
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x14011F930 (FsRtlValidateReparsePointBuffer.c)
 *     RtlpCreateServerAcl @ 0x1406DDF50 (RtlpCreateServerAcl.c)
 *     IopAllocateUnicodeString @ 0x140734310 (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C56C4 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1408D05A0 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140927F98 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
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
