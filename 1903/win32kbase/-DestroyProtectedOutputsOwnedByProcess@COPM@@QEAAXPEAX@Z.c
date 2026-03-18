/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C008900C
 * Callers:
 *     GdiProcessCallout @ 0x1C007FB20 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00890E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z @ 0x1C0089114 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00B20D8 (-GetElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x1C00B30A8 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1C012645C (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  char *v2; // rbp
  char i; // al
  struct _KMUTANT *v5; // rcx
  COPM *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = this;
  v2 = (char *)P;
  OPM::CMutex::Lock((OPM::CMutex *)((char *)P + 56));
  for ( i = OPM::CList<COPMProtectedOutput>::GetFirstElementIndex(v2 + 24, &v6);
        i;
        i = OPM::CList<COPMProtectedOutput>::GetNextElementIndex(v2 + 24, (unsigned int)v6, &v6) )
  {
    v7 = 0LL;
    OPM::CList<COPMProtectedOutput>::GetElement(v2 + 24, (unsigned int)v6, &v7);
    if ( a2 == *(void **)(v7 + 56) )
      OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        v2 + 24,
        v7,
        (unsigned int)v6,
        v2 + 48);
  }
  v5 = (struct _KMUTANT *)*((_QWORD *)v2 + 7);
  if ( v5 )
    KeReleaseMutex(v5, 0);
}
