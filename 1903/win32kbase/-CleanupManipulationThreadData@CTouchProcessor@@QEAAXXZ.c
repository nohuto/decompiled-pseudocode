/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A4D40
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01674CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C016CA48 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0171290 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01756AC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  CInpLockGuard *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  struct CPointerInputFrame *v7; // r13
  void *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r14
  int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rdx
  CPointerInfoNode *v16; // rcx
  __int64 v17; // r8
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  __int64 v19; // r8
  bool v20; // r13
  unsigned int *v21; // r9
  __int64 v22; // rcx
  __int64 i; // rsi
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // rax
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+3Ch] [rbp-CCh]
  struct CPointerInputFrame *v31; // [rsp+40h] [rbp-C8h]
  int v32; // [rsp+40h] [rbp-C8h]
  unsigned int *v33; // [rsp+48h] [rbp-C0h]
  CInpLockGuard *v34; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v35[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[3]; // [rsp+70h] [rbp-98h] BYREF
  CInpLockGuard *v37[3]; // [rsp+88h] [rbp-80h] BYREF
  CInpLockGuard *v38; // [rsp+A0h] [rbp-68h] BYREF
  int v39; // [rsp+A8h] [rbp-60h]
  _BYTE v40[128]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v41[128]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v42[16]; // [rsp+1B8h] [rbp+B0h] BYREF

  v29 = 0;
  v1 = (CTouchProcessor *)((char *)this + 48);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v38,
    (CTouchProcessor *)((char *)this + 48));
  v6 = *((_QWORD *)this + 14);
  while ( (CTouchProcessor *)v6 != (CTouchProcessor *)((char *)this + 104) )
  {
    v7 = (struct CPointerInputFrame *)(v6 - 8);
    v31 = (struct CPointerInputFrame *)(v6 - 8);
    if ( v6 == 8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 36));
    v30 = 0;
    v33 = (unsigned int *)Win32AllocPoolZInit(4LL * *(unsigned int *)(v6 + 40), 1851878741LL);
    v8 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v6 + 40), 1851878741LL);
    v10 = *(unsigned int *)(v6 + 40);
    v11 = 0LL;
    v12 = (__int64)v8;
    if ( (_DWORD)v10 )
    {
      v13 = v29;
      do
      {
        v14 = *(_QWORD *)(v6 + 120) + 496LL * (unsigned int)v11;
        memset(v40, 0, 121);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v14)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v16)
          && (*(_DWORD *)(v14 + 4) & 0x200) == 0 )
        {
          v20 = 1;
          if ( v33 )
          {
            if ( v12 )
            {
              PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v41, v14, v7);
              CInputDest::CInputDest((CInputDest *)v42, PrevMTNodeTarget);
              v13 |= 1u;
              if ( *(_DWORD *)CInputDest::operator=((__int64)v40, v42, v19) )
                v20 = 0;
            }
          }
          if ( (v13 & 1) != 0 )
          {
            v13 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v42, v15, v17);
          }
          if ( v20 )
          {
            v7 = (struct CPointerInputFrame *)(v6 - 8);
            if ( (*(_DWORD *)(v14 + 188) & 0x40000) != 0 )
              CTouchProcessor::ProcessRoutedAwayList(
                this,
                *(_WORD *)(v14 + 180),
                1,
                v31,
                v11,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt(this, v31, v11);
          }
          else
          {
            ++v30;
            v7 = (struct CPointerInputFrame *)(v6 - 8);
            *(_QWORD *)(v14 + 200) = CInputDest::GetWindowHandle((CInputDest *)v40);
            *(_DWORD *)(v12 + 4 * v11) = 1;
          }
        }
        CInputDest::SetEmpty((CInputDest *)v40, v15, v17);
        v10 = *(unsigned int *)(v6 + 40);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < (unsigned int)v10 );
      v29 = v13;
      v1 = (CTouchProcessor *)((char *)this + 48);
    }
    v21 = v33;
    v22 = 0LL;
    v32 = 0;
    if ( v33 )
    {
      if ( v12 )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v10; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(v12 + 4 * i) )
          {
            v24 = 496LL * (unsigned int)i;
            v25 = 0LL;
            v26 = (unsigned int)i;
            v27 = *(_QWORD *)(v24 + *(_QWORD *)(v6 + 120) + 200);
            if ( (unsigned int)i >= (unsigned int)v10 )
              goto LABEL_37;
            do
            {
              v10 = (unsigned int)v26;
              if ( *(_DWORD *)(v12 + 4LL * (unsigned int)v26) )
              {
                v28 = *(_QWORD *)(v6 + 120) + 496LL * (unsigned int)v26;
                if ( *(_QWORD *)(v28 + 200) == v27 )
                {
                  v24 = *(unsigned __int16 *)(v28 + 180);
                  v21[v25] = v24;
                  v25 = (unsigned int)(v25 + 1);
                  *(_DWORD *)(v12 + 4LL * (unsigned int)v26) = 0;
                }
              }
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < *(_DWORD *)(v6 + 40) );
            if ( !(_DWORD)v25 )
            {
LABEL_37:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v10, v26);
              v21 = v33;
            }
            memset(v37, 0, sizeof(v37));
            memset(v36, 0, sizeof(v36));
            memset(v35, 0, sizeof(v35));
            PushW32ThreadLock(v21, v37, Win32FreePool);
            PushW32ThreadLock(v12, v36, Win32FreePool);
            PushW32ThreadLock(v7, v35, CTouchProcessor::DereferencePointerInputFrame);
            v34 = v1;
            CInpLockGuard::UnLock(v1);
            CTouchProcessor::SetManipulationInputTarget(this, *(_DWORD *)(v6 + 32), v25, v33, 0LL);
            CInpLockGuard::LockExclusive(v1, (struct CLockListEntryStack *)&v34);
            PopW32ThreadLock(v35);
            PopW32ThreadLock(v36);
            PopW32ThreadLock(v37);
            v21 = v33;
            v22 = (unsigned int)(v25 + v32);
            v32 += v25;
          }
          v10 = *(unsigned int *)(v6 + 40);
        }
        if ( (_DWORD)v22 != v30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v10, v9);
      }
      Win32FreePool((__int64)v33);
    }
    if ( v12 )
      Win32FreePool(v12);
    v6 = *(_QWORD *)(v6 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v7);
  }
  if ( !v39 )
    CInpLockGuard::UnLock(v38);
}
