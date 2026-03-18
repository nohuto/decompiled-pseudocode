/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0162218
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0178248 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C015E14C (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C015E4EC (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C015ED18 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C015ED6C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01624B8 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0165190 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0165364 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C019E288 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  LARGE_INTEGER *v6; // rax
  __int64 v7; // r8
  LARGE_INTEGER *v8; // rbx
  LARGE_INTEGER *v9; // rdi
  struct CPointerInfoNode *v10; // rax
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  LARGE_INTEGER v13; // r8
  unsigned int v14; // ebp
  __int64 v15; // rdx
  struct CPointerQFrame *v16; // rax
  unsigned int i; // ebp
  struct CPointerRawData *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r8
  struct A0xad387374::CFrameIdGenerator *v23; // r14
  int v24; // ebp
  struct CPointerInfoNode *QuadPart; // rdx
  struct CPointerQFrame *v26; // rdx
  CInpLockGuard *v28[2]; // [rsp+20h] [rbp-38h] BYREF
  CInpLockGuard *v29; // [rsp+60h] [rbp+8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v29, (struct CInpLockGuard *)(this + 6));
  v6 = (LARGE_INTEGER *)Win32AllocPoolZInit(0x98uLL, 1718645589LL);
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
    *(_OWORD *)&v6[16].LowPart = *((_OWORD *)a2 + 8);
    v6[18] = *(LARGE_INTEGER *)((char *)a2 + 144);
    v6[2].QuadPart = (LONGLONG)&v6[1];
    v6[1].QuadPart = (LONGLONG)&v6[1];
    v6[4].QuadPart = (LONGLONG)&v6[3];
    v6[3].QuadPart = (LONGLONG)&v6[3];
    v6[18].QuadPart = 0LL;
    v6[16].QuadPart = 0LL;
    v6[17].QuadPart = 0LL;
    v6[15].QuadPart = 0LL;
    v10 = CTouchProcessor::AllocPointerInfoNodeList(this, *((unsigned int *)a2 + 12), v7);
    v9[16].QuadPart = (LONGLONG)v10;
    if ( !v10 )
      goto LABEL_17;
    v9[9] = KeQueryPerformanceCounter(0LL);
    v14 = 0;
    v15 = *((unsigned int *)a2 + 12);
    if ( (_DWORD)v15 )
    {
      do
      {
        CPointerInfoNode::operator=(v9[16].QuadPart + 496LL * v14, 496LL * v14 + *((_QWORD *)a2 + 16));
        v15 = *((unsigned int *)a2 + 12);
        ++v14;
      }
      while ( v14 < (unsigned int)v15 );
    }
    v16 = CTouchProcessor::AllocPointerQFrameList(this, v15, v13.QuadPart);
    v9[17].QuadPart = (LONGLONG)v16;
    if ( !v16 )
      goto LABEL_17;
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
      CPointerQFrame::operator=(v9[17].QuadPart + 168LL * i, 168LL * i + *((_QWORD *)a2 + 17), v12);
    if ( !*((_QWORD *)a2 + 15)
      || (v18 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (v9[15].QuadPart = (LONGLONG)v18) != 0) )
    {
      v21 = HMValidateHandleNoSecure(a3, 19);
      if ( !v21 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
      v28[1] = *(CInpLockGuard **)(v21 + 480);
      v28[0] = (CInpLockGuard *)&v9[18];
      HMAssignmentLock((__int64 **)v28);
      v23 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v28,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
      v24 = (*(_DWORD *)v23)++;
      if ( v24 == -1 )
      {
        *(_DWORD *)v23 = 1;
        ApiSetResetLastSeenFrameId();
      }
      if ( !LODWORD(v28[1]) )
        CInpLockGuard::UnLock(v28[0]);
      *((_DWORD *)a2 + 10) = v24;
      v8 = v9;
    }
    else
    {
LABEL_17:
      QuadPart = (struct CPointerInfoNode *)v9[16].QuadPart;
      if ( QuadPart )
      {
        if ( QuadPart == *((struct CPointerInfoNode **)a2 + 16) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, QuadPart, v12);
          QuadPart = (struct CPointerInfoNode *)v9[16].QuadPart;
        }
        CTouchProcessor::FreePointerInfoList(v11, QuadPart, v9[6].LowPart);
      }
      v26 = (struct CPointerQFrame *)v9[17].QuadPart;
      if ( v26 )
      {
        if ( v26 == *((struct CPointerQFrame **)a2 + 17) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v26, v12);
          v26 = (struct CPointerQFrame *)v9[17].QuadPart;
        }
        CTouchProcessor::FreePointerQFrameList(v11, v26, v9[6].LowPart);
      }
      Win32FreePool((__int64)v9);
    }
  }
  CInpLockGuard::UnLock(v29);
  return v8;
}
