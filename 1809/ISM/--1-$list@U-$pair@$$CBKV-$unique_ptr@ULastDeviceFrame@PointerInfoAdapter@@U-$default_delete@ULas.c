/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180055340
 * Callers:
 *     ??1PointerInfoAdapter@@UEAA@XZ @ 0x180054818 (--1PointerInfoAdapter@@UEAA@XZ.c)
 *     _PointerInfoAdapter::PointerInfoAdapter_::_1_::dtor$9 @ 0x18013082E (_PointerInfoAdapter--PointerInfoAdapter_--_1_--dtor$9.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180032CE8 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>::~list<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  _QWORD *v5; // rbp

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[3];
      v5 = (_QWORD *)*v2;
      if ( v4 )
      {
        std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(v4 + 1);
        operator delete(v4, (const struct std::nothrow_t *)0x48);
      }
      operator delete(v2, (const struct std::nothrow_t *)0x20);
      v3 = *(_QWORD **)a1;
      v2 = v5;
    }
    while ( v5 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x20);
}
