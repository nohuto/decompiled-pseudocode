/*
 * XREFs of ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C023E688
 * Callers:
 *     NtGdiDestroyPhysicalMonitor @ 0x1C023ED30 (NtGdiDestroyPhysicalMonitor.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@@@Z @ 0x1C023E600 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMo.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C023E72C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DestroyPhysicalMonitor(CMonitorAPI *this, void *a2)
{
  struct CMutex *v2; // rdi
  int HandleObject; // ebx
  int v5; // eax
  CMonitorAPI *v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = this;
  v2 = (struct CMutex *)qword_1C03270B8;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, (struct CMutex *)((char *)qword_1C03270B8 + 32));
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((char *)v2 + 8, a2, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
           (__int64)v2 + 8,
           (__int64)v7,
           (unsigned int)a2,
           v2);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v8);
  return (unsigned int)HandleObject;
}
