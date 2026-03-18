/*
 * XREFs of ?GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z @ 0x1C0255F28
 * Callers:
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C0255E94 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::GetMonitorDescription(
        CPhysicalMonitorHandle *this,
        unsigned int a2,
        unsigned __int16 *a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  NTSTATUS DeviceProperty; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp+10h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v10, *((struct OPM::CMutex **)this + 1));
  v6 = 2LL * a2;
  if ( v6 <= 0xFFFFFFFF )
  {
    DeviceProperty = IoGetDeviceProperty(
                       *((PDEVICE_OBJECT *)this + 2),
                       DevicePropertyDeviceDescription,
                       v6,
                       a3,
                       &ResultLength);
    v7 = 0;
    if ( DeviceProperty < 0 )
      v7 = DeviceProperty;
  }
  else
  {
    v7 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v10);
  return v7;
}
