/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@2@@Z @ 0x180008900
 * Callers:
 *     _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001520 (_dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  const struct std::nothrow_t *v11; // rdx
  _BYTE *v12; // rcx
  size_t v13; // rdi
  size_t v14; // rcx
  _BYTE *v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 *i; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 j; // rbp
  unsigned __int64 *v23; // r8
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx

  v3 = *(unsigned __int64 **)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = a2;
  if ( a2 > v7 )
  {
    if ( a2 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v9 = v7 >> 1;
      if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
      {
        v10 = v9 + v7;
        if ( v9 + v7 < v8 )
          v10 = v8;
      }
      else
      {
        v10 = v8;
      }
      if ( v3 )
      {
        v11 = (const struct std::nothrow_t *)(8 * v7);
        if ( 8 * v7 >= 0x1000 )
        {
          v12 = (_BYTE *)*(v3 - 1);
          v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
          if ( (unsigned __int64)((char *)v3 - v12 - 8) > 0x1F )
            goto LABEL_18;
          v3 = (unsigned __int64 *)*(v3 - 1);
        }
        operator delete(v3, v11);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v10 )
        goto LABEL_24;
      if ( v10 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v13 = 8 * v10;
        if ( v13 < 0x1000 )
        {
          if ( v13 )
            v16 = operator new(v13);
          else
            v16 = 0LL;
        }
        else
        {
          v14 = v13 + 39;
          if ( v13 + 39 < v13 )
            v14 = -1LL;
          v15 = operator new(v14);
          v12 = v15;
          if ( !v15 )
          {
LABEL_18:
            _o__invalid_parameter_noinfo_noreturn(v12, v11);
            __debugbreak();
          }
          v16 = (_QWORD *)((unsigned __int64)(v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v16 - 1) = v12;
        }
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(a1 + 8) = v16;
        *(_QWORD *)(a1 + 16) = v13 + *(_QWORD *)a1;
LABEL_24:
        for ( i = *(unsigned __int64 **)a1; v8; --v8 )
          *i++ = *a3;
LABEL_41:
        *(_QWORD *)(a1 + 8) = i;
        return;
      }
    }
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  }
  v18 = 0LL;
  if ( a2 > v6 )
  {
    v19 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
      v19 = 0LL;
    if ( v19 )
    {
      if ( v19 >= 2 && (v3 > a3 || &v3[v19 - 1] < a3) )
      {
        v20 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v18 += 2LL;
        while ( v18 != v20 );
        v21 = 8 * v20;
        memset64(v3, *a3, v21 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v21);
      }
      while ( v18 != v19 )
      {
        ++v18;
        *v3++ = *a3;
      }
    }
    i = *(unsigned __int64 **)(a1 + 8);
    for ( j = v8 - v6; j; --j )
      *i++ = *a3;
    goto LABEL_41;
  }
  v23 = &v3[a2];
  v24 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v3 > v23 )
    v24 = 0LL;
  if ( v24 )
  {
    if ( v24 >= 2 && (v3 > a3 || &v3[v24 - 1] < a3) )
    {
      v25 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v18 += 2LL;
      while ( v18 != v25 );
      v26 = 8 * v25;
      memset64(v3, *a3, v26 >> 3);
      v3 = (unsigned __int64 *)((char *)v3 + v26);
    }
    while ( v18 != v24 )
    {
      ++v18;
      *v3++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v23;
}
