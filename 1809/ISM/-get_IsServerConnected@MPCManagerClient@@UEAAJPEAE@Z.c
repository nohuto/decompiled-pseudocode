/*
 * XREFs of ?get_IsServerConnected@MPCManagerClient@@UEAAJPEAE@Z @ 0x1800DAC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MPCManagerClient::get_IsServerConnected(MPCManagerClient *this, bool *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *(_QWORD *)(*((_QWORD *)this + 129) + 152LL) != 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
