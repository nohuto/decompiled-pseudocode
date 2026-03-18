/*
 * XREFs of ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0076EF0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00686C0 (bDynamicModeChange.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006C37C (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0125290 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0125480 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C01287F0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C012CF4C (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0130E1C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vReferencePdev(PDEVOBJ *this, __int64 a2, __int64 a3)
{
  struct _ERESOURCE *v3; // rbx
  __int64 v5; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rcx
  __int64 v8; // rcx

  v3 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  v5 = *(_QWORD *)this;
  ++*(_DWORD *)(v5 + 8);
  v6 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 3544);
  v7 = qword_1C020D548;
  if ( v6 && qword_1C020D548 )
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C020D548, v6, 1);
  if ( v3 )
  {
    if ( gbLockEtw )
    {
      if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v7, &LockRelease, a3, v3);
    }
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v8);
  }
}
