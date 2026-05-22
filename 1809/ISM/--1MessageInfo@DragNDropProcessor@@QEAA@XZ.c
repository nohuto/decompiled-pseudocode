/*
 * XREFs of ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x180022B4C
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180023228 (--1-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??1?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180025D24 (--1-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMessage.c)
 *     ?clear@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x1800260BC (-clear@-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMes.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180026120 (-erase@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ??$_Insert@AEAU?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180026C44 (--$_Insert@AEAU-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$_List_unchecked_iterator@V-.c)
 *     ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180026EB0 (-_Destroy_if_node@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DragNDropProcessor::MessageInfo::~MessageInfo(DragNDropProcessor::MessageInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DragNDropProcessor::MessageInfo::`vftable';
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    DestroyInteractionContext(v2);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
}
