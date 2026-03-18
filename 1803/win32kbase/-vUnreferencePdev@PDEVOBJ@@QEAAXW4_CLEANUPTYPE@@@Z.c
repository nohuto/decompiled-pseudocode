/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     DrvDestroyMDEV @ 0x1C006D1EC (DrvDestroyMDEV.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006E4FC (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00C3D60 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00C74A0 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C7530 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00CCB9C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00CD144 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00D09A8 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00D75D4 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     EngDeleteDriverObj @ 0x1C00D9DB0 (EngDeleteDriverObj.c)
 * Callees:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C006D2A8 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(struct PDEV **a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct PDEV *v6; // rbx
  int v7; // ecx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  bool v9; // zf
  int v10; // ebx
  struct PDEV *v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]

  v3 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 12, (__int64)L"ghsemDriverMgmt");
  v6 = *a1;
  v7 = (int)qword_1C019F740;
  v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)*a1 + 443);
  if ( v8 && qword_1C019F740 )
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C019F740, v8, 0);
  v9 = (*((_DWORD *)v6 + 2))-- == 1;
  v10 = *((_DWORD *)v6 + 2);
  if ( v9 )
    RemovePDEVFromList(&gppdevList, *a1);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v7, (unsigned int)&LockRelease, a3, (_DWORD)ghsemDriverMgmt, (__int64)L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  if ( !v10 )
  {
    v11 = *a1;
    v12 = a2;
    v13 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v11);
  }
}
