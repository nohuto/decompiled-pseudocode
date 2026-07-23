/*
 * XREFs of SepSetSingletonEntry @ 0x140300810
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x140300520 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9C50 (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // esi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  _DWORD *v9; // rcx
  KIRQL v10; // di
  _DWORD *PoolWithTag; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return v5;
  v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
  v9 = (_DWORD *)*((_QWORD *)v7 + 2);
  v10 = v8;
  if ( !v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    *((_QWORD *)v7 + 2) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741801;
      goto LABEL_7;
    }
    *PoolWithTag = 0;
    *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
    v12 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
    v12[1] = v12;
    *v12 = v12;
    v13 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
    v13[1] = v13;
    *v13 = v13;
    v9 = (_DWORD *)*((_QWORD *)v7 + 2);
  }
  v5 = AuthzBasepSetSecurityAttributesToken(v9, a2, a3);
  *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  return v5;
}
