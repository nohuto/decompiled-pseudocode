/*
 * XREFs of ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x180407960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::WriteData(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        DWORD dwType,
        BYTE *lpData,
        unsigned __int64 cbData)
{
  bool v8; // zf
  HKEY v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  HKEY phkResult; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
    v8 = *((_QWORD *)this + 3) == 0LL;
  else
    v8 = *((_QWORD *)this + 2) == 0LL;
  if ( v8 )
    return 0LL;
  phkResult = 0LL;
  v10 = (HKEY)*((_QWORD *)this + a2 + 2);
  if ( a3 )
  {
    v11 = RegCreateKeyW(v10, a3, &phkResult);
    if ( v11 )
    {
      v12 = 86LL;
      goto LABEL_12;
    }
    v10 = phkResult;
  }
  v11 = RegSetValueExW(v10, a4, 0, dwType, lpData, cbData);
  if ( !v11 )
  {
    v13 = 0;
    goto LABEL_14;
  }
  v12 = 93LL;
LABEL_12:
  v13 = wil::details::in1diag3::Return_Win32(
          retaddr,
          v12,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
          (const char *)v11);
LABEL_14:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v13;
}
