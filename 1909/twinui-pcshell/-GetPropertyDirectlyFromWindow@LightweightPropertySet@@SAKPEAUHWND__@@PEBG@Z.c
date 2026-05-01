/*
 * XREFs of ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x1802B18E8
 * Callers:
 *     _lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator() @ 0x1802889BC (_lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator().c)
 *     ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x180295930 (-s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x1802B19F4 (-s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z.c)
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
