/*
 * XREFs of ?SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z @ 0x180142A60
 * Callers:
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x1801427C4 (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x180142844 (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(
        SessionBasedPointerDeviceArbitration *this,
        int a2,
        char a3)
{
  int v3; // eax
  _DWORD *v4; // r9
  unsigned int i; // r10d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = -1;
  v4 = (_DWORD *)((char *)this + 24);
  for ( i = 0; i < 0x14; ++i )
  {
    if ( *v4 == a2 )
    {
      if ( !a3 )
        *v4 = 0;
    }
    else if ( !*v4 && v3 == -1 )
    {
      v3 = i;
    }
    ++v4;
  }
  if ( !a3 )
    return 0LL;
  if ( v3 != -1 )
  {
    *((_DWORD *)this + v3 + 6) = a2;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\arbitration\\sessionbased\\lib\\sessionbasedpointerdevi"
             "cearbitration.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
