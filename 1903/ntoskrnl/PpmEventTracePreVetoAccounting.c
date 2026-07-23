/*
 * XREFs of PpmEventTracePreVetoAccounting @ 0x140303690
 * Callers:
 *     PpmEventPlatformVetoRundown @ 0x140302A98 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x140302D98 (PpmEventProcessorVetoRundown.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTracePreVetoAccounting(
        PCEVENT_DESCRIPTOR EventDescriptor,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *PoolWithTag; // rdi
  KIRQL v8; // r15
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _EVENT_DATA_DESCRIPTOR v17; // xmm0
  int v18; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v21; // [rsp+60h] [rbp+7h]
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  _DWORD *v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+78h] [rbp+1Fh]
  int v26; // [rsp+7Ch] [rbp+23h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(_DWORD *)(a3 + 28);
        if ( v6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 20 * v6, 0x654D5050u);
          if ( PoolWithTag )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
            v10 = 0LL;
            v18 = 0;
            v11 = 0LL;
            v12 = v6;
            do
            {
              v13 = *(_QWORD *)(a3 + 32);
              v14 = *(_DWORD *)(v11 + v13 + 16);
              if ( v14 )
              {
                PoolWithTag[5 * v10] = v14;
                *(_QWORD *)&PoolWithTag[5 * v18 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&PoolWithTag[5 * v18 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v15 = *(_QWORD *)(v11 + v13 + 32);
                if ( v15 )
                  *(_QWORD *)&PoolWithTag[5 * v18 + 3] += InterruptTimePrecise.QuadPart - v15;
                v10 = (unsigned int)++v18;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KxReleaseSpinLock(&PpmIdleVetoLock);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v8);
            v17 = *a2;
            v23 = 0;
            v26 = 0;
            v21 = &v18;
            UserData = v17;
            v22 = 4;
            v24 = PoolWithTag;
            v25 = 20 * v18;
            EtwWriteEx(PpmEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            ExFreePoolWithTag(PoolWithTag, 0x654D5050u);
          }
        }
      }
    }
  }
}
