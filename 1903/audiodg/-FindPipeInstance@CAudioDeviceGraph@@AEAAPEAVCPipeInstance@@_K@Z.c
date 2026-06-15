/*
 * XREFs of ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000BC48
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000B9F0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140037DB0 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

struct CPipeInstance *__fastcall CAudioDeviceGraph::FindPipeInstance(CAudioDeviceGraph *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v9 = (_QWORD *)*((_QWORD *)this + 21);
  if ( v9 )
  {
    while ( 1 )
    {
      v5 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v9);
      if ( v5 == a2 )
        break;
      if ( !v9 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v5 = 0LL;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (struct CPipeInstance *)v5;
}
