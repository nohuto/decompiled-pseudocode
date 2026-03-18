/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C0173E04
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0173D68 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C017FB80 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rcx
  NTSTATUS DevicePropertyData; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  ULONG RequiredSize; // [rsp+70h] [rbp+30h] BYREF

  v3 = *((unsigned int *)this + 112);
  Data = v3;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3, a2);
    WdLogEvent5_WdAssertion(v10);
    LODWORD(v3) = *((_DWORD *)this + 112);
  }
  if ( *((_DWORD *)this + 113) != (_DWORD)v3 )
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
  v8 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = this;
    return 0LL;
  }
  if ( DevicePropertyData < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = v8;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v8;
  }
  if ( RequiredSize != 4 || Type != 7 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v13[3] = Type;
    v14 = RequiredSize;
    v13[5] = this;
    v13[6] = -1073741823LL;
    v13[4] = v14;
    goto LABEL_23;
  }
  switch ( Data )
  {
    case 0u:
      v12 = 0;
LABEL_20:
      Data = v12;
      if ( DXGMONITOR::_ValidateMonitorOrientation(this, v12) )
      {
        *((_DWORD *)this + 113) = v12;
        *((_DWORD *)this + 114) = v12;
        return 0LL;
      }
      break;
    case 0x5Au:
      v12 = 1;
      goto LABEL_20;
    case 0xB4u:
      v12 = 2;
      goto LABEL_20;
    case 0x10Eu:
      v12 = 3;
      goto LABEL_20;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
  v13[3] = Data;
  v13[4] = this;
  v13[5] = -1073741823LL;
LABEL_23:
  WdLogEvent5_WdError(v13);
  return 3221225473LL;
}
