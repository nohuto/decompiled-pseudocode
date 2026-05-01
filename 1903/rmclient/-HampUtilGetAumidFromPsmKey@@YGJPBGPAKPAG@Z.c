/*
 * XREFs of ?HampUtilGetAumidFromPsmKey@@YGJPBGPAKPAG@Z @ 0x10006280
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z @ 0x10005F90 (-HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

LONG __userpurge HampUtilGetAumidFromPsmKey@<eax>(
        UINT32 *a1@<edx>,
        int a2@<ecx>,
        WCHAR *applicationUserModelId,
        unsigned int *a4,
        unsigned __int16 *a5)
{
  LONG result; // eax
  int v8; // [esp+Ch] [ebp-218h] BYREF
  UINT32 packageFamilyNameLength; // [esp+10h] [ebp-214h] BYREF
  int v10; // [esp+14h] [ebp-210h] BYREF
  WCHAR packageFullName[128]; // [esp+18h] [ebp-20Ch] BYREF
  WCHAR packageFamilyName[66]; // [esp+118h] [ebp-10Ch] BYREF
  WCHAR packageRelativeApplicationId[66]; // [esp+19Ch] [ebp-88h] BYREF

  v10 = 256;
  packageFamilyNameLength = 65;
  v8 = 130;
  result = PsmGetPackageFullNameFromKey(a2, packageFullName, &v10);
  if ( result >= 0 )
  {
    if ( PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, packageFamilyName) )
    {
      return -1073741811;
    }
    else
    {
      result = PsmGetApplicationNameFromKey(a2, packageRelativeApplicationId, &v8);
      if ( result >= 0 )
      {
        result = FormatApplicationUserModelId(
                   packageFamilyName,
                   packageRelativeApplicationId,
                   a1,
                   applicationUserModelId);
        if ( result )
          return -1073741789;
      }
    }
  }
  return result;
}
