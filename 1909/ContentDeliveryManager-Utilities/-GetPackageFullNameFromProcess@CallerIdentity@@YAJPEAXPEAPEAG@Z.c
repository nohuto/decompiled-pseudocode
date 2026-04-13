/*
 * XREFs of ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800550B4
 * Callers:
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180055048 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x180054FC4 (-CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromProcess(HANDLE hProcess, PWSTR *a2, unsigned __int16 **a3)
{
  LONG v5; // eax
  signed int v6; // edi
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  PWSTR v9; // rbx
  LONG v10; // eax
  PWSTR v11; // rax
  UINT32 packageFullNameLength; // [rsp+48h] [rbp+10h] BYREF
  PWSTR packageFullName; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  packageFullNameLength = 0;
  v5 = GetPackageFullName(hProcess, &packageFullNameLength, 0LL);
  v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v6 = v5;
  if ( v6 == -2147024774 && packageFullNameLength )
  {
    packageFullName = 0LL;
    CoTaskMemFree(0LL);
    v8 = CoAllocStringLen(v7, packageFullNameLength, &packageFullName);
    v9 = packageFullName;
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = GetPackageFullName(hProcess, &packageFullNameLength, packageFullName);
      v6 = (unsigned __int16)v10 | 0x80070000;
      if ( v10 <= 0 )
        v6 = v10;
      if ( v6 >= 0 )
      {
        v11 = v9;
        v9 = 0LL;
        *a2 = v11;
      }
    }
    CoTaskMemFree(v9);
  }
  return (unsigned int)v6;
}
