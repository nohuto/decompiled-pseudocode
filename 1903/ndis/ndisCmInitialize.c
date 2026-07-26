/*
 * XREFs of ndisCmInitialize @ 0x1C0144944
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 ndisCmInitialize()
{
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-69h] BYREF
  int v3; // [rsp+40h] [rbp-59h]
  __int64 v4; // [rsp+44h] [rbp-55h]
  int v5; // [rsp+4Ch] [rbp-4Dh]
  void *v6; // [rsp+50h] [rbp-49h]
  __int64 v7; // [rsp+58h] [rbp-41h]
  _QWORD v8[16]; // [rsp+60h] [rbp-39h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeInitializeSpinLock(&ndisCmSessionLock);
  KeInitializeTimer(&ndisCmCleanupTimer);
  KeInitializeDpc(&ndisCmCleanupDpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  v3 = 8;
  ndisCmCleanupWorkItem.Parameter = 0LL;
  ndisCmCleanupWorkItem.WorkerRoutine = ndisCmCleanupWorkRoutine;
  ndisCmCleanupWorkItem.List.Flink = 0LL;
  v2[1] = &NPI_MS_NDIS_MODULEID;
  v6 = &unk_1C00CC5F0;
  v2[0] = 0LL;
  v4 = 0LL;
  v5 = 0;
  v7 = 0LL;
  result = NsiSetObjectSecurity(v2);
  if ( (int)result >= 0 )
  {
    v3 = 16;
    result = NsiSetObjectSecurity(v2);
    if ( (int)result >= 0 )
    {
      memset(v8, 0, 0x78uLL);
      BYTE2(v8[0]) |= 0xCu;
      v8[9] = ndisCmDeleteStateObject;
      LOWORD(v8[0]) = 120;
      HIDWORD(v8[3]) = 983103;
      HIDWORD(v8[4]) = 512;
      LODWORD(v8[5]) = 16;
      RtlInitUnicodeString(&DestinationString, L"NdisCmState");
      return ((__int64 (__fastcall *)(_UNICODE_STRING *, _QWORD *, _QWORD, struct _OBJECT_TYPE **))ObCreateObjectType)(
               &DestinationString,
               v8,
               0LL,
               &ndisCmStateObjectType);
    }
  }
  return result;
}
