/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180023174
 * Callers:
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x180022F68 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 *     ??1?$unordered_map@KUVelocityData@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x1800230E0 (--1-$unordered_map@KUVelocityData@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocato.c)
 *     ??_GDragNDropProcessorLegacy@@EEAAPEAXI@Z @ 0x1800C8A58 (--_GDragNDropProcessorLegacy@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::~_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>(
        _QWORD *a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx
  _QWORD **v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x18002321ELL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v6 = (_QWORD **)a1[1];
  v7 = *v6;
  *v6 = v6;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v8 = (_QWORD *)a1[1];
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_QWORD *)*v7;
      operator delete(v7, (const struct std::nothrow_t *)0x30);
      v8 = (_QWORD *)a1[1];
      v7 = v9;
    }
    while ( v9 != v8 );
  }
  operator delete(v8, (const struct std::nothrow_t *)0x30);
}
