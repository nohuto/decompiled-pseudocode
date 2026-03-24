/*
 * XREFs of SepTokenIsOwner @ 0x1400131F0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004D520 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x1400AAB60 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepTokenIsOwner(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v7 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v6 )
      v7 = a2 + v6;
    else
      v7 = 0LL;
  }
  result = SepSidInTokenSidHash(a1 + 232, 0LL, v7, 0LL, 0, 0, a4);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return SepSidInToken(a1, 0, v7, 0, 1, 0, a4);
  }
  return result;
}
