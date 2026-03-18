/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A844 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C0132FC8 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C0133324 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C0133B04 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0133B5C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C013662C (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0139064 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01391A8 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01649B4 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  LARGE_INTEGER *v6; // rax
  __int64 v7; // r8
  LARGE_INTEGER *v8; // rdi
  LARGE_INTEGER *v9; // rbx
  LARGE_INTEGER *v10; // rax
  struct CPointerInfoNode *v11; // rax
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER v14; // r8
  unsigned int v15; // ebp
  __int64 v16; // rdx
  struct CPointerQFrame *v17; // rax
  unsigned int i; // ebp
  struct CPointerRawData *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  struct A0xad387374::CFrameIdGenerator *v24; // r14
  int v25; // ebp
  struct CPointerInfoNode *QuadPart; // rdx
  struct CPointerQFrame *v27; // rdx
  _QWORD v29[2]; // [rsp+20h] [rbp-98h] BYREF
  CInpLockGuard *v30[6]; // [rsp+30h] [rbp-88h] BYREF
  CInpLockGuard *v31[8]; // [rsp+60h] [rbp-58h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v30, (struct CInpLockGuard *)(this + 7), 0LL);
  v6 = (LARGE_INTEGER *)Win32AllocPoolZInit(0x80uLL, 0x66707355u);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_OWORD *)&v6->LowPart = *(_OWORD *)a2;
    *(_OWORD *)&v6[2].LowPart = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v6[4].LowPart = *((_OWORD *)a2 + 2);
    *(_OWORD *)&v6[6].LowPart = *((_OWORD *)a2 + 3);
    *(_OWORD *)&v6[8].LowPart = *((_OWORD *)a2 + 4);
    *(_OWORD *)&v6[10].LowPart = *((_OWORD *)a2 + 5);
    *(_OWORD *)&v6[12].LowPart = *((_OWORD *)a2 + 6);
    *(_OWORD *)&v6[14].LowPart = *((_OWORD *)a2 + 7);
    v10 = v6 + 1;
    v10[1].QuadPart = (LONGLONG)v10;
    v10->QuadPart = (LONGLONG)v10;
    v9[4].QuadPart = (LONGLONG)&v9[3];
    v9[3].QuadPart = (LONGLONG)&v9[3];
    v9[15].QuadPart = 0LL;
    v9[13].QuadPart = 0LL;
    v9[14].QuadPart = 0LL;
    v9[12].QuadPart = 0LL;
    v11 = CTouchProcessor::AllocPointerInfoNodeList(this, *((unsigned int *)a2 + 12), v7);
    v9[13].QuadPart = (LONGLONG)v11;
    if ( !v11 )
      goto LABEL_15;
    v9[9] = KeQueryPerformanceCounter(0LL);
    v15 = 0;
    v16 = *((unsigned int *)a2 + 12);
    if ( (_DWORD)v16 )
    {
      do
      {
        CPointerInfoNode::operator=(v9[13].QuadPart + 576LL * v15, 576LL * v15 + *((_QWORD *)a2 + 13));
        v16 = *((unsigned int *)a2 + 12);
        ++v15;
      }
      while ( v15 < (unsigned int)v16 );
    }
    v17 = CTouchProcessor::AllocPointerQFrameList(this, v16, v14.QuadPart);
    v9[14].QuadPart = (LONGLONG)v17;
    if ( !v17 )
      goto LABEL_15;
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
      CPointerQFrame::operator=(v9[14].QuadPart + 224LL * i, 224LL * i + *((_QWORD *)a2 + 14));
    if ( !*((_QWORD *)a2 + 12)
      || (v19 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (v9[12].QuadPart = (LONGLONG)v19) != 0) )
    {
      v22 = HMValidateHandleNoSecure(a3, 19);
      if ( !v22 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
      v29[1] = *(_QWORD *)(v22 + 480);
      v29[0] = v9 + 15;
      HMAssignmentLock((__int64)v29);
      v24 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v31,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v25 = (*(_DWORD *)v24)++;
      if ( v25 == -1 )
      {
        *(_DWORD *)v24 = 1;
        ApiSetResetLastSeenFrameId();
      }
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v31);
      *((_DWORD *)a2 + 10) = v25;
      v8 = v9;
    }
    else
    {
LABEL_15:
      QuadPart = (struct CPointerInfoNode *)v9[13].QuadPart;
      if ( QuadPart )
      {
        if ( QuadPart == *((struct CPointerInfoNode **)a2 + 13) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, QuadPart, v13);
          QuadPart = (struct CPointerInfoNode *)v9[13].QuadPart;
        }
        CTouchProcessor::FreePointerInfoList(v12, QuadPart, v9[6].LowPart);
      }
      v27 = (struct CPointerQFrame *)v9[14].QuadPart;
      if ( v27 )
      {
        if ( v27 == *((struct CPointerQFrame **)a2 + 14) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v27, v13);
          v27 = (struct CPointerQFrame *)v9[14].QuadPart;
        }
        CTouchProcessor::FreePointerQFrameList(v12, v27, v9[6].LowPart);
      }
      Win32FreePool((__int64)v9);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v30);
  return v8;
}
