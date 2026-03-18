/*
 * XREFs of ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01777D4
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C017A004 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C017A238 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C00219AC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0021AA0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C0021B50 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0021BF0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056CB4 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056D2C (-DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C02C9950 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDiagInfo(
        DXGMONITOR *this,
        struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *a2,
        __int64 a3)
{
  unsigned __int8 *v3; // rsi
  __int64 **v6; // rax
  __int64 *v7; // rax
  unsigned __int8 *v8; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _STRING v17; // [rsp+20h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  WCHAR v19[4]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v20; // [rsp+48h] [rbp-38h]
  WCHAR SourceString[4]; // [rsp+50h] [rbp-30h] BYREF
  WCHAR v22[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+70h] [rbp-10h]

  v3 = 0LL;
  *(_DWORD *)a2 = *((_DWORD *)this + 108);
  if ( !*((_DWORD *)this + 32) )
    goto LABEL_14;
  v6 = (__int64 **)*((_QWORD *)this + 17);
  if ( !v6 )
    goto LABEL_14;
  v7 = *v6;
  if ( !v7 )
    goto LABEL_14;
  do
  {
    if ( *((_DWORD *)v7 + 2) == 2 )
      break;
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  if ( v7 )
  {
    v8 = (unsigned __int8 *)(v7 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v7 + 24);
    v13 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v15 + 24) = v8;
      *(_QWORD *)(v15 + 32) = v13;
      WdLogEvent5_WdWarning(v15);
      MonitorLogBadEDID(v8, (unsigned int)v13);
    }
    else
    {
      v3 = v8;
      LODWORD(v13) = 0;
    }
  }
  else
  {
LABEL_14:
    v16 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdWarning(v16);
    LODWORD(v13) = -1071841279;
  }
  *(_QWORD *)SourceString = 0LL;
  *(_QWORD *)v19 = 0LL;
  v20 = 0;
  *(_QWORD *)v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  if ( (int)v13 < 0 )
  {
    if ( *((_QWORD *)this + 21) )
    {
      DisplayID_GetProductCode((DXGMONITOR *)((char *)this + 168), v19);
      DisplayID_GetSerialNumber((DXGMONITOR *)((char *)this + 168), v22);
    }
  }
  else
  {
    *((_DWORD *)a2 + 1) = 1;
    EDIDV1_ObtainMonitorManufacturerName(v3, SourceString);
    EDIDV1_ObtainMonitorProductCodeID(v3, v19);
    EDIDV1_ObtainMonitorSerialNumber(v3, v22);
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  RtlInitAnsiString(&v17, (PCSZ)a2 + 8);
  v17.MaximumLength = 4;
  RtlUnicodeStringToAnsiString(&v17, &DestinationString, 0);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, v19);
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  RtlInitAnsiString(&v17, (PCSZ)a2 + 12);
  v17.MaximumLength = 5;
  RtlUnicodeStringToAnsiString(&v17, &DestinationString, 0);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, v22);
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  RtlInitAnsiString(&v17, (PCSZ)a2 + 17);
  v17.MaximumLength = 14;
  RtlUnicodeStringToAnsiString(&v17, &DestinationString, 0);
  return 0LL;
}
