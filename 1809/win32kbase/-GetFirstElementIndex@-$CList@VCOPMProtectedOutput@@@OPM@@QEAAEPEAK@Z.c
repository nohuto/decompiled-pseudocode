/*
 * XREFs of ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z @ 0x1C0072878
 * Callers:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0072784 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00727CC (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x1C0072914 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z.c)
 */

char __fastcall OPM::CList<COPMProtectedOutput>::GetFirstElementIndex(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 8) )
    return 0;
  if ( !**(_QWORD **)a1 )
    return OPM::CList<COPMProtectedOutput>::GetNextElementIndex(a1, 0LL, a2);
  *a2 = 0;
  return 1;
}
