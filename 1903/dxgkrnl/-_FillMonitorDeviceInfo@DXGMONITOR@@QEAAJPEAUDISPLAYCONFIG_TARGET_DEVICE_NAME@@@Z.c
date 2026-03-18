/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00CFD78
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00C3508 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00CFBF8 (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C000223C (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0002448 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C0056D78 (-DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z.c)
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
  __int64 v11; // r14
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  int UserFriendlyName; // eax
  __int64 v18; // rax
  unsigned __int8 v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v15);
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
    v11 = v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 18) + 24LL;
      *(_QWORD *)(v16 + 32) = v11;
      WdLogEvent5_WdDmmEvent(v16);
      v12 = 0;
    }
    else
    {
      v12 = 1;
    }
    *((_DWORD *)a2 + 5) = v12 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    if ( (int)EDIDV1_FillProductIdManufacturerName(
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                (unsigned __int16 *)a2 + 14,
                (unsigned __int16 *)a2 + 15) >= 0 )
      v2 = 4;
    v13 = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  }
  else
  {
    v19 = 0;
    UserFriendlyName = DisplayID_GetUserFriendlyName((DXGMONITOR *)((char *)this + 168), v9, v6, &v19);
    v8 = UserFriendlyName;
    if ( UserFriendlyName < 0 )
    {
      v18 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v18 + 24) = *v5;
      *(_QWORD *)(v18 + 32) = v8;
      WdLogEvent5_WdDmmEvent(v18);
    }
    *((_DWORD *)a2 + 5) &= ~4u;
    v13 = *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    *((_DWORD *)a2 + 7) = 0;
  }
  *((_DWORD *)a2 + 5) = v13;
  return (unsigned int)v8;
}
