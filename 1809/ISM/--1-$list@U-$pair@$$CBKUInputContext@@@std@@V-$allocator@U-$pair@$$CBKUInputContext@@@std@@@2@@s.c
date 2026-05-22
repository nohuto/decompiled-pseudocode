/*
 * XREFs of ??1?$list@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAA@XZ @ 0x18008C750
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18008706C (--1DWMInputRouter@@MEAA@XZ.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$41 @ 0x180132262 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$41.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned long const,InputContext>>::~list<std::pair<unsigned long const,InputContext>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx

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
      v5 = v2[4];
      if ( v5 )
      {
        v2[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v6 = v2[3];
      if ( v6 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      operator delete(v2, (const struct std::nothrow_t *)0x40);
      v2 = v4;
      v3 = *(_QWORD **)a1;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x40);
}
