/*
 * XREFs of IopGetFileVolumeNameInformation @ 0x1400DDAC4
 * Callers:
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ObQueryNameString @ 0x140660820 (ObQueryNameString.c)
 */

NTSTATUS __fastcall IopGetFileVolumeNameInformation(void *a1, __int64 a2, _DWORD *a3, int a4)
{
  unsigned int v6; // r14d
  NTSTATUS result; // eax
  unsigned int v8; // ebx
  unsigned int Length; // esi
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-248h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-238h] BYREF

  v6 = a4 - 4;
  result = ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength);
  if ( result < 0 )
  {
    *(_DWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    v8 = v6 < ObjectNameInfo.Name.Length ? 0x80000005 : 0;
    Length = ObjectNameInfo.Name.Length;
    if ( v6 < ObjectNameInfo.Name.Length )
      Length = v6 & 0xFFFFFFFE;
    *a3 = ObjectNameInfo.Name.Length;
    memmove(a3 + 1, ObjectNameInfo.Name.Buffer, Length);
    *(_DWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = Length + 4;
    return v8;
  }
  return result;
}
