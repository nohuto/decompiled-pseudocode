/*
 * XREFs of ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x180109FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NonBamoInputDeliveryServer::SetLastUserInputModality(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 result; // rax

  result = 2LL;
  if ( a2 == 2 )
  {
    result = 1LL;
  }
  else if ( a2 == 4 )
  {
    result = 4LL;
  }
  else if ( a2 != 8 )
  {
    result = 16LL;
    if ( a2 != 16 )
      result = 128LL;
  }
  if ( *(_DWORD *)(a1 + 272) != (_DWORD)result || *(_DWORD *)(a1 + 276) != a3 || *(_DWORD *)(a1 + 280) != a4 )
  {
    *(_QWORD *)(a1 + 272) = __PAIR64__(a3, result);
    *(_DWORD *)(a1 + 280) = a4;
  }
  return result;
}
