/*
 * XREFs of ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758
 * Callers:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00CE0A0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00CE13C (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C00CE1F8 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00CE28C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00CED98 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00CEE64 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00CEF80 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATTACHOBJ::Initialize(PRKAPC_STATE ApcState, struct PDEVOBJ *a2)
{
  __int64 ProcessServerSilo; // rax

  if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x2000) != 0 && *(struct PDEV **)a2 != qword_1C032FD38 )
  {
    BYTE4(ApcState[1].ApcListHead[1].Flink) = 1;
    ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS, a2);
    ApcState[1].ApcListHead[0].Flink = (struct _LIST_ENTRY *)PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess(gpepCSRSS, ApcState);
  }
}
