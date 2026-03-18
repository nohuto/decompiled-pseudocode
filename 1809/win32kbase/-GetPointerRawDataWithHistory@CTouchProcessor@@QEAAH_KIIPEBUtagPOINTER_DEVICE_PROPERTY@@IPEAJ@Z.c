/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D3F0
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D350 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C013D294 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E000 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *FrameById; // r12
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int PointerRawData; // esi
  unsigned int HistoryCount; // eax
  int v29; // edx
  int v30; // r8d
  bool v31; // zf
  unsigned int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r12
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  int v45; // [rsp+20h] [rbp-68h]
  int *v46; // [rsp+40h] [rbp-48h]
  CInpLockGuard *v47; // [rsp+50h] [rbp-38h] BYREF
  int v48; // [rsp+58h] [rbp-30h]
  size_t Size; // [rsp+90h] [rbp+8h]
  unsigned int v51; // [rsp+B8h] [rbp+30h]
  int *v52; // [rsp+C0h] [rbp+38h]

  Size = a6;
  v46 = &a7[Size];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x80u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v47, (CTouchProcessor *)((char *)this + 56));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( a6 < a4 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x81u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x82u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v14 = v48 == 0;
    goto LABEL_17;
  }
  if ( !a2 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x83u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 132;
LABEL_15:
      WPP_RECORDER_SF_(
        (__int64)v15->DeviceExtension,
        5u,
        0xBu,
        v16,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x85u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 134;
      goto LABEL_15;
    }
LABEL_16:
    v14 = v48 == 0;
LABEL_17:
    if ( v14 )
      CInpLockGuard::UnLock(v47);
    return 0LL;
  }
  v22 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v22 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    v22 = *(unsigned int *)(a2 + 32);
  }
  v23 = FrameById[13] + 576 * v22;
  PointerRawData = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v23);
  v51 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    LOBYTE(v29) = 3;
    WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v29, v30, 135, v45, a3, HistoryCount);
  }
  if ( (void *)FrameById[8] == TouchExtensibility::hDeviceUser )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x88u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    memset(a7, 0, Size * 4);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x8Au,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v31 = v48 == 0;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         (const struct CPointerInputFrame *)FrameById,
                         *(_DWORD *)(v23 + 220),
                         *(_WORD *)(v23 + 226),
                         a4,
                         a5,
                         a7);
      if ( PointerRawData )
      {
        v52 = &a7[a4];
        if ( a3 > 1 )
        {
          v32 = *(_DWORD *)(v23 + 384);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    this,
                                    (const struct CPointerInputFrame *)FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v51 <= 1 )
              break;
            if ( v32 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
            v37 = *((_QWORD *)PreviousFrameByDevice + 13) + 576LL * v32;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v37) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
            if ( &v52[a4] > v46 )
            {
              WPP_RECORDER_SF_(
                *((_QWORD *)this + 1),
                3u,
                0xBu,
                0x8Cu,
                (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v37 + 220),
                                 *(_WORD *)(v37 + 226),
                                 a4,
                                 a5,
                                 v52);
              if ( PointerRawData )
                v52 += a4;
            }
            v41 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v37);
            v44 = v51 - 1;
            if ( v41 != (_DWORD)v44 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v42, v43);
            v51 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v37);
            v32 = *(_DWORD *)(v37 + 384);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)this + 1),
          3u,
          0xBu,
          0x8Bu,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x8Du,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v31 = v48 == 0;
  }
  if ( v31 )
    CInpLockGuard::UnLock(v47);
  return PointerRawData;
}
