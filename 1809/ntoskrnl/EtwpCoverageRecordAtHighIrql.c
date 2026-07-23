/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x14030F24C
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1406B5220 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageValidateCP @ 0x14012A77C (EtwpCoverageValidateCP.c)
 *     RtlStringCchCopyA @ 0x14012A8C4 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(__int128 *a1)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v6; // [rsp+20h] [rbp-78h] BYREF
  __int128 v7; // [rsp+28h] [rbp-70h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  result = EtwpCoverageValidateCP(a1, &v6);
  if ( (_DWORD)result )
  {
    v3 = *((_QWORD *)a1 + 2);
    v7 = *a1;
    v8 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v7);
    HIDWORD(v7) = 0;
    *(_QWORD *)&v7 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    EtwTelemetryCoverageReport(&v7);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    result = HIDWORD(v7);
    *((_DWORD *)a1 + 3) = HIDWORD(v7);
  }
  return result;
}
