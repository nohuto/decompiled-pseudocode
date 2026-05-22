/*
 * XREFs of ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800212F8
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180010164 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18001FD48 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180021D14 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  MPCInputRouter *v6; // rax
  const char *v7; // r9
  MPCInputRouter *v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  MPCInputRouter *v13; // [rsp+60h] [rbp+8h] BYREF
  DWORD v14; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v13) = 0;
  v14 = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"MPCInputRouterWaitForDebugger",
    0x10u,
    0LL,
    &v13,
    &v14);
  if ( (_DWORD)v13 == 1 )
  {
    while ( !IsDebuggerPresent() )
      Sleep(0x64u);
    __debugbreak();
  }
  if ( !a1 || !a3 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)0x80070057LL,
      v11);
    JUMPOUT(0x180049E6ALL);
  }
  v6 = (MPCInputRouter *)RefCountedObject::operator new(0x3F8uLL);
  v13 = v6;
  if ( v6 )
    v8 = MPCInputRouter::MPCInputRouter(v6, a1, a2);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      v7);
    __debugbreak();
  }
  v9 = MPCInputRouter::Initialize(v8);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x79,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v9,
      v11);
    __debugbreak();
  }
  *a3 = v8;
  return 0LL;
}
