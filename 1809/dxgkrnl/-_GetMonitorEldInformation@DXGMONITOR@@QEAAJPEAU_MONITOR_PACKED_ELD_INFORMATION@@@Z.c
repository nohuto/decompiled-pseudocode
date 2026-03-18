/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0297760
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C027556C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0003050 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C004F2D0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00C3344 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(
        __int64 ***this,
        struct _MONITOR_PACKED_ELD_INFORMATION *a2,
        __int64 a3)
{
  unsigned int v5; // r13d
  unsigned __int16 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 *v9; // r12
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r15
  int IsEDIDBaseBlock; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  SIZE_T v26; // rax
  unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  int MonitorCCDMonitorID; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned int Length; // esi
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v40; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG HashValue; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int16 v43; // [rsp+78h] [rbp+48h] BYREF

  v5 = 130;
  v6 = 0LL;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0LL;
  if ( !*((_DWORD *)this + 32) )
    goto LABEL_18;
  v10 = this[17];
  if ( !v10 )
    goto LABEL_18;
  v11 = *v10;
  if ( !v11 )
    goto LABEL_18;
  do
  {
    if ( *((_DWORD *)v11 + 2) == 2 )
      break;
    v11 = (__int64 *)*v11;
  }
  while ( v11 );
  if ( v11 )
  {
    v12 = (__int64)(v11 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v11 + 24);
    v17 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v9 = (unsigned __int8 *)v12;
      LODWORD(v17) = 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v12;
      *(_QWORD *)(v18 + 32) = v17;
      WdLogEvent5_WdWarning(v18);
      MonitorLogBadEDID(v12, v17);
    }
    if ( (int)v17 >= 0 )
    {
      v19 = EDIDV1_FillProductIdManufacturerName(v9, (unsigned __int16 *)&HashValue, &v43);
      v23 = v19;
      if ( v19 >= 0 )
      {
        *((_WORD *)a2 + 4) = HashValue;
        *((_WORD *)a2 + 5) = v43;
        goto LABEL_20;
      }
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v24 + 24) = v9;
      *(_QWORD *)(v24 + 32) = v23;
      WdLogEvent5_WdWarning(v24);
      MonitorLogBadEDID((__int64)v9, v23);
    }
  }
  else
  {
LABEL_18:
    v25 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdWarning(v25);
  }
  *((_DWORD *)a2 + 2) = 0;
  while ( 1 )
  {
LABEL_20:
    if ( v6 )
      operator delete[](v6);
    v5 *= 2;
    v26 = 2LL * v5;
    if ( !is_mul_ok(v5, 2uLL) )
      v26 = -1LL;
    v27 = (unsigned __int16 *)operator new(v26, 0x4D677844u, PagedPool);
    v6 = v27;
    if ( !v27 )
      break;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID((DXGMONITOR *)this, 0, v5, v27);
    v31 = MonitorCCDMonitorID;
    if ( MonitorCCDMonitorID != -2147483643 && MonitorCCDMonitorID != -1073741789 )
    {
      if ( MonitorCCDMonitorID >= 0 )
      {
        HashValue = 0;
        RtlInitUnicodeString(&DestinationString, v6);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        LODWORD(v31) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( (int)v31 < 0 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34);
          WdLogEvent5_WdAssertion(v35);
        }
        *(_QWORD *)a2 = HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v36 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v6[v36];
          LODWORD(v31) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          if ( (int)v31 < 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v37);
            WdLogEvent5_WdAssertion(v38);
          }
          *(_QWORD *)a2 |= (unsigned __int64)HashValue << 32;
        }
      }
      else
      {
        v32 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v32 + 24) = this;
        *(_QWORD *)(v32 + 32) = v31;
        WdLogEvent5_WdError(v32);
      }
LABEL_37:
      operator delete[](v6);
      return (unsigned int)v31;
    }
    LODWORD(v31) = -1073741789;
    if ( v5 >= 0x410 )
      goto LABEL_37;
  }
  v40 = WdLogNewEntry5_WdLowResource(v28);
  WdLogEvent5_WdLowResource(v40);
  return 3221225495LL;
}
