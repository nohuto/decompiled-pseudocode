/*
 * XREFs of RIMObjectManagerCallout @ 0x1C005969C
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 * Callees:
 *     RawInputManagerObjectOpen @ 0x1C005972C (RawInputManagerObjectOpen.c)
 *     RawInputManagerObjectDelete @ 0x1C00597C8 (RawInputManagerObjectDelete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v8; // ebx

  v2 = a1 - 27;
  if ( !v2 )
    return RawInputManagerObjectOpen(a2);
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return RawInputManagerObjectDelete(a2);
      else
        return 3221225485LL;
    }
    else
    {
      if ( ObGetObjectType(*(_QWORD *)(a2 + 8)) != ExRawInputManagerObjectType )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v5, v6);
      return 0LL;
    }
  }
  else
  {
    v8 = 0;
    if ( *(_BYTE *)(a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a2) == -1 )
      return (unsigned int)-1073741790;
    return v8;
  }
}
