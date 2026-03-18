/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C013AF40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  CInpLockGuard *v20[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v20,
    (CTouchProcessor *)((char *)this + 56),
    a2);
  v8 = 0LL;
  if ( a2 )
  {
    v11 = CTouchProcessor::ReferenceFrame(this, a2[7]);
    if ( v11 )
    {
      v13 = a2[8];
      if ( (unsigned int)v13 >= *((_DWORD *)v11 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
        v13 = a2[8];
      }
      v14 = *((_QWORD *)v11 + 13) + 576 * v13;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v14) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      v18 = *((unsigned __int16 *)a2 + 8);
      if ( *(_DWORD *)(v14 + 236) != v18 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
        LOWORD(v18) = *((_WORD *)a2 + 8);
      }
      *a3 = v18;
      *a4 = *((_DWORD *)v11 + 12);
      v8 = *(_QWORD *)(v14 + 256);
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v11, v17);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v20);
  return v8;
}
