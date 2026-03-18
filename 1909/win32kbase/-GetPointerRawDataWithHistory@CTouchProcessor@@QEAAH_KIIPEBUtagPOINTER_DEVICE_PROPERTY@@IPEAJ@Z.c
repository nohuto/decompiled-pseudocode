/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0169C40
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0169BA4 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00BD5F0 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C015E0C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164560 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016735C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0169AE8 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C016A978 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0174DE4 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        char *a7)
{
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct CPointerInputFrame *FrameById; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int HistoryCount; // eax
  int v27; // ecx
  int v28; // r8d
  unsigned int PointerRawData; // r14d
  _UNKNOWN **v30; // rdx
  PDEVICE_OBJECT v31; // rcx
  int v32; // r9d
  unsigned int v33; // r15d
  __int64 v34; // rcx
  __int64 v35; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r13
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // edx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // [rsp+20h] [rbp-78h]
  __int64 Size; // [rsp+40h] [rbp-58h]
  int *v48; // [rsp+48h] [rbp-50h]
  CInpLockGuard *v49[3]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v52; // [rsp+C8h] [rbp+30h]
  int *v53; // [rsp+D0h] [rbp+38h]

  v9 = a2;
  Size = 4LL * a6;
  v48 = (int *)&a7[Size];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      132,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v49, (CTouchProcessor *)((char *)this + 48));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( a6 < a4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 133, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v15 = 134;
LABEL_11:
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_12:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v49);
    return 0LL;
  }
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 135, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v15 = 136;
    goto LABEL_11;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v9 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    LOBYTE(v17) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v17, 7, 137, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v15 = 138;
    goto LABEL_11;
  }
  v21 = *(unsigned int *)(v9 + 32);
  if ( (unsigned int)v21 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    v21 = *(unsigned int *)(v9 + 32);
  }
  v22 = *((_QWORD *)FrameById + 16) + 496 * v21;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v22) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v22);
  v52 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    v30 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    LOBYTE(v30) = 3;
    WPP_RECORDER_SF_LL(v27, (_DWORD)v30, v28, 139, v46, a3, HistoryCount);
  }
  v30 = &WPP_RECORDER_INITIALIZED;
LABEL_33:
  if ( *((void **)FrameById + 8) == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)v30, 7, 140, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    memset(a7, 0, Size);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v31 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v32 = 142;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         this,
                         FrameById,
                         *(unsigned int *)(v22 + 164),
                         *(_WORD *)(v22 + 170),
                         a4,
                         a5,
                         (int *)a7);
      if ( !PointerRawData && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v30) = 3;
        WPP_RECORDER_SF_(
          (_DWORD)gBaseLog,
          (_DWORD)v30,
          7,
          143,
          (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
      if ( PointerRawData )
      {
        v53 = (int *)&a7[4 * a4];
        if ( a3 > 1 )
        {
          v33 = *(_DWORD *)(v22 + 352);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v52 <= 1 )
              break;
            if ( v33 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v30, v35);
            v37 = *((_QWORD *)PreviousFrameByDevice + 16) + 496LL * v33;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v37) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
            v41 = a4;
            if ( &v53[a4] > v48 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v41) = 3;
                WPP_RECORDER_SF_(
                  (_DWORD)gBaseLog,
                  v41,
                  7,
                  144,
                  (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 this,
                                 PreviousFrameByDevice,
                                 *(unsigned int *)(v37 + 164),
                                 *(_WORD *)(v37 + 170),
                                 a4,
                                 a5,
                                 v53);
              if ( PointerRawData )
                v53 += a4;
            }
            v42 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v37);
            v45 = v52 - 1;
            if ( v42 != (_DWORD)v45 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v43, v44);
            v52 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v37);
            v33 = *(_DWORD *)(v37 + 352);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v31 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v32 = 145;
  }
  LOBYTE(v30) = 5;
  WPP_RECORDER_SF_(v31->DeviceExtension, (_DWORD)v30, 7, v32, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_65:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v49);
  return PointerRawData;
}
