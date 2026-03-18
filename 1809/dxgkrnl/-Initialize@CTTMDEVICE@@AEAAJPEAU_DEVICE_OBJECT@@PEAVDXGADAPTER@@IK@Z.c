/*
 * XREFs of ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00B7DA0
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C00B7BC8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00020BC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00BA69C (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
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
  int MonitorHandle; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

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
    LODWORD(CCDMonitorID) = MonitorGetMonitorDeviceInterfaceName(a3, v6, 0x104uLL, (unsigned __int16 *)this + 44);
  else
    LODWORD(CCDMonitorID) = -1073741632;
  if ( (_DWORD)CCDMonitorID == -1073741632 )
  {
    MonitorHandle = MonitorGetMonitorHandle(a3, v6, 0, this, (__int64)&v19);
    CCDMonitorID = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v13);
LABEL_12:
      v18[5] = CCDMonitorID;
      v18[4] = v6;
      v18[3] = a3;
      WdLogEvent5_WdError(v18);
      return (unsigned int)CCDMonitorID;
    }
    CCDMonitorID = (int)MonitorGetCCDMonitorID(v19, 259LL, (char *)this + 88);
    MonitorReleaseMonitorHandle(a3);
    if ( (int)CCDMonitorID < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v18[6] = 0LL;
      goto LABEL_12;
    }
  }
  else if ( (int)CCDMonitorID < 0 )
  {
    return (unsigned int)CCDMonitorID;
  }
  v15 = RtlStringCbLengthW(*((const unsigned __int16 **)this + 77), *((unsigned __int16 *)this + 305), &v19);
  CCDMonitorID = v15;
  if ( v15 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v18[6] = 1LL;
    goto LABEL_12;
  }
  *((_WORD *)this + 304) = v19;
  return (unsigned int)CCDMonitorID;
}
