/*
 * XREFs of ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x18010517C
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CD2A0 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801051FC (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z @ 0x180105104 (-SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::EndCurrentSession(
        SessionBasedPointerDeviceArbitration *this,
        int a2)
{
  int v4; // eax
  unsigned int v5; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 108) = 0;
    if ( a2 )
    {
      SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(this, a2, 0);
      if ( a2 == *((_DWORD *)this + 26) )
        *((_DWORD *)this + 26) = 0;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\arbitration\\sessionbased\\lib\\sessionbasedpointerde"
               "vicearbitration.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
