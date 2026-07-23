/*
 * XREFs of EtwpStackRundown @ 0x140333E28
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FAD1C (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpDereferenceStackEntry @ 0x140333DB8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x140333F90 (EtwpTraceCachedStack.c)
 */

void __fastcall EtwpStackRundown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *j; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY **v12; // r14
  _SLIST_ENTRY *v13; // rbx
  _QWORD v14[4]; // [rsp+20h] [rbp-68h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
  {
    v7 = (volatile signed __int32 *)(a1 + 8 * (i + 2 * (i + 2)));
    if ( *(volatile signed __int32 **)v7 != v7 )
    {
      v8 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KxAcquireSpinLock((PKSPIN_LOCK)v7 + 2);
      for ( j = *(volatile signed __int32 **)v7; j != v7; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        v14[v8] = j;
        v8 = (unsigned int)(v8 + 1);
      }
      KxReleaseSpinLock((PKSPIN_LOCK)v7 + 2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( (_DWORD)v8 )
      {
        v12 = (_SLIST_ENTRY **)v14;
        do
        {
          v13 = *v12;
          EtwpTraceCachedStack(a2, a3, 6180LL, *v12);
          EtwpDereferenceStackEntry(v13, (unsigned int **)a1);
          ++v12;
          --v8;
        }
        while ( v8 );
      }
    }
  }
}
