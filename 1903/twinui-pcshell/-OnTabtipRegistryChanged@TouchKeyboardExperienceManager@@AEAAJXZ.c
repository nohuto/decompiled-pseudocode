/*
 * XREFs of ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180312434
 * Callers:
 *     wistd::__function::__func__lambda_e7cf582f88f2a01adcc530211be9abfc__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18030DA50 (wistd--__function--__func__lambda_e7cf582f88f2a01adcc530211be9abfc__void___cdecl(enum_wil--Regis.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803181D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnTabtipRegistryChanged(TouchKeyboardExperienceManager *this)
{
  bool v1; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 91) )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            L"EnableDesktopModeAutoInvoke",
            0x10u,
            0LL,
            &pvData,
            &pcbData)
      || (pcbData = 4,
          !RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             L"EnableDesktopModeAutoInvoke",
             0x10u,
             0LL,
             &pvData,
             &pcbData)) )
    {
      v1 = pvData != 0;
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 91) + 96LL) + 495LL) = v1;
  }
  return 0LL;
}
