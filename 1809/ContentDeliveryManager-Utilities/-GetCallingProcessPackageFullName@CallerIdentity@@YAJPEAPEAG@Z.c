/*
 * XREFs of ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x1800537CC
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180005460 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180053838 (-GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180053B20 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessPackageFullName(CallerIdentity *this, unsigned __int16 **a2)
{
  int CallingProcessHandle; // eax
  unsigned __int16 **v4; // r8
  int PackageFullNameFromProcess; // ebx
  char *v6; // rcx
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  PackageFullNameFromProcess = 0;
  if ( CallingProcessHandle < 0 )
    PackageFullNameFromProcess = CallingProcessHandle;
  if ( PackageFullNameFromProcess >= 0 )
    PackageFullNameFromProcess = CallerIdentity::GetPackageFullNameFromProcess(hObject, this, v4);
  v6 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)PackageFullNameFromProcess;
}
