/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C0104DE4
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00DF1E0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C00DFCC0 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C00F2630 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01048F4 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(char a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  int v3; // esi
  BOOL v4; // ebp
  int v5; // r14d
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = 1;
  v2 = a1 & 2;
  v3 = a1 & 1;
  v4 = RIMIsRunningOnMobile();
  v5 = RIMIsTestSigningOn();
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
  if ( (unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
    return v1;
  if ( !v5 )
  {
    if ( !v4 )
      return 0;
    if ( !v3 )
      goto LABEL_10;
    if ( !v2 )
      return 0;
  }
  if ( v3 )
  {
    v10 = 0;
    RtlInitUnicodeString(&DestinationString, L"inputObservation");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v10) < 0 || !v10 )
      v1 = 0;
  }
LABEL_10:
  if ( v2 )
  {
    v10 = 0;
    RtlInitUnicodeString(&DestinationString, L"inputSuppression");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v10) < 0 || !v10 )
      return 0;
  }
  return v1;
}
