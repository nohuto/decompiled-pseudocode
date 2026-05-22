/*
 * XREFs of ??1?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180093464
 * Callers:
 *     _std::_Ref_count_obj_SystemCursorService_::_Ref_count_obj_SystemCursorService__SystemCursorController_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$2 @ 0x18013298C (_std--_Ref_count_obj_SystemCursorService_--_Ref_count_obj_SystemCursorService__Syst_ea_18013298C.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180093508 (-clear@-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_K.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::~unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800934D8LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::clear(a1 + 8);
  operator delete(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
