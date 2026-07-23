/*
 * XREFs of MiStoreEvictThread @ 0x14018A500
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x1400FD56C (KiInitializeTimer2.c)
 *     MiStoreEvictPageFile @ 0x140137F68 (MiStoreEvictPageFile.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r8
  int v5; // r15d
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  KIRQL v9; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx
  _QWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v16; // [rsp+C2h] [rbp-3Eh]

  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    v16 = 0;
    KiInitializeTimer2((__int64)v15, 0LL, 0LL, 8);
    v12[1] = -1LL;
    v12[0] = v4;
    KeSetTimer2((__int64)v15, -600000000LL, 600000000LL, (__int64)v12);
    Object[1] = v15;
    Object[0] = (PVOID)(v3 + 1184);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1184));
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 1152);
        v6 = 0;
        v7 = *(_DWORD *)(v3 + 7128);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v3 + 8LL * v6 + 7136);
            if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8LL * v6 + 7136));
              if ( *(_DWORD *)(v8 + 200) >= 0x100u )
                --v6;
            }
            ++v6;
          }
          while ( v6 < v7 );
        }
        v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1168));
        if ( v5 == *(_DWORD *)(v3 + 1152) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1168));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v9);
      }
      if ( v5 )
      {
        *(_DWORD *)(v3 + 1152) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1232), 0, 0);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1168));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        v11 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v11);
      }
      __writecr8(v9);
    }
  }
}
