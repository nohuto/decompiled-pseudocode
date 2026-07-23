/*
 * XREFs of SepTokenIsOwner @ 0x1400131F0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004D520 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepTokenIsOwner(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 result; // rax

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v7 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 )
      LODWORD(v7) = a2 + v6;
    else
      LODWORD(v7) = 0;
  }
  result = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), 0, 0, a4);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return SepSidInToken(a1, 0, v7, 0, 1, 0, a4);
  }
  return result;
}
