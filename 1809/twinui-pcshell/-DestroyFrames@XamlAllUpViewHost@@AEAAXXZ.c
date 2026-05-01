/*
 * XREFs of ?DestroyFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18026F310
 * Callers:
 *     ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x18027CAE0 (-v_DismissView@XamlAllUpViewHost@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x1802682F0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1802682F0.c)
 */

void __fastcall XamlAllUpViewHost::DestroyFrames(MonitorFrame ***this)
{
  MonitorFrame **v2; // rsi
  MonitorFrame **v3; // rbx
  MonitorFrame *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___(
    (__int64)&v5,
    this[41],
    this[42]);
  v2 = this[42];
  v3 = this[41];
  if ( v3 != v2 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != v2 );
    v3 = this[41];
  }
  this[42] = v3;
}
