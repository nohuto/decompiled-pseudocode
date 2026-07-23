/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x1402E6304
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6BF0 (PpmEventTracePreVetoAccounting.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edx
  __int16 v4; // ax
  __int16 v5; // ax
  KIRQL v6; // al
  unsigned int v7; // edx
  KIRQL v8; // di
  __int64 v9; // rax
  _QWORD **v10; // r14
  _QWORD *v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  int i; // [rsp+40h] [rbp-29h] BYREF
  __int16 v14; // [rsp+44h] [rbp-25h] BYREF
  __int16 v15; // [rsp+48h] [rbp-21h] BYREF
  char v16; // [rsp+4Ah] [rbp-1Fh]
  unsigned int v17; // [rsp+4Bh] [rbp-1Eh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h]
  int v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+6Ch] [rbp+3h]
  int *p_i; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  _QWORD *v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]
  char *v28; // [rsp+90h] [rbp+27h]
  int v29; // [rsp+98h] [rbp+2Fh]
  int v30; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 23808);
  if ( v1 )
  {
    v3 = 1;
    for ( i = 1; v3 < *(_DWORD *)(v1 + 32); i = v3 )
    {
      v4 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v15 = v4;
      v16 = *(_BYTE *)(a1 + 209);
      UserData.Ptr = (ULONGLONG)&v15;
      v17 = v3;
      UserData.Size = 7;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v3 = i + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v21 = 0;
      v14 = v5;
      UserData.Ptr = (ULONGLONG)&v14;
      v19 = a1 + 209;
      UserData.Size = 2;
      v20 = 1;
      v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v7 = 0;
      v8 = v6;
      i = 0;
      if ( *(_DWORD *)(v1 + 32) )
      {
        v9 = 0LL;
        do
        {
          v24 = 0;
          p_i = &i;
          v23 = 4;
          v10 = (_QWORD **)(248 * v9 + v1 + 1024);
          v11 = *v10;
          if ( *v10 != v10 )
          {
            do
            {
              v27 = 0;
              v30 = 0;
              v25 = v11 + 2;
              v26 = 4;
              v28 = (char *)v11 + 20;
              v29 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              v11 = (_QWORD *)*v11;
            }
            while ( v11 != v10 );
            v7 = i;
          }
          i = ++v7;
          v9 = v7;
        }
        while ( v7 < *(_DWORD *)(v1 + 32) );
      }
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
    }
  }
}
