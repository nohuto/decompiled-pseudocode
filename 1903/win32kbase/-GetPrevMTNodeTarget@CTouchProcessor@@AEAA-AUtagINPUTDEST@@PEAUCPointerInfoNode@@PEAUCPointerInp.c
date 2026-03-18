/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C016CA48
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A4D40 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0030CE0 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0166BEC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C017195C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01756AC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        CTouchProcessor *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  const struct CPointerInputFrame *v8; // rax
  struct CPointerInputFrame *v9; // rbp
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct CPointerInfoNode *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _DWORD v24[32]; // [rsp+20h] [rbp-88h] BYREF

  memset(a2, 0, 0x78uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(a1, v8, *(_WORD *)(a3 + 180), 0LL);
    v13 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      v14 = *(unsigned __int16 *)(a3 + 180);
      if ( *((_WORD *)ValidNodeInFrame + 90) != (_WORD)v14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12);
      v15 = HMValidateHandleNoSecure(*((_QWORD *)v13 + 25), 1);
      v16 = INPUTDEST_FROM_PWND(v24, v15);
      v17 = *((_OWORD *)v16 + 1);
      *a2 = *(_OWORD *)v16;
      v18 = *((_OWORD *)v16 + 2);
      a2[1] = v17;
      v19 = *((_OWORD *)v16 + 3);
      a2[2] = v18;
      v20 = *((_OWORD *)v16 + 4);
      a2[3] = v19;
      v21 = *((_OWORD *)v16 + 5);
      a2[4] = v20;
      v22 = *((_OWORD *)v16 + 6);
      a2[5] = v21;
      *(_QWORD *)&v21 = *((_QWORD *)v16 + 14);
      a2[6] = v22;
      *((_QWORD *)a2 + 14) = v21;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9);
  }
  return a2;
}
