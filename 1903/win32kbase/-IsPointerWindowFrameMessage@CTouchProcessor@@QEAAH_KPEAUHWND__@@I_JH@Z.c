/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C016DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C016A688 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0176CDC (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        __int64 a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct CPointerInputFrame *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  CPointerInfoNode *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  BOOL v21; // ebx
  CInpLockGuard *v23; // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+28h] [rbp-10h]
  HWND v25; // [rsp+40h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v23,
    (CTouchProcessor *)((char *)this + 48));
  if ( !(unsigned int)IsPointerInputMessageWithState(a4) || a6 && a4 - 585 <= 1 )
    goto LABEL_16;
  if ( !a2 )
    goto LABEL_16;
  v12 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a2 + 28));
  if ( !v12 )
    goto LABEL_16;
  v14 = a5;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
  v15 = *((unsigned int *)v12 + 10);
  if ( *(_DWORD *)(v14 + 28) != (_DWORD)v15 )
    goto LABEL_16;
  v16 = *(unsigned int *)(v14 + 32);
  if ( (unsigned int)v16 >= *((_DWORD *)v12 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10, v13);
    v16 = *(unsigned int *)(v14 + 32);
  }
  v17 = (CPointerInfoNode *)(*((_QWORD *)v12 + 16) + 496 * v16);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v17) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  if ( (*(_DWORD *)v17 & 0x100) != 0
    && (unsigned int)CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v17, &v25) )
  {
    v21 = v25 == a3;
  }
  else
  {
LABEL_16:
    v21 = 0;
  }
  if ( !v24 )
    CInpLockGuard::UnLock(v23);
  return v21;
}
