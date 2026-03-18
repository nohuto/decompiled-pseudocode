/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C013B8C0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C013DBB8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E000 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *FrameById; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int HistoryCount; // ebp
  unsigned int v25; // r15d
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // eax
  CInpLockGuard *v42; // [rsp+30h] [rbp-38h] BYREF
  int v43; // [rsp+38h] [rbp-30h]

  v9 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x8Eu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v42, (CTouchProcessor *)((char *)this + 56));
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( !a2 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_37;
    v14 = 143;
    goto LABEL_36;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_37;
    v14 = 144;
    goto LABEL_36;
  }
  v19 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
    v19 = *(unsigned int *)(a2 + 32);
  }
  v20 = FrameById[13] + 576 * v19;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
  if ( a5 && *a5 && (*(_DWORD *)(v20 + 244) & 0x400000) == 0 )
  {
    *a5 = 0;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_37;
    v14 = 145;
    goto LABEL_36;
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v20);
  if ( a3 > HistoryCount )
  {
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_37;
    v14 = 146;
    goto LABEL_36;
  }
  v9 = 1;
  *a4 = *(_QWORD *)(v20 + 312);
  v25 = 1;
  if ( a3 > 1 )
  {
    v26 = *(_DWORD *)(v20 + 384);
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                              this,
                              (const struct CPointerInputFrame *)FrameById);
    do
    {
      if ( !PreviousFrameByDevice || HistoryCount <= 1 )
        break;
      if ( v26 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30);
      v31 = *((_QWORD *)PreviousFrameByDevice + 13) + 576LL * v26;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v31) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
      v35 = v25++;
      a4[v35] = *(_QWORD *)(v31 + 312);
      v36 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v31);
      v39 = HistoryCount - 1;
      if ( v36 != (_DWORD)v39 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v37, v38);
      v40 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v31);
      v26 = *(_DWORD *)(v31 + 384);
      HistoryCount = v40;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
    }
    while ( v25 < a3 );
  }
  v13 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = 147;
LABEL_36:
    WPP_RECORDER_SF_(
      (__int64)v13->DeviceExtension,
      5u,
      0xBu,
      v14,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  }
LABEL_37:
  if ( !v43 )
    CInpLockGuard::UnLock(v42);
  return v9;
}
