/*
 * XREFs of ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C015F0E0
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C015E7A8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C001F1F0 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorGetCCDMonitorID @ 0x1C00EC934 (MonitorGetCCDMonitorID.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C012EAA8 (MonitorGetMonitorDeviceInterfaceName.c)
 */

__int64 __fastcall CTTMDEVICE::Initialize(
        CTTMDEVICE *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbp
  unsigned int v9; // eax
  bool v10; // zf
  __int64 CCDMonitorID; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int MonitorHandle; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v6 = a4;
  DXGADAPTER::IsCoreResourceSharedOwner(a3);
  v9 = a5;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 20) = v6;
  *((_DWORD *)this + 21) = v9;
  memset((char *)this + 88, 0, 0x208uLL);
  *((_DWORD *)this + 152) = 34078720;
  v10 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
  *((_QWORD *)this + 77) = (char *)this + 88;
  if ( v10 )
    LODWORD(CCDMonitorID) = MonitorGetMonitorDeviceInterfaceName(a3, (unsigned int)v6, 0x104u, (char *)this + 88);
  else
    LODWORD(CCDMonitorID) = -1073741632;
  if ( (_DWORD)CCDMonitorID == -1073741632 )
  {
    MonitorHandle = MonitorGetMonitorHandle(a3, (unsigned int)v6, 0, this, &v25);
    CCDMonitorID = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
      goto LABEL_12;
    }
    CCDMonitorID = (int)MonitorGetCCDMonitorID((struct HDXGMONITOR__ *)v25, 0x103u, (unsigned __int16 *)this + 44);
    MonitorReleaseMonitorHandle(a3, v25, this);
    if ( (int)CCDMonitorID < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
      v21[6] = 0LL;
      goto LABEL_12;
    }
LABEL_5:
    v12 = RtlStringCbLengthW(*((const unsigned __int16 **)this + 77), *((unsigned __int16 *)this + 305), &v25);
    CCDMonitorID = v12;
    if ( v12 >= 0 )
    {
      *((_WORD *)this + 304) = v25;
      return (unsigned int)CCDMonitorID;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v21[6] = 1LL;
LABEL_12:
    v21[5] = CCDMonitorID;
    v21[4] = v6;
    v21[3] = a3;
    WdLogEvent5_WdError(v21);
    return (unsigned int)CCDMonitorID;
  }
  if ( (int)CCDMonitorID >= 0 )
    goto LABEL_5;
  return (unsigned int)CCDMonitorID;
}
