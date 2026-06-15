/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x1800470E0
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180047ED0 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800E206C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800E24E0 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBF20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800E60F8 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  const struct std::nothrow_t *v5; // rdx
  void *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rbp
  _BYTE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  void *v17; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v14 = *((_QWORD *)this + 9);
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v14 + 56));
  }
  v3 = (__int64 *)*((_QWORD *)this + 27);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 28);
    if ( v3 != v4 )
    {
      do
      {
        v15 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (__int64 *)*((_QWORD *)this + 27);
    }
    v5 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 29) - (_QWORD)v3) >> 3));
    v16 = (unsigned __int64)v5;
    v17 = v3;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v17, &v16);
      v5 = (const struct std::nothrow_t *)v16;
      v3 = (__int64 *)v17;
    }
    operator delete(v3, v5);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 24);
  if ( v6 )
  {
    v7 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 26) - (_QWORD)v6) >> 3));
    v16 = (unsigned __int64)v7;
    v17 = v6;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v17, &v16);
      v7 = (const struct std::nothrow_t *)v16;
      v6 = v17;
    }
    operator delete(v6, v7);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_BYTE **)(v11 + 8);
    v13 = v12;
    if ( !v12[25] )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Erase(
          v10 + 40,
          *((_QWORD *)v13 + 2));
        v13 = *(_BYTE **)v13;
        std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x28);
        v12 = v13;
      }
      while ( !v13[25] );
      v11 = *(_QWORD *)(v10 + 40);
    }
    *(_QWORD *)(v11 + 8) = v11;
    **(_QWORD **)(v10 + 40) = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(*(_QWORD *)(v10 + 40) + 16LL) = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 48) = 0LL;
    operator delete(*(void **)(v10 + 40), (const struct std::nothrow_t *)0x28);
    DeleteCriticalSection((LPCRITICAL_SECTION)v10);
    operator delete((void *)v10, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 9) = 0LL;
  operator delete(*((void **)this + 8), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 8) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
