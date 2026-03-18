/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C012C9F4
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C010BE70 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C010C680 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C012C4FC (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C012FA9C (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // ebp
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  v3 = a1 & 2;
  v4 = a1 & 1;
  v5 = RIMIsTestSigningOn(a1, a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
  if ( !(unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( !v5 )
      return 0;
    if ( v4 )
    {
      v10 = 0;
      RtlInitUnicodeString(&DestinationString, L"inputObservation");
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v10) < 0 || !v10 )
        v2 = 0;
    }
    if ( v3 )
    {
      v10 = 0;
      RtlInitUnicodeString(&DestinationString, L"inputSuppression");
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v10) < 0 || !v10 )
        return 0;
    }
  }
  return v2;
}
