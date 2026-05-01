/*
 * XREFs of ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18003DE20
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18000DD4C (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x180440EB0 (-v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18003DF60 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x18003E110 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003F074 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetManifestedOrientationPreference(
        LPCWSTR lpSubKey,
        unsigned __int16 *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  signed int StateRegKey; // ebx
  CallerIdentity *v6; // rdi
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  HKEY *phkResult; // [rsp+20h] [rbp-40h]
  HKEY v11; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int16 *v13[4]; // [rsp+40h] [rbp-20h] BYREF
  DWORD cbData; // [rsp+98h] [rbp+38h] BYREF
  DWORD Type; // [rsp+A0h] [rbp+40h] BYREF
  int Data; // [rsp+A8h] [rbp+48h] BYREF

  *(_DWORD *)a2 = 0;
  v13[0] = 0LL;
  v13[1] = (unsigned __int16 *)-1LL;
  v13[2] = (unsigned __int16 *)-1LL;
  StateRegKey = ParseAppUserModelId(lpSubKey, v13, 0LL);
  if ( StateRegKey >= 0 )
  {
    v6 = (CallerIdentity *)OpenStateExplicit(-6LL, v13[0]);
    if ( v6 || (StateRegKey = ResultFromKnownLastError(), StateRegKey >= 0) )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&hKey);
      StateRegKey = CallerIdentity::GetStateRegKey(
                      v6,
                      (void *)L"SplashScreen",
                      (const unsigned __int16 *)0x20019,
                      (unsigned int)&hKey,
                      phkResult);
      if ( StateRegKey >= 0 )
      {
        Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v11);
        v7 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x20019u, &v11);
        StateRegKey = v7;
        if ( v7 > 0 )
          StateRegKey = (unsigned __int16)v7 | 0x80070000;
        if ( StateRegKey >= 0 )
        {
          cbData = 4;
          v8 = RegQueryValueExW(v11, L"Orientation", 0LL, &Type, (LPBYTE)&Data, &cbData);
          StateRegKey = v8;
          if ( v8 > 0 )
            StateRegKey = (unsigned __int16)v8 | 0x80070000;
          if ( StateRegKey >= 0 )
          {
            if ( Type == 4 )
            {
              StateRegKey = 0;
              *(_DWORD *)a2 = Data;
            }
            else
            {
              StateRegKey = -2147467259;
            }
          }
        }
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&v11);
      }
      CloseState(v6);
      CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
  return (unsigned int)StateRegKey;
}
