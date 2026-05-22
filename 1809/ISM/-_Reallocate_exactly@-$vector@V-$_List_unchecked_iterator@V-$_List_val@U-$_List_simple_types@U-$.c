/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180008CF0
 * Callers:
 *     _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001520 (_dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>>>>::_Reallocate_exactly(
        char **a1,
        unsigned __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  size_t v5; // rax
  __int64 v6; // r8
  size_t v7; // rcx
  void *v8; // rax
  const struct std::nothrow_t *v9; // rdx
  char *v10; // rcx
  char *v11; // rbx
  char *v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  signed __int64 v15; // r8
  char *v16; // rcx
  char *v17; // r8
  char *result; // rax

  v3 = (a1[1] - *a1) >> 3;
  v4 = 8 * a2;
  v5 = 8 * a2;
  v6 = -1LL;
  if ( a2 <= 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  while ( 1 )
  {
    v5 = v6;
LABEL_3:
    if ( v5 < 0x1000 )
    {
      v11 = v5 ? (char *)operator new(v5) : 0LL;
    }
    else
    {
      v7 = v5 + 39;
      if ( v5 + 39 < v5 )
        v7 = v6;
      v8 = operator new(v7);
      if ( !v8 )
        goto LABEL_23;
      v11 = (char *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v11 - 1) = v8;
    }
    try
    {
      v12 = *a1;
      v13 = 0LL;
      v14 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
      if ( *a1 > a1[1] )
        v14 = 0LL;
      if ( v14 )
      {
        v15 = v11 - v12;
        do
        {
          *(_QWORD *)&v12[v15] = *(_QWORD *)v12;
          v12 += 8;
          ++v13;
        }
        while ( v13 != v14 );
      }
    }
    catch ( ... )
    {
      std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
        (__int64)v12,
        v11,
        a2);
      throw;
    }
    v16 = *a1;
    if ( !*a1 )
      goto LABEL_22;
    v9 = (const struct std::nothrow_t *)((a1[2] - v16) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v9 < 0x1000 )
      goto LABEL_21;
    v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
    v17 = (char *)*((_QWORD *)v16 - 1);
    v10 = (char *)(v16 - v17);
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
      break;
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v10, v9);
  }
  v16 = v17;
LABEL_21:
  operator delete(v16, v9);
LABEL_22:
  *a1 = v11;
  a1[1] = &v11[8 * v3];
  result = &v11[v4];
  a1[2] = &v11[v4];
  return result;
}
