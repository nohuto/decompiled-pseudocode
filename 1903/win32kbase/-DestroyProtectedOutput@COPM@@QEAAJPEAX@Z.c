/*
 * XREFs of ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C01264FC
 * Callers:
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0126798 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00890E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00B2044 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1C012645C (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 */

__int64 __fastcall COPM::DestroyProtectedOutput(COPM *this, unsigned __int64 a2)
{
  PVOID v2; // rsi
  int HandleObject; // edi
  int v5; // eax
  struct _KMUTANT *v6; // rcx
  OPM::CMonitorPDO *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v2 = P;
  OPM::CMutex::Lock((void **)P + 7);
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v2 + 24, a2, &v8);
  if ( HandleObject >= 0 )
  {
    v5 = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
           (__int64)v2 + 24,
           (__int64)v8,
           a2,
           (void **)v2 + 6);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  v6 = (struct _KMUTANT *)*((_QWORD *)v2 + 7);
  if ( v6 )
    KeReleaseMutex(v6, 0);
  return (unsigned int)HandleObject;
}
