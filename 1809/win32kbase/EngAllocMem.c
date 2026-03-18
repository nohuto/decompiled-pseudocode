/*
 * XREFs of EngAllocMem @ 0x1C005F5F0
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C005F390 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005F588 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00FB910 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C0107770 (EngCreateClip.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // si
  ULONG v5; // edx
  size_t v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rbx
  struct _ERESOURCE *v11; // rdi
  _QWORD *v12; // rax

  v4 = fl;
  if ( cjMemSize - 1 <= 0xFFFFFFDE )
  {
    v5 = cjMemSize + 32;
    if ( v5 < 0x2710000 )
    {
      v6 = v5;
      if ( (fl & 2) != 0 )
      {
        v9 = Win32AllocPoolNonPaged(v5, ulTag);
      }
      else
      {
        if ( (int)IsWin32AllocPoolImplSupported() < 0 )
        {
          v10 = 0LL;
LABEL_7:
          if ( (v4 & 1) != 0 )
          {
            if ( !v10 )
              return v10;
            memset(v10, 0, v6);
          }
          if ( v10 )
          {
            *((_DWORD *)v10 + 4) = 0;
            v11 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
            if ( MultiUserEngAllocListLock )
            {
              PsEnterPriorityRegion(v7);
              ExEnterCriticalRegionAndAcquireResourceExclusive(v11);
            }
            v12 = (_QWORD *)qword_1C01D0AC0;
            if ( *(struct _LIST_ENTRY **)qword_1C01D0AC0 != &MultiUserGreEngAllocList )
              __fastfail(3u);
            *v10 = &MultiUserGreEngAllocList;
            v10[1] = v12;
            *v12 = v10;
            qword_1C01D0AC0 = (__int64)v10;
            if ( MultiUserEngAllocListLock )
            {
              if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz(
                  &MultiUserGreEngAllocList,
                  &LockRelease,
                  v8,
                  MultiUserEngAllocListLock,
                  L"MultiUserEngAllocListLock");
              if ( MultiUserEngAllocListLock )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
                PsLeavePriorityRegion();
              }
            }
            v10 += 4;
          }
          return v10;
        }
        v9 = Win32AllocPoolImpl(33LL, (unsigned int)v6, ulTag);
      }
      v10 = (_QWORD *)v9;
      goto LABEL_7;
    }
  }
  return 0LL;
}
