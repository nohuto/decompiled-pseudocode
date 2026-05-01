/*
 * XREFs of ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1803A204C
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1803A1D1C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a529b01___ @ 0x1803A18F8 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a5.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1803A1F04 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsApplicationInteractive(
        struct IUnknown *this,
        unsigned __int16 *a2,
        int *a3)
{
  int v5; // edi
  int *v6; // r8
  unsigned __int16 *v8; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v8 = a2;
  v5 = CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a529b01___(
         this,
         &v8);
  if ( v5 >= 0
    && !*(_DWORD *)a2
    && (int)CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
              (CallerIdentity::ApiPolicyChecker *)this,
              (unsigned __int16 *)&v8,
              v6) >= 0 )
  {
    *(_DWORD *)a2 = (_DWORD)v8;
  }
  return (unsigned int)v5;
}
