/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800184A0
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180018024 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006CC60 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800A7C98 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x18015CC20 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180407C44 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x18040FCF8 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800185F0 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180032100 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180069BB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(const unsigned __int16 *a1, LPVOID *a2, unsigned __int16 **a3)
{
  unsigned __int128 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int16 **v12; // [rsp+20h] [rbp-178h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-170h]
  unsigned int v14; // [rsp+30h] [rbp-168h]
  unsigned __int16 v15[72]; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int16 v16[72]; // [rsp+D0h] [rbp-C8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  LODWORD(v5) = ParseAppUserModelId(a1, v15, (unsigned __int64)a3, v16, 0x41uLL);
  v7 = -1LL;
  v8 = v5;
  if ( a2 && (v5 & 0x80000000) == 0LL )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v15[v9] );
    v10 = v9 + 1;
    *a2 = 0LL;
    if ( v9 + 1 >= v9 && (v5 = v10 * (unsigned __int128)2uLL, is_mul_ok(v10, 2uLL)) )
    {
      *(_QWORD *)&v5 = CoTaskMemAlloc(2 * v10);
      *a2 = (LPVOID)v5;
      if ( (_QWORD)v5 )
      {
        v8 = 0;
        StringCchCopyNExW((unsigned __int16 *)v5, v9 + 1, v15, v9, v12, v13, v14);
      }
      else
      {
        v8 = -2147024882;
      }
    }
    else
    {
      v8 = -2147024362;
    }
  }
  if ( a3 && v8 >= 0 )
  {
    do
      ++v7;
    while ( v16[v7] );
    v8 = _AllocStringWorker<CTCoAllocPolicy>(v6, *((_QWORD *)&v5 + 1), v16, v7);
    if ( v8 < 0 && a2 )
    {
      CoTaskMemFree(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)v8;
}
