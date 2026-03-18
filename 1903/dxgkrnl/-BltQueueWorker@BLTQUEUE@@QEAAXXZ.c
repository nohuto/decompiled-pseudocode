/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01583D0
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C0158390 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01421C4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0142380 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C01566E8 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0156A4C (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0156CAC (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C023E024 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C027B898 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C027B980 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C027D2CC (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C027D4AC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C027D4F0 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  char v2; // r15
  struct _KEVENT *v3; // rax
  __int64 v4; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // r8
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r8
  _BYTE *v10; // rdx
  __int64 v11; // rdx
  struct _KEVENT *p_Event; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  unsigned __int64 j; // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  LONGLONG v21; // r14
  LARGE_INTEGER v22; // rax
  __int64 v23; // r10
  __int64 v24; // r9
  unsigned __int64 i; // rsi
  __int64 v26; // r10
  LONGLONG v27; // rdx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  PVOID v31; // rsi
  __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  struct DXGADAPTER *v36; // r14
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT *v46; // [rsp+50h] [rbp-B8h]
  __int64 v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  DXGPUSHLOCK *v52; // [rsp+80h] [rbp-88h]
  int v53; // [rsp+88h] [rbp-80h]
  char v54[8]; // [rsp+90h] [rbp-78h] BYREF
  DXGPUSHLOCK *v55; // [rsp+98h] [rbp-70h]
  int v56; // [rsp+A0h] [rbp-68h]
  char v57[8]; // [rsp+A8h] [rbp-60h] BYREF
  DXGPUSHLOCK *v58; // [rsp+B0h] [rbp-58h]
  int v59; // [rsp+B8h] [rbp-50h]
  char v60[8]; // [rsp+C0h] [rbp-48h] BYREF
  DXGPUSHLOCK *v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  struct _KEVENT v63; // [rsp+D8h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+F0h] [rbp-18h] BYREF
  char v65[8]; // [rsp+108h] [rbp+0h] BYREF
  char v66[64]; // [rsp+110h] [rbp+8h] BYREF
  char v67[72]; // [rsp+150h] [rbp+48h] BYREF
  PVOID Object[12]; // [rsp+198h] [rbp+90h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+1F8h] [rbp+F0h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v63, SynchronizationEvent, 0);
  *((_QWORD *)this + 56) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 328), 0, 0);
  v45 = 0LL;
  v2 = 0;
  v46 = 0LL;
  while ( 1 )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + 102, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    v3 = &v63;
    Object[0] = (char *)this + 352;
    if ( (v45 & 1) != 0 )
      v3 = v46;
    Object[1] = v3;
    if ( (v45 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0);
    v4 = 2LL;
    if ( (*((_DWORD *)this + 212) & 2) != 0 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v51, (struct _KTHREAD **)this + 339, 0);
      DXGPUSHLOCK::AcquireShared(v52);
      v9 = 8LL;
      v10 = (_BYTE *)(*((_QWORD *)this + 344) + 56LL);
      v53 = 1;
      do
      {
        if ( *((_QWORD *)v10 - 1) && !*v10 && v10[1] == 1 )
        {
          Object[v4] = (PVOID)*((_QWORD *)v10 - 7);
          v4 = (unsigned int)(v4 + 1);
        }
        v10 += 64;
        --v9;
      }
      while ( v9 );
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v51);
      if ( (unsigned int)v4 > 2 )
      {
        v2 = 0;
      }
      else
      {
        v13 = (unsigned int)v4;
        v2 = 1;
        v4 = (unsigned int)(v4 + 1);
        if ( *((_BYTE *)this + 316) )
        {
          Object[v13] = (PVOID)*((_QWORD *)this + 27);
          p_Event = (struct _KEVENT *)((char *)this + 472);
        }
        else
        {
          Object[v13] = (PVOID)*((_QWORD *)this + 58);
          p_Event = &Event;
        }
        Object[v4] = p_Event;
        LODWORD(v4) = v4 + 1;
      }
      if ( (unsigned int)v4 > 0xC )
      {
        v20 = WdLogNewEntry5_WdAssertion(p_Event, v11);
        *(_QWORD *)(v20 + 24) = 1966LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( !*((_BYTE *)this + 316) && *((_BYTE *)this + 317) )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54, (struct _KTHREAD **)this + 31, 0);
        DXGPUSHLOCK::AcquireExclusive(v55);
        v56 = 2;
        DXGPUSHLOCK::AcquireShared(v52);
        v53 = 1;
        v21 = 0LL;
        PerformanceFrequency.QuadPart = 0LL;
        v22 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v23 = *((_QWORD *)this + 37);
        if ( v23 > 0 )
        {
          v24 = *((_QWORD *)this + 36);
          if ( v24 > 0 && v22.QuadPart > v24 )
            v21 = 10000000 * ((v22.QuadPart - v24) % v23 - v23) / PerformanceFrequency.QuadPart;
        }
        for ( i = 0LL; i < 0x200; i += 64LL )
        {
          v26 = *((_QWORD *)this + 344);
          if ( *(_QWORD *)(v26 + i + 48) && !*(_BYTE *)(v26 + i + 56) && *(_BYTE *)(v26 + i + 57) == 1 )
          {
            v27 = 0LL;
            if ( v21 + *(_QWORD *)(v26 + i + 32) <= 0 )
              v27 = v21 + *(_QWORD *)(v26 + i + 32);
            ExSetTimer(*(_QWORD *)(v26 + i), v27, 0LL, 0LL, WaitMode, *(_QWORD *)Alertable);
          }
        }
        ExSetTimer(*((_QWORD *)this + 58), v21, 0LL, 0LL, WaitMode, *(_QWORD *)Alertable);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v51);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v51);
    }
    v5 = KeWaitForMultipleObjects(v4, Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v47 = 0LL;
    v6 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v48 = 0LL;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v7 = 1;
      }
      else if ( v2 )
      {
        if ( v5 == 2 )
        {
          v7 = 2;
        }
        else
        {
          if ( v5 != 3 )
            goto LABEL_72;
          v7 = 3;
        }
      }
      else
      {
        if ( (unsigned int)(v5 - 2) > 8 )
        {
LABEL_72:
          v7 = (v5 != 257) + 5;
          goto LABEL_11;
        }
        v7 = 4;
        v48 = v5;
        v6 = v5;
      }
    }
    else
    {
      v7 = 0;
    }
