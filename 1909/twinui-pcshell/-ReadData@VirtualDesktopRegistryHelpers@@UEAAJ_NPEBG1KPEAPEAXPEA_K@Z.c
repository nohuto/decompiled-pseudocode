/*
 * XREFs of ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x180407440
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::ReadData(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        void **Type,
        unsigned __int64 *phkResult)
{
  void **v7; // r14
  unsigned __int64 *v9; // r15
  __int64 v10; // rdx
  HKEY v12; // rsi
  LSTATUS v13; // eax
  unsigned int v14; // edi
  bool v15; // cc
  BYTE *lpData; // rbx
  unsigned int v17; // eax
  BYTE *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD cbData; // [rsp+58h] [rbp+10h] BYREF

  v7 = Type;
  v9 = phkResult;
  *Type = 0LL;
  *v9 = 0LL;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      v10 = 43LL;
      goto LABEL_4;
    }
  }
  else if ( !*((_QWORD *)this + 2) )
  {
    v10 = 40LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)0x80070002LL);
    return 2147942402LL;
  }
  phkResult = 0LL;
  v12 = (HKEY)*((_QWORD *)this + a2 + 2);
  if ( a3 )
  {
    v13 = RegOpenKeyW(v12, a3, (PHKEY)&phkResult);
    v14 = v13;
    v15 = v13 <= 0;
    if ( v13 )
      goto LABEL_11;
    v12 = (HKEY)phkResult;
  }
  v13 = RegQueryValueExW(v12, a4, 0LL, (LPDWORD)&Type, 0LL, &cbData);
  v14 = v13;
  v15 = v13 <= 0;
  if ( v13 )
  {
LABEL_11:
    if ( !v15 )
      v14 = (unsigned __int16)v13 | 0x80070000;
    goto LABEL_21;
  }
  if ( (_DWORD)Type == a5 )
  {
    lpData = (BYTE *)CoTaskMemAlloc(cbData);
    if ( lpData )
    {
      v17 = RegQueryValueExW(v12, a4, 0LL, 0LL, lpData, &cbData);
      if ( v17 )
      {
        v14 = wil::details::in1diag3::Return_Win32(
                retaddr,
                66LL,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
                (const char *)v17);
      }
      else
      {
        v18 = lpData;
        lpData = 0LL;
        *v7 = v18;
        v14 = 0;
        *v9 = cbData;
      }
    }
    else
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)0x8007000ELL);
    }
    CoTaskMemFree(lpData);
  }
  else
  {
    v14 = -2147023267;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)0x8007065DLL);
  }
LABEL_21:
  if ( phkResult )
    RegCloseKey((HKEY)phkResult);
  return v14;
}
