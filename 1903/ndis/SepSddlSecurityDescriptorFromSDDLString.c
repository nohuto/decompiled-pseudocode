/*
 * XREFs of SepSddlSecurityDescriptorFromSDDLString @ 0x1C010C318
 * Callers:
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C010C2B4 (SeSddlSecurityDescriptorFromSDDL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     SepSddlDaclFromSDDLString @ 0x1C0128660 (SepSddlDaclFromSDDLString.c)
 */

__int64 __fastcall SepSddlSecurityDescriptorFromSDDLString(__int64 a1, ULONG a2, __int64 a3)
{
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64); // rax
  __int64 result; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  NTSTATUS v9; // ebx
  PVOID PoolWithTag; // rax
  PACL Dacl; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _WORD SecurityDescriptor[20]; // [rsp+48h] [rbp-28h] BYREF
  ULONG BufferLength; // [rsp+98h] [rbp+28h] BYREF
  __int16 v15; // [rsp+A8h] [rbp+38h] BYREF

  BufferLength = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"SeConvertStringSecurityDescriptorToSecurityDescriptor");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, __int64))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
  {
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    Dacl = 0LL;
    v7 = 0LL;
    *(_QWORD *)a3 = 0LL;
    v9 = SepSddlDaclFromSDDLString(a1, v8, &v15, &Dacl);
    if ( v9 >= 0 )
    {
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
      SecurityDescriptor[1] |= v15;
      BufferLength = 0;
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x64536553u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, &BufferLength);
        if ( v9 >= 0 )
        {
          ExFreePoolWithTag(Dacl, 0);
          *(_QWORD *)a3 = v7;
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    if ( Dacl )
      ExFreePoolWithTag(Dacl, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    return (unsigned int)v9;
  }
  result = SystemRoutineAddress(a1, 1LL, a3);
  if ( (int)result >= 0 )
    *(_WORD *)(*(_QWORD *)a3 + 2LL) |= 8u;
  return result;
}
