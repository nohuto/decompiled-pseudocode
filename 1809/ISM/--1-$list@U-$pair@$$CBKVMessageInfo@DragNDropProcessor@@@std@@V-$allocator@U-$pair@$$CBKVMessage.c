/*
 * XREFs of ??1?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180025D24
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$16 @ 0x18012EC6C (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$16.c)
 * Callees:
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x180022B4C (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::~list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>(
        __int64 a1)
{
  _QWORD *v2; // rsi
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
      DragNDropProcessor::MessageInfo::~MessageInfo((DragNDropProcessor::MessageInfo *)(v2 + 3));
      operator delete(v2, (const struct std::nothrow_t *)0x58);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x58);
}
