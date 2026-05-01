/*
 * XREFs of ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180053748
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800535C0 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1800537C4 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z @ 0x180053AD8 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180222FC4 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 */

__int64 __fastcall HolographicPositioner::_OnUnmanagedWin32ViewAdded(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3)
{
  __int64 v3; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v12 = 6;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(v3 + 400))(a2, &v12) < 0 || v12 != 1 )
  {
    if ( HolographicPositioner::_IsViewWin32Slate(a2) && HolographicPositioner::_IsDisplayContextHolographic(this) )
    {
      v8 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(this, a2, a3, 1);
      if ( v8 < 0 )
      {
        v9 = 2230LL;
        goto LABEL_8;
      }
    }
    return 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 33) + 24LL))(
         *((_QWORD *)this + 33),
         a2,
         4LL);
  if ( v8 >= 0 )
    return 0LL;
  v9 = 2222LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v8,
    v10);
  return (unsigned int)v8;
}
