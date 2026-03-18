/*
 * XREFs of EngAllocMem @ 0x1C005AC20
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005ABB4 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C7670 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C00D99F0 (EngCreateClip.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00DB900 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // di
  ULONG v5; // edx
  size_t v6; // rsi
  int v7; // r8d
  _QWORD *v8; // rbx
  struct _ERESOURCE *v9; // rdi
  _QWORD *v10; // rax

  v4 = fl;
  if ( cjMemSize )
  {
    if ( cjMemSize <= 0xFFFFFFDF )
    {
      v5 = cjMemSize + 32;
      if ( v5 < 0x2710000 )
      {
        v6 = v5;
        if ( (fl & 2) != 0 )
        {
          v8 = (_QWORD *)Win32AllocPoolNonPaged(v5, ulTag);
        }
        else if ( (int)IsWin32AllocPoolImplSupported() < 0 )
        {
          v8 = 0LL;
        }
        else
        {
          v8 = (_QWORD *)Win32AllocPoolImpl(33LL, (unsigned int)v6, ulTag);
        }
        if ( (v4 & 1) != 0 )
        {
          if ( !v8 )
            return v8;
          memset(v8, 0, v6);
        }
        if ( v8 )
        {
          *((_DWORD *)v8 + 4) = 0;
          v9 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
          if ( MultiUserEngAllocListLock )
          {
            PsEnterPriorityRegion();
            ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
          }
          v10 = (_QWORD *)qword_1C01A11A0;
          if ( *(struct _LIST_ENTRY **)qword_1C01A11A0 != &MultiUserGreEngAllocList )
            __fastfail(3u);
          *v8 = &MultiUserGreEngAllocList;
          v8[1] = v10;
          *v10 = v8;
          qword_1C01A11A0 = (__int64)v8;
          if ( MultiUserEngAllocListLock )
          {
            if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz(
                (unsigned int)&MultiUserGreEngAllocList,
                (unsigned int)&LockRelease,
                v7,
                (_DWORD)MultiUserEngAllocListLock,
                (__int64)L"MultiUserEngAllocListLock");
            if ( MultiUserEngAllocListLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
              PsLeavePriorityRegion();
            }
          }
          v8 += 4;
        }
        return v8;
      }
    }
  }
  return 0LL;
}
