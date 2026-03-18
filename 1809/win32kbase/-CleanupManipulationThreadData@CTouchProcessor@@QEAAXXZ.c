/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0134CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD3CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4F8 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C013DEA8 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  int v2; // r13d
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int *v6; // r12
  void *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdi
  CPointerInfoNode *v13; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  bool v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // [rsp+38h] [rbp-D0h]
  int v24; // [rsp+3Ch] [rbp-CCh]
  unsigned int *v25; // [rsp+40h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C8h]
  struct CPointerInputFrame *v27; // [rsp+48h] [rbp-C0h]
  _BYTE v28[24]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v29[24]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v30[24]; // [rsp+80h] [rbp-88h] BYREF
  CInpLockGuard *v31[6]; // [rsp+98h] [rbp-70h] BYREF
  CInpLockGuard *v32[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v33[192]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v34[176]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v35[24]; // [rsp+278h] [rbp+170h] BYREF

  v2 = 0;
  v23 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v32,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  v5 = *((_QWORD *)this + 10);
  while ( (CTouchProcessor *)v5 != (CTouchProcessor *)((char *)this + 72) )
  {
    v27 = (struct CPointerInputFrame *)(v5 - 8);
    CTouchProcessor::ReferenceFrameInt(v3, v5 - 8, v4);
    v24 = 0;
    v6 = (unsigned int *)Win32AllocPoolZInit(4LL * *(unsigned int *)(v5 + 40), 0x6E616D55u);
    v25 = v6;
    v7 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v5 + 40), 0x6E616D55u);
    v9 = *(unsigned int *)(v5 + 40);
    v10 = 0LL;
    v11 = (__int64)v7;
    if ( (_DWORD)v9 )
    {
      do
      {
        v12 = *(_QWORD *)(v5 + 96) + 576 * v10;
        memset(v33, 0, 177);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v13)
          && (*(_DWORD *)(v12 + 4) & 0x200) == 0 )
        {
          v15 = 1;
          if ( v6 )
          {
            if ( v11 )
            {
              PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v34, v12, v27);
              CInputDest::CInputDest((CInputDest *)v35, PrevMTNodeTarget);
              v2 |= 1u;
              if ( *(_DWORD *)CInputDest::operator=((__int64)v33, v35) )
                v15 = 0;
            }
          }
          if ( (v2 & 1) != 0 )
          {
            v2 &= ~1u;
            CInputDest::~CInputDest((CInputDest *)v35);
          }
          if ( v15 )
          {
            if ( (*(_DWORD *)(v12 + 244) & 0x40000) != 0 )
              CTouchProcessor::ProcessLostCaptureList(
                this,
                *(_WORD *)(v12 + 236),
                1,
                v27,
                v10,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)v27, (unsigned int)v10);
          }
          else
          {
            ++v24;
            *(_QWORD *)(v12 + 256) = CInputDest::GetWindowHandle((CInputDest *)v33);
            *(_DWORD *)(v11 + 4 * v10) = 1;
          }
          v6 = v25;
        }
        CInputDest::~CInputDest((CInputDest *)v33);
        v9 = *(unsigned int *)(v5 + 40);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < (unsigned int)v9 );
      v23 = v2;
    }
    v16 = 0LL;
    v26 = 0;
    if ( v6 )
    {
      if ( v11 )
      {
        v17 = 0LL;
        if ( (_DWORD)v9 )
        {
          do
          {
            if ( *(_DWORD *)(v11 + 4 * v17) )
            {
              v18 = 576 * v17;
              v19 = 0LL;
              v20 = (unsigned int)v17;
              v21 = *(_QWORD *)(576 * v17 + *(_QWORD *)(v5 + 96) + 256);
              if ( (unsigned int)v17 >= (unsigned int)v9 )
                goto LABEL_31;
              do
              {
                v9 = (unsigned int)v20;
                if ( *(_DWORD *)(v11 + 4LL * (unsigned int)v20) )
                {
                  v22 = *(_QWORD *)(v5 + 96) + 576LL * (unsigned int)v20;
                  if ( *(_QWORD *)(v22 + 256) == v21 )
                  {
                    v18 = *(unsigned __int16 *)(v22 + 236);
                    v6[v19] = v18;
                    v19 = (unsigned int)(v19 + 1);
                    *(_DWORD *)(v11 + 4LL * (unsigned int)v20) = 0;
                  }
                }
                v20 = (unsigned int)(v20 + 1);
              }
              while ( (unsigned int)v20 < *(_DWORD *)(v5 + 40) );
              if ( !(_DWORD)v19 )
LABEL_31:
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v9, v20);
              PushW32ThreadLock(v6, v30, Win32FreePool);
              PushW32ThreadLock(v11, v29, Win32FreePool);
              PushW32ThreadLock(v27, v28, CTouchProcessor::DereferencePointerInputFrame);
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v31,
                (CTouchProcessor *)((char *)this + 56),
                0LL);
              CTouchProcessor::SetManipulationInputTarget(this, *(_DWORD *)(v5 + 32), v19, v6, 0LL);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v31);
              PopW32ThreadLock(v28);
              PopW32ThreadLock(v29);
              PopW32ThreadLock(v30);
              v16 = (unsigned int)(v19 + v26);
              v26 += v19;
            }
            v9 = *(unsigned int *)(v5 + 40);
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < (unsigned int)v9 );
          v2 = v23;
        }
        if ( (_DWORD)v16 != v24 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v9, v8);
      }
      Win32FreePool((__int64)v6);
    }
    if ( v11 )
      Win32FreePool(v11);
    v5 = *(_QWORD *)(v5 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, (__int64)v27, v8);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v32);
}
