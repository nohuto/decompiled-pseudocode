/*
 * XREFs of ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x18000EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18000EF60 (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000F0E0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000F204 (-GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18000F7D4 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::GetApplicationId(CClassicWindow *this, unsigned __int16 **a2)
{
  _QWORD *v4; // rdi
  unsigned __int16 **v6; // r8
  int WeakWindowAppId; // eax
  unsigned int v8; // ebx
  CallerIdentity *v9; // rbx
  unsigned __int16 **v10; // r8
  unsigned __int16 **v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+8h] BYREF
  CallerIdentity *v14; // [rsp+60h] [rbp+18h]

  v4 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
    return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(v4, a2);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 40);
  v4[1] = -1LL;
  v4[2] = -1LL;
  WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(*((CallerIdentity **)this + 2), v4, v6);
  v8 = WeakWindowAppId;
  if ( WeakWindowAppId >= 0 )
  {
    if ( !*v4 && GetWindowThreadProcessId(*((HWND *)this + 2), &dwProcessId) )
    {
      v9 = (CallerIdentity *)OpenProcess(0x1000u, 0, dwProcessId);
      v14 = v9;
      if ( (unsigned __int64)v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v4);
        v4[1] = -1LL;
        v4[2] = -1LL;
        if ( (int)CallerIdentity::GetAppIdFromProcessId(dwProcessId, (unsigned int)v4, v10) < 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v4);
          v4[1] = -1LL;
          v4[2] = -1LL;
          CallerIdentity::GetWeakProcessAppId(v9, v4, v11);
        }
      }
      if ( (unsigned __int64)v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v9);
    }
    return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(v4, a2);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
    (const char *)(unsigned int)WeakWindowAppId,
    -2);
  return v8;
}
