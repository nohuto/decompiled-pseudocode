/*
 * XREFs of VmpFlushTb @ 0x14030C6BC
 * Callers:
 *     VmFlushTb @ 0x14030B8E0 (VmFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFlushTbVaRange @ 0x14030C834 (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x14030D39C (VmpProcessContextLockExclusive.c)
 */

__int64 __fastcall VmpFlushTb(PEX_SPIN_LOCK SpinLock, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF

  v3 = -1LL;
  memset(v12, 0, sizeof(v12));
  v4 = a3;
  v13 = -1LL;
  if ( a2 )
  {
    result = a2;
    v7 = (unsigned __int64)&a3[a2];
    if ( (unsigned __int64)a3 >= v7 )
      return result;
    do
    {
      v8 = *v4;
      result = 0x7FFFFFFEFFFFLL;
      if ( *v4 <= 0x7FFFFFFEFFFFLL )
      {
        v9 = (*v4 & 0x3FF) + 1;
        v10 = (v8 >> 10) & 3;
        if ( ((v8 >> 10) & 3) != 0 )
        {
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
        if ( v3 == -1 )
          v13 = VmpProcessContextLockExclusive(SpinLock);
        result = VmpFlushTbVaRange(SpinLock, (__int64)v12, (__int64)&v13);
        v3 = v13;
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v7 );
  }
  else
  {
    v13 = VmpProcessContextLockExclusive(SpinLock);
    result = VmpFlushTbVaRange(SpinLock, (__int64)v12, (__int64)&v13);
    v3 = v13;
  }
  if ( v3 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      LOBYTE(v3) = v13;
    }
    result = (unsigned __int8)v3;
    __writecr8((unsigned __int8)v3);
  }
  return result;
}
