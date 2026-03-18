/*
 * XREFs of EngAllocMem @ 0x1C0059980
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C005BC20 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0127D50 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C0131A60 (EngCreateClip.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // si
  ULONG v5; // edx
  size_t v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rbx
  struct _ERESOURCE *v10; // rdi
  _QWORD *v11; // rax

  v4 = fl;
  if ( cjMemSize - 1 <= 0xFFFFFFDE )
  {
    v5 = cjMemSize + 32;
    if ( v5 < 0x2710000 )
    {
      v6 = v5;
      if ( (fl & 2) != 0 )
      {
        v8 = Win32AllocPoolNonPaged(v5, ulTag);
      }
      else
      {
        if ( (int)IsWin32AllocPoolImplSupported() < 0 )
        {
          v9 = 0LL;
LABEL_7:
          if ( (v4 & 1) != 0 )
          {
            if ( !v9 )
              return v9;
            memset(v9, 0, v6);
          }
          if ( v9 )
          {
            *((_DWORD *)v9 + 4) = 0;
            v10 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
            if ( MultiUserEngAllocListLock )
            {
              PsEnterPriorityRegion();
              ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
            }
            v11 = (_QWORD *)qword_1C0218748;
            if ( *(struct _LIST_ENTRY **)qword_1C0218748 != &MultiUserGreEngAllocList )
              __fastfail(3u);
            *v9 = &MultiUserGreEngAllocList;
            v9[1] = v11;
            *v11 = v9;
            qword_1C0218748 = (__int64)v9;
            if ( MultiUserEngAllocListLock )
            {
              if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz(
                  &MultiUserGreEngAllocList,
                  &LockRelease,
                  v7,
                  MultiUserEngAllocListLock,
                  L"MultiUserEngAllocListLock");
              if ( MultiUserEngAllocListLock )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
                PsLeavePriorityRegion();
              }
            }
            v9 += 4;
          }
          return v9;
        }
        v8 = Win32AllocPoolImpl(33LL, (unsigned int)v6, ulTag);
      }
      v9 = (_QWORD *)v8;
      goto LABEL_7;
    }
  }
  return 0LL;
}
