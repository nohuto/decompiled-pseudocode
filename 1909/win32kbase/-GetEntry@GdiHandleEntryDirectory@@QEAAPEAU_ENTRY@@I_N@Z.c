/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60
 * Callers:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C000E1A0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C001CDA0 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C001DD10 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C001F4D0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0021040 (HmgIncrementShareReferenceCount.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0021470 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00229D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0027100 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002915C (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     HmgModifyHandleType @ 0x1C00503D0 (HmgModifyHandleType.c)
 *     HmgSafeNextObjt @ 0x1C0069750 (HmgSafeNextObjt.c)
 *     HmgValidHandle @ 0x1C0087330 (HmgValidHandle.c)
 *     HmgReferenceCheckLock @ 0x1C0093150 (HmgReferenceCheckLock.c)
 *     HmgSetLock @ 0x1C0093FCC (HmgSetLock.c)
 *     NtGdiGetEntry @ 0x1C009E550 (NtGdiGetEntry.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00B49D8 (MultiUserCleanupDCs.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00B4A90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001FFB0 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  struct GdiHandleEntryTable *v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( !GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v6, &v7) )
    return 0LL;
  if ( a3 && v7 < *((_DWORD *)v6 + 5)
    || v7 < *((_DWORD *)v6 + 5)
    && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v6 + 3) + 8 * ((unsigned __int64)v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8) )
  {
    return (struct _ENTRY *)(*(_QWORD *)v6 + 24LL * v7);
  }
  return (struct _ENTRY *)v3;
}
