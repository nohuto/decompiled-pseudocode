/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C013BB40
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C013CA7C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E000 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C013FE74 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  unsigned __int8 *v6; // r12
  __int64 PointerInfoSize; // rbp
  unsigned int v11; // ebx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *FrameById; // r13
  __int64 v18; // rax
  CPointerInfoNode *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r14d
  unsigned int HistoryCount; // eax
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r15
  CPointerInfoNode *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned int v38; // eax
  CInpLockGuard *v40; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+38h] [rbp-40h]
  unsigned int v44; // [rsp+98h] [rbp+20h]

  v6 = (unsigned __int8 *)a6;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v11 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x77u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v40, (CTouchProcessor *)((char *)this + 56));
  if ( !a2 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 120;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 121;
      goto LABEL_9;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_37;
  }
  v18 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v18 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v18 = *(unsigned int *)(a2 + 32);
  }
  v19 = (CPointerInfoNode *)(FrameById[13] + 576 * v18);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  if ( (*(_DWORD *)v19 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  v23 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v11 = CTouchProcessor::PointerInfoCopyOutHelper(
            this,
            v19,
            (struct tagHID_POINTER_DEVICE_INFO *)FrameById[15],
            a3,
            PointerInfoSize,
            a6);
    if ( v11 )
    {
      v6 = (unsigned __int8 *)a6 + PointerInfoSize;
      a4 -= PointerInfoSize;
    }
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount(v19);
  v25 = *((_DWORD *)v19 + 96);
  v44 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, (const struct CPointerInputFrame *)FrameById);
  if ( v11 )
  {
    do
    {
      if ( !PreviousFrameByDevice || v44 <= 1 )
        break;
      if ( v25 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      v30 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 13) + 576LL * v25);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v30) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
      ++v23;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                v30,
                (struct tagHID_POINTER_DEVICE_INFO *)FrameById[15],
                a3,
                PointerInfoSize,
                (struct tagPOINTER_INFO *)v6);
        if ( v11 )
        {
          v6 += PointerInfoSize;
          a4 -= PointerInfoSize;
        }
      }
      v34 = CPointerInfoNode::GetHistoryCount(v30);
      v37 = v44 - 1;
      if ( v34 != (_DWORD)v37 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v35, v36);
      v38 = CPointerInfoNode::GetHistoryCount(v30);
      v25 = *((_DWORD *)v30 + 96);
      v44 = v38;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
    }
    while ( v11 );
    if ( v11 )
      *a5 = v23;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x7Au,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_37:
  if ( !v41 )
    CInpLockGuard::UnLock(v40);
  return v11;
}
