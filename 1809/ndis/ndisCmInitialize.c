/*
 * XREFs of ndisCmInitialize @ 0x1C0126FBC
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 ndisCmInitialize()
{
  __int64 result; // rax
  _QWORD v1[6]; // [rsp+20h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v3[16]; // [rsp+60h] [rbp-39h] BYREF

  KeInitializeSpinLock(&ndisCmSessionLock);
  KeInitializeTimer(&ndisCmCleanupTimer);
  KeInitializeDpc(&ndisCmCleanupDpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  ndisCmCleanupWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  ndisCmCleanupWorkItem.Parameter = 0LL;
  ndisCmCleanupWorkItem.List.Flink = 0LL;
  memset(v1, 0, sizeof(v1));
  LODWORD(v1[2]) = 8;
  v1[1] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v1[5]) = 0;
  v1[4] = &unk_1C0089370;
  result = NsiSetObjectSecurity(v1);
  if ( (int)result >= 0 )
  {
    LODWORD(v1[2]) = 16;
    result = NsiSetObjectSecurity(v1);
    if ( (int)result >= 0 )
    {
      memset(v3, 0, 0x78uLL);
      BYTE2(v3[0]) |= 0xCu;
      v3[9] = ndisCmDeleteStateObject;
      LOWORD(v3[0]) = 120;
      HIDWORD(v3[3]) = 983103;
      HIDWORD(v3[4]) = 512;
      LODWORD(v3[5]) = 16;
      RtlInitUnicodeString(&DestinationString, L"NdisCmState");
      return ObCreateObjectType(&DestinationString, v3, 0LL, &ndisCmStateObjectType);
    }
  }
  return result;
}
