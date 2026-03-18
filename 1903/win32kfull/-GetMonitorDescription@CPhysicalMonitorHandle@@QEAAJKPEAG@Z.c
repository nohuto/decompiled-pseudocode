/*
 * XREFs of ?GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z @ 0x1C026F558
 * Callers:
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C026F4C4 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::GetMonitorDescription(
        CPhysicalMonitorHandle *this,
        unsigned int a2,
        unsigned __int16 *a3)
{
  unsigned __int64 v6; // rax
  NTSTATUS DeviceProperty; // eax
  unsigned int v8; // ebx
  char v10; // [rsp+40h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp+10h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v10, *((struct OPM::CMutex **)this + 1));
  v6 = 2LL * a2;
  if ( v6 > 0xFFFFFFFF )
  {
    v8 = -1073741675;
  }
  else
  {
    DeviceProperty = IoGetDeviceProperty(
                       *((PDEVICE_OBJECT *)this + 2),
                       DevicePropertyDeviceDescription,
                       v6,
                       a3,
                       &ResultLength);
    v8 = 0;
    if ( DeviceProperty < 0 )
      v8 = DeviceProperty;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v10);
  return v8;
}
