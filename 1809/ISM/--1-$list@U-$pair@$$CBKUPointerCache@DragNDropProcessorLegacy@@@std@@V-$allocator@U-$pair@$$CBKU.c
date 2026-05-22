/*
 * XREFs of ??1?$list@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@2@@std@@QEAA@XZ @ 0x180025950
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$26 @ 0x18012EC56 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$26.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$10 @ 0x180134012 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>::~list<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>(
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
      operator delete(v2, (const struct std::nothrow_t *)0x30);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x30);
}
