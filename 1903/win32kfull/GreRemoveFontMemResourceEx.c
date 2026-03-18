/*
 * XREFs of GreRemoveFontMemResourceEx @ 0x1C02880F0
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x1C02A71A0 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiRemoveFontMemResourceEx @ 0x1C02A8D50 (NtGdiRemoveFontMemResourceEx.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0049F60 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C01316DC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall GreRemoveFontMemResourceEx(unsigned int a1)
{
  unsigned int v2; // ebx
  struct PFF *PFFFromId; // rax
  struct PFF **v5; // [rsp+38h] [rbp+10h] BYREF
  struct PFT **v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
  v6 = gpPFTPrivate;
  if ( gpPFTPrivate
    && (PFFFromId = GetPFFFromId(gpPFTPrivate, a1, &v5)) != 0LL
    && (*((_DWORD *)PFFFromId + 13) & 0x10) != 0 )
  {
    return (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v6, PFFFromId, v5, 0x30u);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return v2;
}
