/*
 * XREFs of SepSddlSecurityDescriptorFromSDDLString @ 0x1C00C8D68
 * Callers:
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00C84BC (SeSddlSecurityDescriptorFromSDDL.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 *     SepSddlDaclFromSDDLString @ 0x1C00C8680 (SepSddlDaclFromSDDLString.c)
 */

__int64 __fastcall SepSddlSecurityDescriptorFromSDDLString(
        const wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptor,
        _SECURITY_DESCRIPTOR **a3)
{
  __int64 (__fastcall *SystemRoutineAddress)(const wchar_t *, __int64, _SECURITY_DESCRIPTOR **); // rax
  __int64 result; // rax
  _SECURITY_DESCRIPTOR *v7; // rdi
  unsigned int v8; // edx
  int v9; // ebx
  _SECURITY_DESCRIPTOR *PoolWithTag; // rax
  _ACL *DiscretionaryAcl; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING procName; // [rsp+38h] [rbp-38h] BYREF
  _SECURITY_DESCRIPTOR LocalSecurityDescriptor; // [rsp+48h] [rbp-28h] BYREF
  unsigned int BufferLength; // [rsp+98h] [rbp+28h] BYREF
  unsigned int SecurityDescriptorControlFlags; // [rsp+A8h] [rbp+38h] BYREF

  BufferLength = SecurityDescriptor;
  *(_QWORD *)&procName.Length = 0LL;
  procName.Buffer = 0LL;
  RtlInitUnicodeString(&procName, L"SeConvertStringSecurityDescriptorToSecurityDescriptor");
  SystemRoutineAddress = (__int64 (__fastcall *)(const wchar_t *, __int64, _SECURITY_DESCRIPTOR **))MmGetSystemRoutineAddress(&procName);
  if ( !SystemRoutineAddress )
  {
    memset(&LocalSecurityDescriptor, 0, sizeof(LocalSecurityDescriptor));
    DiscretionaryAcl = 0LL;
    v7 = 0LL;
    *a3 = 0LL;
    v9 = SepSddlDaclFromSDDLString(SecurityDescriptorString, v8, &SecurityDescriptorControlFlags, &DiscretionaryAcl);
    if ( v9 >= 0 )
    {
      RtlCreateSecurityDescriptor(&LocalSecurityDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(&LocalSecurityDescriptor, 1u, DiscretionaryAcl, 0);
      LocalSecurityDescriptor.Control |= SecurityDescriptorControlFlags;
      BufferLength = 0;
      RtlAbsoluteToSelfRelativeSD(&LocalSecurityDescriptor, 0LL, &BufferLength);
      PoolWithTag = (_SECURITY_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, BufferLength, 0x64536553u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = RtlAbsoluteToSelfRelativeSD(&LocalSecurityDescriptor, PoolWithTag, &BufferLength);
        if ( v9 >= 0 )
        {
          ExFreePoolWithTag(DiscretionaryAcl, 0);
          *a3 = v7;
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    if ( DiscretionaryAcl )
      ExFreePoolWithTag(DiscretionaryAcl, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    return (unsigned int)v9;
  }
  result = SystemRoutineAddress(SecurityDescriptorString, 1LL, a3);
  if ( (int)result >= 0 )
    (*a3)->Control |= 8u;
  return result;
}
