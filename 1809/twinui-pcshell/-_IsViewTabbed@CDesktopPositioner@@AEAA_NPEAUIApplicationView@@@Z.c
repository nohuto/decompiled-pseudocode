/*
 * XREFs of ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180341138
 * Callers:
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180028708 (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_f4a572d4522d0cfba348286ca4c2df10_::operator() @ 0x18033C1B8 (_lambda_f4a572d4522d0cfba348286ca4c2df10_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  if ( (*(int (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v2 + 64LL))(v2, a2, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
