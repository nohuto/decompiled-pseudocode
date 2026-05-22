/*
 * XREFs of ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x180068908
 * Callers:
 *     ?GlobalSuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x180068690 (-GlobalSuppressInput@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 *     ?GlobalUnsuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x1800686D8 (-GlobalUnsuppressInput@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

void __noreturn msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow(void)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = 1;
  throw (msl::utilities::SafeIntException *)&pExceptionObject;
}
