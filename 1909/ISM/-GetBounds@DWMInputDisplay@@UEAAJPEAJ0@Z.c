/*
 * XREFs of ?GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x1800C6640
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ @ 0x1800C6554 (-CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ.c)
 */

__int64 __fastcall DWMInputDisplay::GetBounds(DWMInputDisplay *this, int *a2, int *a3)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 3) || !*((_DWORD *)this + 8) || !*((_DWORD *)this + 9) )
  {
    v6 = DWMInputDisplay::CacheDisplayInformation(this);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        173LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputdisplay.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
  }
  *a2 = *((_DWORD *)this + 8);
  *a3 = *((_DWORD *)this + 9);
  return 0LL;
}
