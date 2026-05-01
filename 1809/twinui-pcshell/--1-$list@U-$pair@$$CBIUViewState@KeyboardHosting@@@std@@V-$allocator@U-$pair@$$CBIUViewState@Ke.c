/*
 * XREFs of ??1?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA@XZ @ 0x1802C0A44
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$37 @ 0x1802C09D9 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$37.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::~list<std::pair<unsigned int const,KeyboardHosting::ViewState>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x48);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x48);
}
