/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01665BC
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0160DB0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C0022DB0 (_HMObjectFromHandle.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C015D994 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C016D84C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C017107C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C017195C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01750E8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01756AC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C019C30C (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        CTouchProcessor *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rsi
  __int64 v12; // r8
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _OWORD v16[7]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h]
  _OWORD v18[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+F0h] [rbp-10h]
  __int128 v20; // [rsp+100h] [rbp+0h]
  __int64 v21; // [rsp+110h] [rbp+10h]

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 28) &= ~4u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(a5, a2, v11 != 0LL);
  v13 = (struct tagWND *)HMObjectFromHandle(*((_QWORD *)a3 + 25));
  CInputDest::CInputDest((CInputDest *)v18, v13);
  if ( HIDWORD(v19) )
  {
    v16[0] = v18[0];
    v16[1] = v18[1];
    v16[2] = v18[2];
    v16[3] = v18[3];
    v16[4] = v18[4];
    v16[5] = v19;
    v16[6] = v20;
    v17 = v21;
    if ( ApiSetEditionGetInputDelegate(v16) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v11, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v11, a2);
  if ( v11 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v11);
  CInputDest::SetEmpty((CInputDest *)v18, v14, v15);
}
