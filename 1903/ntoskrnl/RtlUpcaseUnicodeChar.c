/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x140657800
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400939C0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1401A1DB0 (towupper.c)
 *     PfpRpFileKeyUpdate @ 0x1406572D0 (PfpRpFileKeyUpdate.c)
 *     VrpAllocateDiffHiveEntry @ 0x140846B18 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140846E54 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VfUtilPrintCheckinString @ 0x1409646B4 (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x7Au )
    return SourceCharacter - 32;
  if ( !Nls844UnicodeUpcaseTable || SourceCharacter < 0xC0u )
    return SourceCharacter;
  return SourceCharacter
       + *(_WORD *)(Nls844UnicodeUpcaseTable
                  + 2LL
                  * ((SourceCharacter & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((SourceCharacter >> 4) & 0xF)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2
                                                                                            * ((unsigned __int64)SourceCharacter >> 8))))));
}
