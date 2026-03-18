/*
 * XREFs of AMLIGetNSObjectNotifyFlag @ 0x1C002C324
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C009F018 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIGetNSObjectNotifyFlag(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)a1 + 64LL) & 0x10) != 0;
}
