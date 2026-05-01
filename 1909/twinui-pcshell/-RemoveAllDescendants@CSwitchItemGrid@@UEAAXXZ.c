/*
 * XREFs of ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x180389140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180384D50 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x180389288 (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::RemoveAllDescendants(CSwitchItemGrid *this)
{
  char *v1; // rdi

  v1 = (char *)this + 208;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 26) + 56LL))((char *)this + 208);
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 768));
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 64LL))(v1);
}
