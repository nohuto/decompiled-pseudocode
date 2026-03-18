/*
 * XREFs of hdevEnumerate @ 0x1C0040070
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003E674 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003E70C (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C003EC60 (DxgkEngFindViewDesktopPosition.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003FF58 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00404F0 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0040680 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     DxgkEngAssertGdiOutput @ 0x1C00408A0 (DxgkEngAssertGdiOutput.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C009ED10 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0130E1C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
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

  v3 = ghsemDriverMgmt;
  v4 = a1;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion();
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
      v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v6 + 443);
      a1 = qword_1C020D548;
      if ( v7 && qword_1C020D548 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C020D548, v7, 1);
      break;
    }
    v6 = *(struct PDEV **)v6;
  }
  if ( !v4 )
    goto LABEL_16;
  v8 = *((_DWORD *)v5 + 2);
  if ( v8 > 1 )
  {
    v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v5 + 443);
    a1 = qword_1C020D548;
    if ( v9 && qword_1C020D548 )
    {
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C020D548, v9, 0);
      v8 = *((_DWORD *)v5 + 2);
    }
    *((_DWORD *)v5 + 2) = v8 - 1;
LABEL_16:
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(a1, &LockRelease, a3, ghsemDriverMgmt, L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev(&v12, 0, v11);
  return v6;
}
