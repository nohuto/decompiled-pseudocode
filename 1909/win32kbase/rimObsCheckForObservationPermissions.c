/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C015777C
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C0133AC0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0134BF0 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0157244 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C015A864 (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  char v11; // [rsp+50h] [rbp+20h] BYREF

  v2 = 1;
  v3 = a1 & 2;
  v4 = a1 & 1;
  v5 = RIMIsTestSigningOn(a1, a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7, v6);
  if ( !(unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( !v5 )
      return 0;
    if ( v4 )
    {
      v11 = 0;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, L"inputObservation");
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v11) < 0 || !v11 )
        v2 = 0;
    }
    if ( v3 )
    {
      v11 = 0;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, L"inputSuppression");
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v11) < 0 || !v11 )
        return 0;
    }
  }
  return v2;
}