LABEL_11:
    LODWORD(v47) = v7;
    if ( v7 )
    {
      v14 = v7 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v28 = v15 - 1;
          if ( v28 )
          {
            v29 = (unsigned int)(v28 - 1);
            if ( (_DWORD)v29 )
            {
              v30 = WdLogNewEntry5_WdError(v29, v5, v6);
              *(_QWORD *)(v30 + 24) = this;
              WdLogEvent5_WdError(v30);
            }
            else
            {
              v31 = Object[v6];
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57, (struct _KTHREAD **)this + 339, 0);
              DXGPUSHLOCK::AcquireShared(v58);
              v32 = *((_QWORD *)this + 344);
              v33 = 0LL;
              v34 = v32;
              v59 = 1;
              while ( *(PVOID *)v34 != v31 || *(_BYTE *)(v34 + 57) != 1 )
              {
                ++v33;
                v34 += 64LL;
                if ( v33 >= 8 )
                  goto LABEL_86;
              }
              v35 = v33 << 6;
              v36 = *(struct DXGADAPTER **)((v33 << 6) + v32 + 16);
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v36, 0LL);
              if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v65, 0xFFFFFFFFLL, v37) >= 0 )
              {
                v38 = *((_QWORD *)this + 344);
                v50 = (unsigned int)(*((_DWORD *)this + 676) + 1);
                if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 320) + 520LL) + 8LL)
                                                                                         + 656LL))(
                       1LL,
                       v35 + v38 + 8,
                       0LL,
                       &v50) < 0 )
                {
                  v42 = WdLogNewEntry5_WdError(v40, v39, v41);
                  *(_QWORD *)(v42 + 24) = v33;
                  WdLogEvent5_WdError(v42);
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)this + 344) + v35 + 40) = v50;
                }
              }
              *(_BYTE *)(*((_QWORD *)this + 344) + v35 + 57) = 0;
              COREACCESS::~COREACCESS((COREACCESS *)v67);
              COREACCESS::~COREACCESS((COREACCESS *)v66);
