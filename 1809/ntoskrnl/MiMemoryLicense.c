/*
 * XREFs of MiMemoryLicense @ 0x1409D3A44
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x14059FF90 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x1409D3B20 (MiLimitLoaderBlockTotalMemory.c)
 *     MiLimitLoaderBlockHighMemory @ 0x1409D3C00 (MiLimitLoaderBlockHighMemory.c)
 */

__int64 __fastcall MiMemoryLicense(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v6; // [rsp+38h] [rbp-20h]
  unsigned int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  v7 = 0;
  v5 = 4063292;
  v6 = L"Kernel-WindowsMaxMemAllowedx64";
  v8 = 4;
  if ( (int)NtQueryLicenseValue((unsigned __int64)&v5, &v9, &v7, 4u, &v8) >= 0 && v7 )
    v2 = (unsigned __int64)v7 << 8;
  else
    v2 = 0x80000LL;
  v3 = 0xFFFFFFFFALL;
  qword_14043A080 = v2;
  if ( ((unsigned __int64)qword_14043A0C0 >> 12) - 1 < 0xFFFFFFFFALL )
    v3 = ((unsigned __int64)qword_14043A0C0 >> 12) - 1;
  MiLimitLoaderBlockHighMemory(a1, v3);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_14043AA60 = -1LL;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  if ( v3 > 0xFFFFFF7FALL )
    result = MiLimitLoaderBlockHighMemory(a1, 0xFFFFFF7FALL);
  qword_14043AA60 = 0xFFFFFF7FALL;
  return result;
}
