/*
 * XREFs of ?OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z @ 0x18007B390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSystemContextClient@@@Z @ 0x18007AFB4 (-BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSyste.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::OnSystemContextNotification(
        ISMHeatFrameworkHost *this,
        struct SystemContextMessage *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 1 )
  {
    v2 = -2147024809;
    v3 = 258LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = ISMHeatFrameworkHost::BroadcastInputConfigMessage((ISMHeatFrameworkHost *)((char *)this - 8), a2, 0LL);
  if ( v2 < 0 )
  {
    v3 = 252LL;
    goto LABEL_5;
  }
  return 0LL;
}
