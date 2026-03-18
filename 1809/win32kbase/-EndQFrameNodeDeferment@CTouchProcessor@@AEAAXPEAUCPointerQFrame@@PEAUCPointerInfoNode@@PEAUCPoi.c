/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C013826C
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01339A0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0130E94 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C013ED1C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0142400 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0142A80 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01462B8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0161D5C (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        unsigned __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  _OWORD v14[11]; // [rsp+20h] [rbp-1A8h] BYREF
  _OWORD v15[5]; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v16; // [rsp+120h] [rbp-A8h]
  __int128 v17; // [rsp+130h] [rbp-98h]
  __int128 v18; // [rsp+140h] [rbp-88h]
  __int128 v19; // [rsp+150h] [rbp-78h]
  __int128 v20; // [rsp+160h] [rbp-68h]
  __int128 v21; // [rsp+170h] [rbp-58h]

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 23) &= ~2u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState((CTouchProcessor *)this, a2, v11 != 0LL);
  CInputDest::CInputDest(
    (CInputDest *)v15,
    *((struct tagWND *const *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)a3 + 64)));
  if ( DWORD1(v16) )
  {
    v14[0] = v15[0];
    v14[1] = v15[1];
    v14[2] = v15[2];
    v14[3] = v15[3];
    v14[4] = v15[4];
    v14[5] = v16;
    v14[6] = v17;
    v14[7] = v18;
    v14[8] = v19;
    v14[9] = v20;
    v14[10] = v21;
    if ( ApiSetEditionGetInputDelegate(v14) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v11, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v11, a2);
  if ( v11 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v11, v13);
  CInputDest::~CInputDest((CInputDest *)v15);
}
