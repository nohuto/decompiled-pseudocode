/*
 * XREFs of EngFreeMem @ 0x1C0078B80
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C005BC20 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B6150 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00BABB0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0127BF0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0127C40 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0127D50 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C0131AE0 (EngDeleteClip.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
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
