/*
 * XREFs of SepMandatoryToDiscretionary @ 0x14000C468
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepMandatoryToDiscretionary(_DWORD *a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0xFDFFFFFF;
  if ( a1[2] && (v2 & *a1) != v2 )
    return 3221225506LL;
  else
    return 0LL;
}
