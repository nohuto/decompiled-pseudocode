/*
 * XREFs of PspApplyWorkingSetLimits @ 0x1408C7024
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x1406EE7C0 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1400EAB6C (MmEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSize @ 0x14018A1B0 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x1403073C4 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rax
  PVOID *v5; // rbx
  PVOID *result; // rax
  __int64 v7; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  p_P = &P;
  P = &P;
  while ( 1 )
  {
    v2 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || (v3 = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(*(_QWORD *)PspWorkingSetChangeHead + 8LL) != PspWorkingSetChangeHead)
      || (PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(v3 + 8) = &PspWorkingSetChangeHead,
          v4 = p_P,
          *p_P != &P) )
    {
LABEL_12:
      __fastfail(3u);
    }
    *(_QWORD *)(v2 + 8) = p_P;
    *(_QWORD *)v2 = &P;
    *v4 = v2;
    p_P = (PVOID *)v2;
    KeStackAttachProcess(*(PRKPROCESS *)(v2 + 16), &ApcState);
    MmAdjustWorkingSetSize(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 32), 0, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v2 + 16), 1);
    KeUnstackDetachProcess(&ApcState);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFFFFEFF);
  PspUnlockWorkingSetChangeExclusiveUnsafe();
  while ( 1 )
  {
    v5 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_12;
    v7 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_12;
    P = *(PVOID *)P;
    *(_QWORD *)(v7 + 8) = &P;
    ObfDereferenceObjectWithTag(v5[2], 0x624A7350u);
    ExFreePoolWithTag(v5, 0x72437350u);
  }
}
