/*
 * XREFs of ??1InputStateManager@@MEAA@XZ @ 0x180052CD8
 * Callers:
 *     ??_GInputStateManager@@MEAAPEAXI@Z @ 0x180052C8C (--_GInputStateManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180005EDC (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputStateManager::~InputStateManager(InputStateManager *this)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  char *v11; // r8
  char *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 10);
  for ( i = *((_QWORD *)this + 9); i != v2; i += 16LL )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 16LL))(*(_QWORD *)(i + 8));
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((_QWORD *)this + 8) )
  {
    v16 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), &v16) >= 0 )
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v16 + 48LL))(
        v16,
        L"System\\Input\\DeviceCommandEndpoint",
        1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 144LL))(
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    v5 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 21);
  if ( v8 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((_QWORD *)this + 12);
  v9 = (char *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    v10 = (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
      v11 = (char *)*((_QWORD *)v9 - 1);
      v12 = (char *)(v9 - v11);
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x180052F00LL);
      }
      v9 = v11;
    }
    operator delete(v9, v10);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 6);
  if ( v14 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 5);
  if ( v15 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
