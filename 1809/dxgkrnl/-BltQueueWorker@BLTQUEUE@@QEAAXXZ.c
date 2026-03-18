/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0158820
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C01587E0 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C0134140 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0134254 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C020B404 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0246024 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C024610C (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C0247A2C (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C0247C08 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0247C4C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0248A2C (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0248BF8 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0248EDC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  char v2; // di
  struct _KEVENT *v3; // rax
  __int64 v4; // rax
  int v5; // edi
  NTSTATUS v6; // eax
  int v7; // edx
  LONGLONG v8; // rsi
  LARGE_INTEGER v9; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // eax
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  __int64 WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v20[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+70h] [rbp-98h]
  struct _KEVENT v22; // [rsp+78h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp-58h]
  struct _KEVENT *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C8h] [rbp-40h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v22, SynchronizationEvent, 0);
  *((_QWORD *)this + 56) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 328), 0, 0);
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + 102, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    v2 = v17;
    Object = (char *)this + 352;
    if ( (v17 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0);
    if ( (*((_DWORD *)this + 212) & 2) != 0 )
    {
      if ( !*((_BYTE *)this + 316) )
      {
        p_Event = (struct _KEVENT *)*((_QWORD *)this + 58);
        v26 = &v22;
        if ( *((_BYTE *)this + 317) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)this + 31, 0);
          DXGPUSHLOCK::AcquireExclusive(v20[1]);
          v21 = 2;
          v8 = 0LL;
          v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v10 = *((_QWORD *)this + 37);
          if ( v10 > 0 )
          {
            v11 = *((_QWORD *)this + 36);
            if ( v11 > 0 && v9.QuadPart > v11 )
              v8 = 10000000 * ((v9.QuadPart - v11) % v10 - v10) / PerformanceFrequency.QuadPart;
          }
          ExSetTimer(*((_QWORD *)this + 58), v8, 0LL, 0LL, WaitMode, *(_QWORD *)Alertable);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
        }
        goto LABEL_9;
      }
      p_Event = (struct _KEVENT *)*((_QWORD *)this + 27);
      v3 = (struct _KEVENT *)((char *)this + 472);
    }
    else
    {
      p_Event = &Event;
      v3 = &v22;
    }
    v26 = v3;
LABEL_9:
    v4 = v27;
    v5 = v2 & 1;
    if ( v5 )
      v4 = v18;
    v27 = v4;
    v6 = KeWaitForMultipleObjects(v5 + 3, &Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v17 = 0LL;
    v18 = 0LL;
    if ( v6 )
    {
      switch ( v6 )
      {
        case 1:
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            v13 = 1;
            goto LABEL_44;
          }
          BLTQUEUE::ProcessBltQueue((__int64)this, 1, (__int64)&v17);
          if ( !*((_DWORD *)this + 59) && (v17 & 3) == 0 && ++*((_DWORD *)this + 60) > 0xAu )
            BLTQUEUE::StopVSync(this, 0);
          break;
        case 2:
          v13 = 0;
LABEL_44:
          BLTQUEUE::ProcessVSyncTdrWorker(this, v13);
          break;
        case 3:
          v7 = 2;
LABEL_20:
          BLTQUEUE::ProcessBltQueue((__int64)this, v7, (__int64)&v17);
          break;
        case 257:
          v14 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v14 + 24) = this;
          WdLogEvent5_WdError(v14);
          break;
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
        v12 = *((_DWORD *)this + 59) + 1;
        *((_DWORD *)this + 60) = 0;
        *((_DWORD *)this + 59) = v12;
        BLTQUEUE::StartVSync(this, 0);
        *((_BYTE *)this + 403) = 0;
      }
      if ( !*((_BYTE *)this + 407) )
      {
        v7 = 0;
        goto LABEL_20;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *((_QWORD *)this + 40) = 0LL;
      *((_BYTE *)this + 407) = 0;
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
}
