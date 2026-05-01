/*
 * XREFs of ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803C5568
 * Callers:
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18001F2DC (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_9c62f3b5701c9499264b0d41582b2215_::operator() @ 0x1803C0134 (_lambda_9c62f3b5701c9499264b0d41582b2215_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDesktopPositioner::_IsViewTabbed(CDesktopPositioner *this, struct IApplicationView *a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 39);
  v3 = 0;
  if ( !v2 )
    return 0;
  if ( (*(int (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v2 + 72LL))(v2, a2, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
