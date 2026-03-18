/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0085194
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x1C0085140 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1C012A674 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z @ 0x1C00852E4 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00AF1A8 (-GetElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x1C00B0178 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1C0123BEC (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  for ( result = OPM::CList<COPMProtectedOutput>::GetFirstElementIndex(a1, &v7);
        (_BYTE)result;
        result = OPM::CList<COPMProtectedOutput>::GetNextElementIndex(a1, v7, &v7) )
  {
    OPM::CList<COPMProtectedOutput>::GetElement(a1, v7, &v8);
    if ( !a2 || *(_DWORD *)(v8 + 64) == *a2 && *(_DWORD *)(v8 + 68) == a2[1] )
    {
      OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(a1, v8, v7, a3);
      v8 = 0LL;
    }
  }
  return result;
}