LABEL_86:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
            }
          }
          else
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
          }
        }
        else
        {
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
          }
          else
          {
            BLTQUEUE::ProcessBltQueue((__int64)this, 1, (__int64)&v45);
            if ( !*((_DWORD *)this + 59) && (v45 & 3) == 0 && ++*((_DWORD *)this + 60) > 0xAu )
              BLTQUEUE::StopVSync(this, 0);
          }
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60, (struct _KTHREAD **)this + 339, 0);
          DXGPUSHLOCK::AcquireShared(v61);
          v62 = 1;
          for ( j = 0LL; j < 0x200; j += 64LL )
          {
            v18 = *((_QWORD *)this + 344);
            if ( *(_QWORD *)(v18 + j + 48) )
            {
              if ( *(_BYTE *)(v18 + j + 56) == 1 )
              {
                *(_QWORD *)(v18 + j + 48) = 0LL;
                LOBYTE(v16) = 1;
                *(_BYTE *)(*((_QWORD *)this + 344) + j + 56) = 0;
                ExDeleteTimer(*(_QWORD *)(*((_QWORD *)this + 344) + j), v16, 0LL, 0LL);
              }
              else
              {
                *(_BYTE *)(v18 + j + 57) = 1;
              }
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v60);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v60);
        }
      }
      else
      {
        v8 = 2;
LABEL_20:
        BLTQUEUE::ProcessBltQueue((__int64)this, v8, (__int64)&v45);
      }
    }
    else
    {
      *((_BYTE *)this + 688) = *((_BYTE *)this + 400);
      *((_BYTE *)this + 689) = *((_BYTE *)this + 401);
      *((_BYTE *)this + 690) = *((_BYTE *)this + 402);
      *((_BYTE *)this + 691) = *((_BYTE *)this + 403);
      *((_BYTE *)this + 692) = *((_BYTE *)this + 404);
      *((_BYTE *)this + 693) = *((_BYTE *)this + 405);
      *((_BYTE *)this + 694) = *((_BYTE *)this + 406);
      *((_BYTE *)this + 695) = *((_BYTE *)this + 407);
      *((_DWORD *)this + 174) = *((_DWORD *)this + 102);
      *((_QWORD *)this + 88) = *((_QWORD *)this + 52);
      *((_QWORD *)this + 88) = *((_QWORD *)this + 52);
      *((_DWORD *)this + 178) = *((_DWORD *)this + 106);
      *((_DWORD *)this + 180) = *((_DWORD *)this + 108);
      *((LARGE_INTEGER *)this + 85) = KeQueryPerformanceCounter(0LL);
      if ( *((_BYTE *)this + 400) )
      {
        KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 52) + 40LL) + 56LL));
        *((_DWORD *)this + 212) |= 1u;
        *((_BYTE *)this + 400) = 0;
        BLTQUEUE::FinishCommand(this, 0);
      }
      else if ( *((_BYTE *)this + 401) )
      {
        BLTQUEUE::ResetWorker(this);
      }
      else if ( *((_BYTE *)this + 404) )
      {
        BLTQUEUE::ResetInternal(this);
        *((_BYTE *)this + 404) = 0;
        BLTQUEUE::FinishCommand(this, 0);
        PsTerminateSystemThread(0);
      }
      else if ( *((_BYTE *)this + 402) )
      {
        BLTQUEUE::UpdateDisplayModeInfoWorker(this);
      }
      else if ( *((_BYTE *)this + 403) )
      {
        v19 = *((_DWORD *)this + 59) + 1;
        *((_DWORD *)this + 60) = 0;
        *((_DWORD *)this + 59) = v19;
        BLTQUEUE::StartVSync(this, 0);
        *((_BYTE *)this + 403) = 0;
      }
      if ( !*((_BYTE *)this + 407) )
      {
        v8 = 0;
        goto LABEL_20;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *((_QWORD *)this + 40) = 0LL;
      *((_BYTE *)this + 407) = 0;
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
}
