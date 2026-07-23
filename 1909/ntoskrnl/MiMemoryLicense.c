/*
 * XREFs of MiMemoryLicense @ 0x140A16F1C
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x1406A1820 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140A17000 (MiLimitLoaderBlockTotalMemory.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140A170E0 (MiLimitLoaderBlockHighMemory.c)
 */

__int64 __fastcall MiMemoryLicense(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+28h] BYREF
  ULONG ResultDataSize; // [rsp+70h] [rbp+30h] BYREF
  ULONG Type; // [rsp+78h] [rbp+38h] BYREF

  Type = 0;
  Data = 0;
  ValueName.Buffer = L"Kernel-WindowsMaxMemAllowedx64";
  *(_QWORD *)&ValueName.Length = 4063292LL;
  ResultDataSize = 4;
  if ( NtQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Data )
    v2 = (unsigned __int64)Data << 8;
  else
    v2 = 0x80000LL;
  v3 = ((unsigned __int64)qword_140465800 >> 12) - 1;
  qword_1404657A8 = v2;
  if ( v3 >= 0xFFFFFFFFALL )
    v3 = 0xFFFFFFFFALL;
  MiLimitLoaderBlockHighMemory(a1, v3);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_1404661E0 = -1LL;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  if ( v3 > 0xFFFFFF7FALL )
    result = MiLimitLoaderBlockHighMemory(a1, 0xFFFFFF7FALL);
  qword_1404661E0 = 0xFFFFFF7FALL;
  return result;
}
