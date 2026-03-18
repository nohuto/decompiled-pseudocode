/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x14082C690
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14082C7C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     CmpGetMappingHiveForString @ 0x1406F6C1C (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1406F7000 (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int VirtualizationID; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString, a1);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
      *a3 = *(_DWORD *)(*(_QWORD *)(*a2 + 64LL) + 36LL);
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
