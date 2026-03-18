/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C00189BC
 * Callers:
 *     UserJobCallout @ 0x1C0018720 (UserJobCallout.c)
 *     RemoveProcessFromJob @ 0x1C00188A0 (RemoveProcessFromJob.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0236FC0 (NtUserUserHandleGrantAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_JOB::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
