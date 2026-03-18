/*
 * XREFs of ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0296DAC
 * Callers:
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029921C (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(DXGMONITOR *this)
{
  unsigned int v1; // ebx
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
    return 3221226021LL;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
    return 3221226021LL;
  if ( !*((_QWORD *)this + 12) )
    return 3221226021LL;
  v3 = (char *)this + 88;
  if ( !*((_WORD *)this + 44) )
    return 3221226021LL;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 276LL);
  v7 = *((_DWORD *)this + 11);
  v8 = v4;
  result = IoSetDeviceInterfacePropertyData(v3, &DEVPKEY_Monitor_AdapterLuid, 0LL, 0LL, 8, 8, &v8);
  if ( (int)result >= 0 )
  {
    v6 = IoSetDeviceInterfacePropertyData(v3, &DEVPKEY_Monitor_TargetId, 0LL, 0LL, 7, 4, &v7);
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v1;
  }
  return result;
}
