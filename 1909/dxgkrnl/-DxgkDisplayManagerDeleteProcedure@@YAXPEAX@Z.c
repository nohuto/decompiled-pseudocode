/*
 * XREFs of ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C014C150
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C014C18C (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 */

void __fastcall DxgkDisplayManagerDeleteProcedure(ReferenceCounted **a1)
{
  DXGDISPLAYMANAGEROBJECT *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  ReferenceCounted *v5; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DXGDISPLAYMANAGEROBJECT::Invalidate(v2);
    ReferenceCounted::Release(*a1, v3, v4);
    *a1 = 0LL;
  }
  v5 = a1[1];
  if ( v5 )
  {
    (**(void (__fastcall ***)(ReferenceCounted *, __int64))v5)(v5, 1LL);
    a1[1] = 0LL;
  }
}
