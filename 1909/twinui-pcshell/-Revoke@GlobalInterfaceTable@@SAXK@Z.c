/*
 * XREFs of ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18012821C
 * Callers:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800725A0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180126BFC (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1801460CC (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180129054 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 */

void __fastcall GlobalInterfaceTable::Revoke(unsigned int a1)
{
  if ( a1 )
  {
    if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        a1);
  }
}
