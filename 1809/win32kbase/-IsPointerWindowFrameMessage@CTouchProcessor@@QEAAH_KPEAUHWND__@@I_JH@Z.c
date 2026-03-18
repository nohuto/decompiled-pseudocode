/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C013F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C013BE50 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0147CDC (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rcx
  CTouchProcessor *v17; // rcx
  __int64 v18; // rax
  CPointerInfoNode *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int PointerEventTarget; // eax
  CInpLockGuard *v25[8]; // [rsp+20h] [rbp-58h] BYREF
  HWND v26; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (CTouchProcessor *)((char *)this + 56),
    a2);
  v10 = 0;
  if ( (unsigned int)IsPointerInputMessageWithState(a4) && (!a6 || a4 - 585 > 1) )
  {
    if ( a2 )
    {
      v13 = CTouchProcessor::ReferenceFrame(this, a2[7]);
      if ( v13 )
      {
        v15 = a5;
        if ( !a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
        v16 = *((unsigned int *)v13 + 10);
        if ( *(_DWORD *)(v15 + 28) == (_DWORD)v16 )
        {
          v18 = *(unsigned int *)(v15 + 32);
          if ( (unsigned int)v18 >= *((_DWORD *)v13 + 12) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v11, v14);
            v18 = *(unsigned int *)(v15 + 32);
          }
          v19 = (CPointerInfoNode *)(*((_QWORD *)v13 + 13) + 576 * v18);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v14);
          v17 = this;
          if ( (*(_DWORD *)v19 & 0x100) != 0 )
          {
            PointerEventTarget = CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v19, &v26);
            v22 = (__int64)v13;
            v17 = this;
            if ( PointerEventTarget )
            {
              CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v13, v14);
              LOBYTE(v10) = v26 == a3;
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v17 = this;
        }
        v22 = (__int64)v13;
LABEL_16:
        CTouchProcessor::UnreferenceFrame((__int64)v17, v22, v14);
      }
    }
  }
LABEL_19:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
  return v10;
}
