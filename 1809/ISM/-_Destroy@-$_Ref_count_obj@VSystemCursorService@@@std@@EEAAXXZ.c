/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSystemCursorService@@@std@@EEAAXXZ @ 0x180093260
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180093024 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$le_ea_180093024.c)
 *     ?clear@?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180093508 (-clear@-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_K.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<SystemCursorService>::_Destroy(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // r8
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(volatile signed __int32 **)(a1 + 200);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::erase(
    (__int64 ***)(a1 + 176),
    &v13,
    **(__int64 ***)(a1 + 176),
    *(__int64 **)(a1 + 176));
  operator delete(*(void **)(a1 + 176), (const struct std::nothrow_t *)0x38);
  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 168) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 160) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(char **)(a1 + 128);
  if ( v5 )
  {
    v6 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 144) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = (char *)*((_QWORD *)v5 - 1);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
        goto LABEL_24;
      v5 = v7;
    }
    operator delete(v5, v6);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v9 = *(char **)(a1 + 88);
  if ( !v9 )
    goto LABEL_18;
  v6 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 104) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (unsigned __int64)v6 >= 0x1000 )
  {
    v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
    v10 = (char *)*((_QWORD *)v9 - 1);
    v8 = (char *)(v9 - v10);
    if ( (unsigned __int64)(v8 - 8) <= 0x1F )
    {
      v9 = v10;
      goto LABEL_17;
    }
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v8, v6);
    JUMPOUT(0x18009341ALL);
  }
LABEL_17:
  operator delete(v9, v6);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
LABEL_18:
  std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::clear(a1 + 72);
  operator delete(*(void **)(a1 + 72), (const struct std::nothrow_t *)0x28);
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *(volatile signed __int32 **)(a1 + 32);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  }
}
