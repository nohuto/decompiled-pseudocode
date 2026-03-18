/*
 * XREFs of hdevEnumerate @ 0x1C003F2B0
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C003E194 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C003E690 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C003E880 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C003EAC0 (-DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003EBF8 (DrvNotifyModeChangeStartStop.c)
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003EF4C (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C003EFF0 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003F198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pqz @ 0x1C01082A8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0109608 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

struct PDEV *__fastcall hdevEnumerate(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *a1,
        int a2,
        __int64 a3)
{
  struct _ERESOURCE *v3; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rsi
  struct PDEV *v5; // rdi
  struct PDEV *v6; // rbx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  unsigned int v8; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v9; // rdx
  __int64 v11; // r8
  struct PDEV *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  v4 = a1;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 13, (__int64)L"ghsemDriverMgmt");
  v5 = gppdevList;
  if ( v4 )
    v5 = v4;
  v12 = v5;
  if ( v4 )
    v6 = *(struct PDEV **)v5;
  else
    v6 = v5;
  while ( v6 )
  {
    if ( (*((_DWORD *)v6 + 10) & 1) != 0 )
    {
      ++*((_DWORD *)v6 + 2);
      v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v6 + 444);
      a1 = qword_1C01C8838;
      if ( v7 && qword_1C01C8838 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C01C8838, v7, 1);
      break;
    }
    v6 = *(struct PDEV **)v6;
  }
  if ( !v4 )
    goto LABEL_16;
  v8 = *((_DWORD *)v5 + 2);
  if ( v8 > 1 )
  {
    v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v5 + 444);
    a1 = qword_1C01C8838;
    if ( v9 && qword_1C01C8838 )
    {
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C01C8838, v9, 0);
      v8 = *((_DWORD *)v5 + 2);
    }
    *((_DWORD *)v5 + 2) = v8 - 1;
LABEL_16:
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(a1, &LockRelease, a3, ghsemDriverMgmt, L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev(&v12, 0, v11);
  return v6;
}
