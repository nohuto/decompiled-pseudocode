/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCSubmixImpl@@@Z @ 0x14000D578
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14000D290 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x14000D5B4 (-NewNode@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNod.c)
 */

__int64 __fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::AddHead(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(a1, a2, a3, SubmixList);
  if ( SubmixList )
    *(_QWORD *)(SubmixList + 8) = result;
  else
    qword_1400856E8 = result;
  SubmixList = result;
  return result;
}
