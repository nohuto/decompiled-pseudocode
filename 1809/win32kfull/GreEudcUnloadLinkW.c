/*
 * XREFs of GreEudcUnloadLinkW @ 0x1C027BF94
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C027CD00 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0024378 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011EA1C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bDeleteFlEntry @ 0x1C027C558 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C027C764 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v8; // rcx

  v5 = 1;
  v6 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v5 = bDeleteFlEntry(a1, a3);
      if ( !v5 )
        v5 = bDeleteFlEntry(a1, a3);
    }
    else if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      vUnlinkAllEudcRFONTsAndPFEs(v8, 0);
      bUnloadEudcFont((__int64 *)&gappfeSysEUDC);
      ++dword_1C03177D0;
      *(_OWORD *)&gappfeSysEUDC = 0uLL;
      Dst[0] = 0;
      bWriteUserSystemEUDCRegistry(&unk_1C02DE234);
    }
    v6 = v5;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v6;
}
