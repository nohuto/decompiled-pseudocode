/*
 * XREFs of ??$insert_or_assign@V?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@1@@Z @ 0x180055A50
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180054B20 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180032CE8 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??$_Insert@AEAU?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x180055D8C (--$_Insert@AEAU-$pair@$$CBKV-$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U-$default_delete@.c)
 *     ??$_Buynode@AEBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@?$_List_buy@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@PEAX@1@PEAU21@0AEBK$$QEAV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@1@@Z @ 0x1800564C0 (--$_Buynode@AEBKV-$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U-$default_delete@ULastDevice.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>::insert_or_assign<std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 *i; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // r14
  __int64 Device; // rdx
  __int64 v19; // rax
  _QWORD **v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)a3 + v6++);
    v7 = 0x100000001B3LL * (v8 ^ v7);
  }
  while ( v6 < 4 );
  v9 = a1[3];
  v10 = (__int64 *)a1[1];
  v11 = v7 & a1[6];
  v12 = 2 * v11;
  for ( i = *(__int64 **)(v9 + 16 * v11); ; i = (__int64 *)*i )
  {
    v14 = *(__int64 **)(v9 + 8 * v12) == v10 ? (__int64 *)a1[1] : **(__int64 ***)(v9 + 8 * v12 + 8);
    if ( i == v14 )
      break;
    if ( *((_DWORD *)i + 4) == *a3 )
    {
      v15 = i;
      goto LABEL_12;
    }
  }
  i = (__int64 *)a1[1];
  v15 = i;
LABEL_12:
  if ( v15 == v10 )
  {
    v16 = *v10;
    v17 = *(__int64 **)(*v10 + 8);
    Device = std::_List_buy<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>::_Buynode<unsigned long const &,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>(
               (_DWORD)v10,
               *v10,
               (_DWORD)v17,
               (_DWORD)a3,
               (__int64)a4);
    v19 = a1[2];
    if ( v19 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v19 + 1;
    *(_QWORD *)(v16 + 8) = Device;
    *v17 = Device;
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>,0>>::_Insert<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    v20 = (_QWORD **)(i + 3);
    if ( i + 3 != a4 )
    {
      v21 = (_QWORD *)*a4;
      *a4 = 0LL;
      v22 = *v20;
      *v20 = v21;
      if ( v22 )
      {
        std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(v22 + 1);
        operator delete(v22, (const struct std::nothrow_t *)0x48);
      }
    }
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
