/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0051D98
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0051C70 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0051D00 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this)
{
  if ( *((_QWORD *)this + 2) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) == PsGetCurrentProcess(this);
  else
    return *((_DWORD *)this + 278) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
