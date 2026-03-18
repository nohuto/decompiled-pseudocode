/*
 * XREFs of VmpQueryAccessedState @ 0x14032AA2C
 * Callers:
 *     MiQueryEPTAccessedState @ 0x1402C88C0 (MiQueryEPTAccessedState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x140329464 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpProcessAccessedBatch @ 0x14032A6D0 (VmpProcessAccessedBatch.c)
 *     VmpProcessContextLockShared @ 0x14032A828 (VmpProcessContextLockShared.c)
 */

unsigned __int64 __fastcall VmpQueryAccessedState(PEX_SPIN_LOCK SpinLock, unsigned __int64 *a2, int a3, int a4)
{
  int v4; // r12d
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int8 v10; // r15
  unsigned __int64 *v11; // r12
  __int64 v12; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx
  unsigned __int64 result; // rax
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  _QWORD v24[32]; // [rsp+70h] [rbp-90h] BYREF

  v17 = 0LL;
  v4 = a4;
  v18 = 0LL;
  v5 = a2;
  v19 = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v9 = (unsigned __int64)&a2[a3];
  v10 = VmpProcessContextLockShared(SpinLock);
  if ( (unsigned __int64)v5 < v9 )
  {
    while ( 1 )
    {
      v22 = *v5 >> 12;
      v23 = 1LL;
      v11 = v7;
      VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v22, 0xFFFFFFFFFFFFFFFFuLL, &v19, &v17);
      if ( v18 )
      {
        v7 = v5;
        v24[v8] = v17;
        v8 = (unsigned int)(v8 + 1);
        if ( (_DWORD)v8 != 1 )
          v7 = v11;
        if ( v23 )
        {
          --v5;
LABEL_10:
          v12 = *((_QWORD *)SpinLock + 5);
          ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v10);
          VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v24, v8, v7, a4);
          v8 = 0LL;
          v10 = VmpProcessContextLockShared(SpinLock);
          if ( v12 != *((_QWORD *)SpinLock + 5) )
          {
            v19 = 0LL;
            v20 = 0LL;
            v21 = 0LL;
          }
          goto LABEL_17;
        }
        if ( (_DWORD)v8 == 32 )
          goto LABEL_10;
      }
      else
      {
        *v5 |= 6uLL;
        if ( (_DWORD)v8 )
          goto LABEL_10;
      }
LABEL_17:
      if ( (unsigned __int64)++v5 >= v9 )
      {
        v4 = a4;
        break;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  result = v10;
  __writecr8(v10);
  if ( (_DWORD)v8 )
    return VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v24, v8, &v5[-(unsigned int)v8], v4);
  return result;
}
