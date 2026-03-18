/*
 * XREFs of GreEudcLoadLinkW @ 0x1C0267E84
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C0268DE0 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C003E388 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C003EBC0 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     vLinkEudcPFEs @ 0x1C004FE00 (vLinkEudcPFEs.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bAddFlEntry @ 0x1C00C9FBC (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00CA2F0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bUnloadEudcFont @ 0x1C00CAC68 (bUnloadEudcFont.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CB000 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00E1CC8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00FF55C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013D1C8 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0268824 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        const unsigned __int16 *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v8; // edi
  unsigned __int16 *v10; // rbx
  unsigned int appended; // esi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r8d
  wchar_t *Src; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  struct PFF *v18; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF
  struct PFE *v20[2]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+48h] BYREF

  v21 = a4;
  v8 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v15 = a6;
      if ( a6 > 1 )
        v15 = 1;
      appended = bAddFlEntry(a1, a3, v15, a5, &v17);
      if ( appended && v17 )
        vLinkEudcPFEs(v17);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v10 = Src;
      if ( Src )
      {
        appended = bAppendSysDirectory(Src, a3);
        if ( appended )
        {
          v17 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v12 = -1LL;
          Src = (wchar_t *)gpPFTPublic;
          v13 = -1LL;
          do
            ++v13;
          while ( v10[v13] );
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v10, (int)v13 + 1, 1, 0LL, 0, 0LL, 1) )
          {
            appended = 0;
          }
          else
          {
            v19[1] = 0LL;
            v19[0] = v20;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Src, v10, &v21, 8u, &v18, (struct _EUDCLOAD *)v19);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v17);
          if ( appended )
          {
            if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
            {
              vUnlinkAllEudcRFONTsAndPFEs(v14, 0);
              bUnloadEudcFont((__int64 *)&gappfeSysEUDC);
            }
            *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v20;
            wcscpy_s(Dst, 0x105uLL, v10);
            ++dword_1C0327110;
            bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v20[0], 1);
            do
              ++v12;
            while ( Dst[v12] );
            bWriteUserSystemEUDCRegistry(Dst);
          }
        }
        Win32FreePool(v10);
      }
      else
      {
        appended = 0;
      }
    }
    v8 = appended;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v8;
}
