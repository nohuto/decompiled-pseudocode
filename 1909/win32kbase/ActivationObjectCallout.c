/*
 * XREFs of ActivationObjectCallout @ 0x1C011ECC0
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 * Callees:
 *     ?internalDestroy@CActivationObject@@AEAAXXZ @ 0x1C011EB28 (-internalDestroy@CActivationObject@@AEAAXXZ.c)
 *     ActivationObjectOpen @ 0x1C011ED70 (ActivationObjectOpen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ActivationObjectCallout(int a1, CActivationObject **a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  CActivationObject *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ebx

  v2 = a1 - 37;
  if ( !v2 )
    return ActivationObjectOpen(a2);
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 3221225485LL;
      v6 = *a2;
      if ( ObGetObjectType(*a2) != ExActivationObjectType )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, ExActivationObjectType, v8);
      CActivationObject::internalDestroy(v6);
    }
    else if ( ObGetObjectType(a2[1]) != ExActivationObjectType )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(ExActivationObjectType, v9, v10);
    }
    return 0LL;
  }
  else
  {
    v11 = 0;
    if ( *((_BYTE *)a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*a2) == -1 )
      return (unsigned int)-1073741790;
    return v11;
  }
}
