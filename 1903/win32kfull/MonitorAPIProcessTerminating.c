/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1C0114760
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x1C026F308 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysic.c)
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026F424 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAEKPEAK@Z @ 0x1C026F5EC (-GetNextElementIndex@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAEKPEAK@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int i; // [rsp+48h] [rbp+10h] BYREF
  OPM::CMonitorPDO *v6; // [rsp+50h] [rbp+18h] BYREF
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = (char *)qword_1C032C788;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v7, (struct OPM::CMutex *)((char *)qword_1C032C788 + 32));
  if ( *((_DWORD *)v1 + 4) )
  {
    if ( !**((_QWORD **)v1 + 1) )
    {
      v4 = 0LL;
      goto LABEL_7;
    }
    v3 = 0;
    for ( i = 0; ; v3 = i )
    {
      v6 = 0LL;
      OPM::CList<CPhysicalMonitorHandle>::GetElement(v1 + 8, v3, &v6);
      if ( OPM::CMonitorPDO::DoesProcessOwnProtectedOutput(v6, a1) )
        OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v1 + 8, v6, v3, v1);
      v4 = v3;
LABEL_7:
      if ( !(unsigned __int8)OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(v1 + 8, v4, &i) )
        break;
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v7);
}
