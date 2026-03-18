/*
 * XREFs of EngFreeMem @ 0x1C0072250
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0071AA0 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B3670 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B7B50 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0125320 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0125370 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0125480 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C012F330 (EngDeleteClip.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _ERESOURCE *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  HSEMAPHORE v6; // rcx

  if ( pv )
  {
    v3 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
    v4 = (char *)pv - 32;
    if ( MultiUserEngAllocListLock )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    }
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (HSEMAPHORE)v4[1], *(_QWORD **)v6 != v4) )
      __fastfail(3u);
    *(_QWORD *)v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( MultiUserEngAllocListLock )
    {
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v6, &LockRelease, v2, MultiUserEngAllocListLock, L"MultiUserEngAllocListLock");
      v6 = MultiUserEngAllocListLock;
      if ( MultiUserEngAllocListLock )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
        PsLeavePriorityRegion();
      }
    }
    if ( (int)IsWin32FreePoolImplSupported(v6, v1, v2) >= 0 )
      Win32FreePoolImpl(v4);
  }
}
