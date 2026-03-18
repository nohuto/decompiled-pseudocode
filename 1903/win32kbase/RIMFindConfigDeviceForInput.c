/*
 * XREFs of RIMFindConfigDeviceForInput @ 0x1C0143620
 * Callers:
 *     RIMConfigurePointerDevice @ 0x1C0142FF0 (RIMConfigurePointerDevice.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C0143BE4 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindConfigDeviceForInput(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  int v6; // ebp
  int v7; // r14d
  __int64 i; // rbx

  v4 = 0;
  v6 = a3;
  v7 = a2;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *a4 = 0LL;
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 184) & 0x400) == 0
      && *(_BYTE *)(i + 48) == 3
      && (unsigned int)RIMIsParentCommon(
                         v6,
                         i,
                         v7,
                         *(unsigned __int16 *)(*(_QWORD *)(i + 464) + 110LL),
                         *(_WORD *)(*(_QWORD *)(i + 464) + 112LL)) )
    {
      v4 = 1;
      *a4 = i;
      return v4;
    }
  }
  return v4;
}
