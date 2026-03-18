/*
 * XREFs of SepRmDereferenceCapTable @ 0x14031CF78
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepRmDereferenceCap @ 0x14031CF58 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14031EDD4 (SepRmReferenceFindCap.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepRmCapUpdateWrkr @ 0x140784F20 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x1408E370C (SepRmDestroyCapTable.c)
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
