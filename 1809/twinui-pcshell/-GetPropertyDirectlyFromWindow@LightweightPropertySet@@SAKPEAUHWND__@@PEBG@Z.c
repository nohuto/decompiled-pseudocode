/*
 * XREFs of ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x18023C21C
 * Callers:
 *     _lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator() @ 0x1802124E8 (_lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator().c)
 *     ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x180221080 (-s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x18023C328 (-s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z.c)
 */

HANDLE __fastcall LightweightPropertySet::GetPropertyDirectlyFromWindow(
        HWND hWnd,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  WCHAR String[256]; // [rsp+20h] [rbp-218h] BYREF

  LightweightPropertySet::s_MangleName(L"ExperienceId", String, a3);
  return GetPropW(hWnd, String);
}
