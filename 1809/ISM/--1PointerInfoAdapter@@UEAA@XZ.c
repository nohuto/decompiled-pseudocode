/*
 * XREFs of ??1PointerInfoAdapter@@UEAA@XZ @ 0x180054818
 * Callers:
 *     ??_GPointerInfoAdapter@@UEAAPEAXI@Z @ 0x18005470C (--_GPointerInfoAdapter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@KUtagPOINTER_INFO_UNION@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180054764 (--1-$_Hash@V-$_Umap_traits@KUtagPOINTER_INFO_UNION@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_t.c)
 *     ??1?$list@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180055340 (--1-$list@U-$pair@$$CBKV-$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U-$default_delete@ULas.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PointerInfoAdapter::~PointerInfoAdapter(PointerInfoAdapter *this)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PointerInfoAdapter::`vftable'{for `IInputClient'};
  *((_QWORD *)this + 1) = &PointerInfoAdapter::`vftable'{for `RefCountedObject'};
  v2 = (char *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800548BCLL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  std::list<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>::~list<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>((char *)this + 120);
  std::_Hash<std::_Umap_traits<unsigned long,tagPOINTER_INFO_UNION,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>,0>>::~_Hash<std::_Umap_traits<unsigned long,tagPOINTER_INFO_UNION,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>,0>>((_QWORD *)this + 4);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
