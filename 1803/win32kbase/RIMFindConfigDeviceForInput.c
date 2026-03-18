/*
 * XREFs of RIMFindConfigDeviceForInput @ 0x1C00EF4E0
 * Callers:
 *     RIMConfigurePointerDevice @ 0x1C00EE77C (RIMConfigurePointerDevice.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C00EFE8C (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindConfigDeviceForInput(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v4; // edi
  int v7; // r14d
  __int64 i; // rbx

  v4 = 0;
  v7 = a2;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  *a4 = 0LL;
  for ( i = *(_QWORD *)(a1 + 408); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 184) & 0x200) == 0
      && *(_BYTE *)(i + 48) == 3
      && (unsigned int)RIMIsParentCommon(
                         a3,
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
