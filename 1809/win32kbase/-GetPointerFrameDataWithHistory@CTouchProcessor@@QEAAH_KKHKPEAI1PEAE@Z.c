/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C013C100
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C013C44C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C013BFCC (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C013C518 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E000 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF90 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // r15
  unsigned int PointerInfoSize; // eax
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *FrameById; // r14
  PDEVICE_OBJECT v18; // rcx
  unsigned __int16 v19; // r9
  __int64 v20; // rax
  CPointerInfoNode *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int PointerFrameData; // ebx
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned int HistoryCount; // eax
  unsigned int v32; // esi
  unsigned int v33; // r12d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  CInpLockGuard *v49; // [rsp+40h] [rbp-48h] BYREF
  int v50; // [rsp+48h] [rbp-40h]
  unsigned int v51; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v52; // [rsp+A0h] [rbp+18h]
  int v53; // [rsp+A8h] [rbp+20h]

  v53 = a4;
  v52 = a3;
  v8 = a8;
  PointerInfoSize = GetPointerInfoSize(a3);
  v12 = a5;
  v13 = PointerInfoSize;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x7Bu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v49, (CTouchProcessor *)((char *)this + 56));
  if ( !a2 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x7Cu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_17;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v18 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v19 = 125;
LABEL_16:
      WPP_RECORDER_SF_(
        (__int64)v18->DeviceExtension,
        5u,
        0xBu,
        v19,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_17;
    }
    goto LABEL_17;
  }
  v20 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v20 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v20 = *(unsigned int *)(a2 + 32);
  }
  v21 = (CPointerInfoNode *)(FrameById[13] + 576 * v20);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v21) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v21) )
  {
    v18 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v19 = 126;
      goto LABEL_16;
    }
LABEL_17:
    PointerFrameData = 0;
    goto LABEL_43;
  }
  v26 = 1;
  a5 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(
                       this,
                       (const struct CPointerInputFrame *)FrameById,
                       v21,
                       v52,
                       v12,
                       &v51,
                       (struct tagPOINTER_INFO *)v8);
  if ( PointerFrameData )
  {
    v29 = v13 * v51;
    if ( v29 > 0xFFFFFFFF )
    {
      PointerFrameData = 0;
    }
    else
    {
      v30 = v13 * v51;
      PointerFrameData = 1;
      if ( v12 >= (unsigned int)v29 )
      {
        if ( !(_DWORD)v29 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v27, v28);
        v8 = &a8[v30];
        v12 -= v30;
      }
      if ( v53 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v21);
        v32 = *((_DWORD *)v21 + 96);
        v33 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                  this,
                                  (const struct CPointerInputFrame *)FrameById);
        do
        {
          if ( !PreviousFrameByDevice || v33 <= 1 )
            break;
          if ( v32 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36);
          v38 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 13) + 576LL * v32);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v38) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
          ++a5;
          if ( v12 >= v30 )
          {
            PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                 this,
                                 PreviousFrameByDevice,
                                 v52,
                                 v51,
                                 v30,
                                 a8,
                                 v8);
            if ( PointerFrameData )
            {
              v8 += v30;
              v12 -= v30;
            }
          }
          v42 = CPointerInfoNode::GetHistoryCount(v38);
          v45 = v33 - 1;
          if ( v42 != (_DWORD)v45 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v43, v44);
          v46 = CPointerInfoNode::GetHistoryCount(v38);
          v32 = *((_DWORD *)v38 + 96);
          v33 = v46;
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
        }
        while ( PointerFrameData );
        if ( !PointerFrameData )
          goto LABEL_41;
        v26 = a5;
      }
      v47 = v51;
      *a6 = v26;
      *a7 = v47;
    }
  }
LABEL_41:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x7Fu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_43:
  if ( !v50 )
    CInpLockGuard::UnLock(v49);
  return PointerFrameData;
}
