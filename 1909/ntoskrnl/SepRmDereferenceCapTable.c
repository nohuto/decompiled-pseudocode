/*
 * XREFs of SepRmDereferenceCapTable @ 0x14031C9C8
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepRmDereferenceCap @ 0x14031C9A8 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14031E824 (SepRmReferenceFindCap.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepRmCapUpdateWrkr @ 0x140787280 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x1408E2F04 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
