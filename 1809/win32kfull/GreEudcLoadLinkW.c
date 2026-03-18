/*
 * XREFs of GreEudcLoadLinkW @ 0x1C027BD1C
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C027CD00 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0024378 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C007D340 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0080080 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bAddFlEntry @ 0x1C0080280 (bAddFlEntry.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00C61E8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     vLinkEudcPFEs @ 0x1C00CA124 (vLinkEudcPFEs.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011EA1C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C027C764 (bWriteUserSystemEUDCRegistry.c)
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
  struct _FLENTRY *v17; // [rsp+48h] [rbp-38h] BYREF
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
        vLinkEudcPFEs((__int64)v17);
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
          v17 = (struct _FLENTRY *)ghsemPublicPFT;
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
            v19[0] = v20;
            v19[1] = 0LL;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Src, v10, &v21, 8u, &v18, (struct _EUDCLOAD *)v19, 0);
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
            ++dword_1C03177D0;
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
