/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB858
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C00BB6CC (MonitorFillMonitorDeviceInfo.c)
 *     _lambda_2b22dbeadb19a6eea2c92cf183f0ad41_::operator() @ 0x1C00BFFC0 (_lambda_2b22dbeadb19a6eea2c92cf183f0ad41_--operator().c)
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0002F20 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0003050 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C00503A4 (-DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // ebx
  _QWORD *v5; // r14
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int16 *v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  int UserFriendlyName; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int8 v27; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  v5 = (_QWORD *)((char *)this + 168);
  if ( !*((_QWORD *)this + 18) && !*v5 )
    return 3223126017LL;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v7 = *((_QWORD *)this + 18);
  LODWORD(v8) = 0;
  v9 = (unsigned __int16 *)((char *)a2 + 36);
  if ( v7 )
  {
    v10 = EDIDV1_ObtainDisplayConfigFriendlyName((unsigned __int8 *)(v7 + 24), v9);
    v15 = v10;
    if ( v10 < 0 )
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
      *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 18) + 24LL;
      *(_QWORD *)(v19 + 32) = v15;
      WdLogEvent5_WdDmmEvent(v19);
      v16 = 0;
    }
    else
    {
      v16 = 1;
    }
    *((_DWORD *)a2 + 5) = v16 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    if ( (int)EDIDV1_FillProductIdManufacturerName(
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                (unsigned __int16 *)a2 + 14,
                (unsigned __int16 *)a2 + 15) >= 0 )
      v2 = 4;
    v17 = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  }
  else
  {
    v27 = 0;
    UserFriendlyName = DisplayID_GetUserFriendlyName((DXGMONITOR *)((char *)this + 168), v9, v6, &v27);
    v8 = UserFriendlyName;
    if ( UserFriendlyName < 0 )
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = *v5;
      *(_QWORD *)(v26 + 32) = v8;
      WdLogEvent5_WdDmmEvent(v26);
    }
    *((_DWORD *)a2 + 5) &= ~4u;
    v17 = *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    *((_DWORD *)a2 + 7) = 0;
  }
  *((_DWORD *)a2 + 5) = v17;
  return (unsigned int)v8;
}
