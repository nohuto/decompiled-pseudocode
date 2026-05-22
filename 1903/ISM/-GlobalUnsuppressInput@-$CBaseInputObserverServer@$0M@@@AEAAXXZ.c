/*
 * XREFs of ?GlobalUnsuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x1800686D8
 * Callers:
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800689E0 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 *     ?UnsuppressInput@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180068A60 (-UnsuppressInput@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBam.c)
 * Callees:
 *     ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x180068908 (-SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::GlobalUnsuppressInput(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 208);
  if ( !v1 )
    msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow();
  result = (unsigned int)(v1 - 1);
  *(_DWORD *)(a1 + 208) = result;
  if ( !(_DWORD)result )
    return NtMITSetInputSuppressionState(1LL, 4LL, 1LL);
  return result;
}
