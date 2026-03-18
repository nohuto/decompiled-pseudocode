/*
 * XREFs of ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C00541F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 */

void __fastcall ACPIGpeInstallRemoveIndexErrorWorker(_DWORD *P)
{
  __int16 *v2[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  __int64 v4; // [rsp+50h] [rbp-48h] BYREF
  WCHAR SourceString[20]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0x4500500047LL;
  memset(SourceString, 0, sizeof(SourceString));
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( RtlIntegerToUnicodeString(P[8], 0, &DestinationString) >= 0 )
  {
    v2[0] = (__int16 *)&v4;
    v2[1] = (__int16 *)SourceString;
    ACPIWriteEventLogEntry(-1073414133, v2, 2u);
  }
  ExFreePoolWithTag(P, 0);
}
