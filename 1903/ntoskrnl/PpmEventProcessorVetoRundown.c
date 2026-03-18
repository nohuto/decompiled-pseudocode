/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x140302D98
 * Callers:
 *     PpmEventTraceControlCallback @ 0x14078A980 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmEventTracePreVetoAccounting @ 0x140303690 (PpmEventTracePreVetoAccounting.c)
 */

BOOLEAN __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  BOOLEAN result; // al
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int16 v6; // ax
  KIRQL v7; // al
  unsigned int v8; // edx
  KIRQL v9; // di
  __int64 v10; // rax
  _QWORD **v11; // r14
  _QWORD *v12; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  int i; // [rsp+40h] [rbp-29h] BYREF
  __int16 v15; // [rsp+44h] [rbp-25h] BYREF
  _DWORD v16[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  int *p_i; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  _QWORD *v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]
  char *v27; // [rsp+90h] [rbp+27h]
  int v28; // [rsp+98h] [rbp+2Fh]
  int v29; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 23808);
  result = 0;
  memset(v16, 0, 7);
  if ( v1 )
  {
    v4 = 1;
    for ( i = 1; v4 < *(_DWORD *)(v1 + 32); i = v4 )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      LOWORD(v16[0]) = v5;
      BYTE2(v16[0]) = *(_BYTE *)(a1 + 209);
      *(_DWORD *)((char *)v16 + 3) = v4;
      UserData.Ptr = (ULONGLONG)v16;
      UserData.Size = 7;
      result = PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v4 = i + 1;
    }
    if ( PpmEtwRegistered )
    {
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN);
      if ( result )
      {
        v6 = *(unsigned __int8 *)(a1 + 208);
        UserData.Reserved = 0;
        v20 = 0;
        v15 = v6;
        UserData.Ptr = (ULONGLONG)&v15;
        v18 = a1 + 209;
        UserData.Size = 2;
        v19 = 1;
        v7 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        v8 = 0;
        v9 = v7;
        i = 0;
        if ( *(_DWORD *)(v1 + 32) )
        {
          v10 = 0LL;
          do
          {
            v23 = 0;
            p_i = &i;
            v22 = 4;
            v11 = (_QWORD **)(248 * v10 + v1 + 1024);
            v12 = *v11;
            if ( *v11 != v11 )
            {
              do
              {
                v26 = 0;
                v29 = 0;
                v24 = v12 + 2;
                v25 = 4;
                v27 = (char *)v12 + 20;
                v28 = 4;
                EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
                v12 = (_QWORD *)*v12;
              }
              while ( v12 != v11 );
              v8 = i;
            }
            i = ++v8;
            v10 = v8;
          }
          while ( v8 < *(_DWORD *)(v1 + 32) );
        }
        KxReleaseSpinLock(&PpmIdleVetoLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        result = v9;
        __writecr8(v9);
      }
    }
  }
  return result;
}
