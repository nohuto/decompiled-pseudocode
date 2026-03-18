/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C016BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00BD5F0 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0168488 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0174AEC (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        __int64 a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  CTouchProcessor *v17; // rcx
  __int64 v18; // rax
  CPointerInfoNode *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int PointerEventTarget; // ebx
  CInpLockGuard *v25[5]; // [rsp+20h] [rbp-28h] BYREF
  HWND v26; // [rsp+50h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (CTouchProcessor *)((char *)this + 48));
  v10 = 0;
  if ( (unsigned int)IsPointerInputMessageWithState(a4) && (!a6 || a4 - 585 > 1) )
  {
    if ( a2 )
    {
      v13 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a2 + 28));
      if ( v13 )
      {
        v15 = a5;
        if ( !a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
        v16 = *((unsigned int *)v13 + 10);
        if ( *(_DWORD *)(v15 + 28) != (_DWORD)v16 )
        {
          v17 = this;
LABEL_15:
          CTouchProcessor::UnreferenceFrame(v17, v13);
          goto LABEL_18;
        }
        v18 = *(unsigned int *)(v15 + 32);
        if ( (unsigned int)v18 >= *((_DWORD *)v13 + 12) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v11, v14);
          v18 = *(unsigned int *)(v15 + 32);
        }
        v19 = (CPointerInfoNode *)(*((_QWORD *)v13 + 16) + 496 * v18);
        if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
        v17 = this;
        if ( (*(_DWORD *)v19 & 0x100) == 0 )
          goto LABEL_15;
        PointerEventTarget = CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v19, &v26);
        CTouchProcessor::UnreferenceFrame(this, v13);
        if ( PointerEventTarget )
          LOBYTE(v10) = v26 == a3;
      }
    }
  }
LABEL_18:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
  return v10;
}
