/*
 * XREFs of ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C029B4C0
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C029094C (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001CDBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001CF50 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C004F2D0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00501D8 (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00502A0 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDescriptorIDs(
        __int64 ***this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2,
        __int64 a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  __int64 **v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int ManufacturerName; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  int ProductCode; // eax
  WCHAR v29; // ax
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  unsigned __int16 v32[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-48h]
  WCHAR v35; // [rsp+48h] [rbp-40h]

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  a2->HardwareId[0] = 0;
  v6 = 0LL;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  if ( !*((_DWORD *)this + 32) )
    goto LABEL_20;
  v7 = this[17];
  if ( !v7 )
    goto LABEL_20;
  v8 = *v7;
  if ( !v8 )
    goto LABEL_20;
  do
  {
    if ( *((_DWORD *)v8 + 2) == 2 )
      break;
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  if ( !v8 )
  {
LABEL_20:
    v23 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdWarning(v23);
    LODWORD(v14) = -1071841279;
    goto LABEL_21;
  }
  v9 = (__int64)(v8 + 3);
  IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8 + 24);
  v14 = IsEDIDBaseBlock;
  if ( IsEDIDBaseBlock >= 0 )
  {
    v6 = (unsigned __int8 *)v9;
    LODWORD(v14) = 0;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v9;
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdWarning(v15);
    MonitorLogBadEDID(v9, v14);
  }
  if ( (int)v14 < 0 )
  {
LABEL_21:
    if ( this[20] )
    {
      ManufacturerName = DisplayID_GetManufacturerName((struct DisplayIDObj *)(this + 21), v32);
      v26 = ManufacturerName;
      if ( ManufacturerName < 0
        || (ProductCode = DisplayID_GetProductCode((struct DisplayIDObj *)(this + 21), &v32[6]),
            v26 = ProductCode,
            ProductCode < 0) )
      {
        v27 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v27 + 24) = this[20];
        *(_QWORD *)(v27 + 32) = v26;
        WdLogEvent5_WdError(v27);
        return (unsigned int)v26;
      }
      WORD2(v33) = 0;
      goto LABEL_26;
    }
    return (unsigned int)v14;
  }
  result = EDIDV1_IsEDIDBaseBlock(v6);
  if ( (int)result < 0 )
    return result;
  v17 = EDIDV1_ObtainMonitorManufacturerName(v6, v32);
  v14 = v17;
  if ( v17 >= 0 )
  {
    v22 = EDIDV1_ObtainMonitorProductCodeID(v6, &v32[3]);
    v14 = v22;
    if ( v22 >= 0 )
    {
      v32[7] = 0;
LABEL_26:
      v29 = v35;
      v30 = v33;
      *(_OWORD *)a2->HardwareId = *(_OWORD *)v32;
      v31 = v34;
      *(_OWORD *)&a2->HardwareId[8] = v30;
      *(_QWORD *)&a2->HardwareId[16] = v31;
      a2->HardwareId[20] = v29;
      return 0LL;
    }
  }
  v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v21 + 24) = v6;
  *(_QWORD *)(v21 + 32) = v14;
  WdLogEvent5_WdWarning(v21);
  MonitorLogBadEDID((__int64)v6, v14);
  return (unsigned int)v14;
}
