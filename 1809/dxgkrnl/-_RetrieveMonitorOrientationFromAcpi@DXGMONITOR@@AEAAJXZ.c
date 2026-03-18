/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C02994F4
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0295D7C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C0296F70 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // edi
  __int64 v14; // rcx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  ULONG RequiredSize; // [rsp+70h] [rbp+30h] BYREF

  v2 = *((unsigned int *)this + 112);
  Data = v2;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
    LODWORD(v2) = *((_DWORD *)this + 112);
  }
  if ( *((_DWORD *)this + 113) != (_DWORD)v2 )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *((PDEVICE_OBJECT *)this + 7),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v10 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = this;
    return 0LL;
  }
  if ( DevicePropertyData < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  if ( RequiredSize != 4 || Type != 7 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v12[3] = Type;
    v14 = RequiredSize;
    v12[5] = this;
    v12[6] = -1073741823LL;
    v12[4] = v14;
    goto LABEL_23;
  }
  switch ( Data )
  {
    case 0u:
      v13 = 0;
LABEL_20:
      Data = v13;
      if ( DXGMONITOR::_ValidateMonitorOrientation(this) )
      {
        *((_DWORD *)this + 113) = v13;
        *((_DWORD *)this + 114) = v13;
        return 0LL;
      }
      break;
    case 0x5Au:
      v13 = 1;
      goto LABEL_20;
    case 0xB4u:
      v13 = 2;
      goto LABEL_20;
    case 0x10Eu:
      v13 = 3;
      goto LABEL_20;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v12[3] = Data;
  v12[4] = this;
  v12[5] = -1073741823LL;
LABEL_23:
  WdLogEvent5_WdError(v12);
  return 3221225473LL;
}
