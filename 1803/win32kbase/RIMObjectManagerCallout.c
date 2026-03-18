/*
 * XREFs of RIMObjectManagerCallout @ 0x1C00F1BE0
 * Callers:
 *     W32CalloutDispatch @ 0x1C005A060 (W32CalloutDispatch.c)
 * Callees:
 *     RawInputManagerObjectDelete @ 0x1C00F2218 (RawInputManagerObjectDelete.c)
 *     RawInputManagerObjectOpen @ 0x1C00F23B0 (RawInputManagerObjectOpen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v6; // rdx
  unsigned int v7; // ebx

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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v6);
      return 0LL;
    }
  }
  else
  {
    v7 = 0;
    if ( *(_BYTE *)(a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a2) == -1 )
      return (unsigned int)-1073741790;
    return v7;
  }
}
