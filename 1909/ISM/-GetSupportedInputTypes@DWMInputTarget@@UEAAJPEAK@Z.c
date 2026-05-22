/*
 * XREFs of ?GetSupportedInputTypes@DWMInputTarget@@UEAAJPEAK@Z @ 0x18002A420
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall DWMInputTarget::GetSupportedInputTypes(
        DWMInputTarget *this,
        unsigned int *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x103,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    JUMPOUT(0x18004DD4ELL);
  }
  *a2 = *((_DWORD *)this + 23);
  return 0LL;
}
