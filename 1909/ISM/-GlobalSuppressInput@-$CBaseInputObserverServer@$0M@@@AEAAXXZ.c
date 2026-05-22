/*
 * XREFs of ?GlobalSuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x180068450
 * Callers:
 *     ?SuppressInput@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800686F0 (-SuppressInput@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoI.c)
 * Callees:
 *     ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x1800686C8 (-SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::GlobalSuppressInput(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 208);
  if ( !v1 )
  {
    NtMITSetInputSuppressionState(1LL, 4LL, 0LL);
    v1 = *(_DWORD *)(a1 + 208);
  }
  if ( v1 == -1 )
    msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow();
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 208) = result;
  return result;
}
