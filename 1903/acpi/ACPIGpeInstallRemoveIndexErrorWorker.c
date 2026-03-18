/*
 * XREFs of ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C0055C60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 */

void __fastcall ACPIGpeInstallRemoveIndexErrorWorker(_DWORD *P)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-9h] BYREF
  __int16 *v3[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+50h] [rbp+17h] BYREF
  WCHAR SourceString[20]; // [rsp+58h] [rbp+1Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0x4500500047LL;
  memset(SourceString, 0, sizeof(SourceString));
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( RtlIntegerToUnicodeString(P[8], 0, &DestinationString) >= 0 )
  {
    v3[0] = (__int16 *)&v4;
    v3[1] = (__int16 *)SourceString;
    ACPIWriteEventLogEntry(-1073414133, v3, 2u);
  }
  ExFreePoolWithTag(P, 0);
}
