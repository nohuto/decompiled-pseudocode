/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C
 * Callers:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C007EB04 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1C00CAC14 (vLinkEudcPFEsWorker.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00CB9F8 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00CC230 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C010C570 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C011A578 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011EB20 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012618C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0136588 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0160A24 (vDeactivateEudcRFONTsWorker.c)
 *     _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C0161648 (_lambda_42f186421c331d4d68df43a01bbfc838_--operator().c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C02565E8 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0256734 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C025682C (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C0256A28 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027CAC8 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C027CC38 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
    a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  return a1;
}
