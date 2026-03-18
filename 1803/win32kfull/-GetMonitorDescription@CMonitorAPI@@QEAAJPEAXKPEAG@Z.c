/*
 * XREFs of ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C023E79C
 * Callers:
 *     NtGdiGetPhysicalMonitorDescription @ 0x1C023ED50 (NtGdiGetPhysicalMonitorDescription.c)
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C023E72C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 *     ?GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z @ 0x1C023E824 (-GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z.c)
 */

__int64 __fastcall CMonitorAPI::GetMonitorDescription(
        CMonitorAPI *this,
        void *a2,
        unsigned int a3,
        unsigned __int16 *a4)
{
  PVOID v4; // rbx
  int HandleObject; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = qword_1C03270B8;
  CAutoMutex::CAutoMutex((CAutoMutex *)v10, (struct CMutex *)qword_1C03270B8);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v4 + 8, a2, &v11);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::GetMonitorDescription(v11, a3, a4);
  CAutoMutex::~CAutoMutex((CAutoMutex *)v10);
  return (unsigned int)HandleObject;
}
