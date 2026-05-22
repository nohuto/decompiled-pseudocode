/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x180143EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1800273E0 (-lower_bound@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v8[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  *(_DWORD *)v8 = *(_DWORD *)a2;
  v9 = *(_QWORD *)(a2 + 8);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::lower_bound(
    (_QWORD *)(a1 + 40),
    (__int64 **)&v7,
    v8);
  v5 = v7;
  if ( (_QWORD)v7 != *(_QWORD *)(a1 + 48) )
  {
    v7 = *a3;
    *(_OWORD *)(*(_QWORD *)(v5 + 32) + 104LL) = v7;
  }
  return 0LL;
}
