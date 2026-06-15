/*
 * XREFs of ?OnProcessSubmixLazyRequestStatusChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800E4F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixLazyRequestStatusChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 144LL))(a2);
  CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, v3 != 0 ? 1 : -1);
}
