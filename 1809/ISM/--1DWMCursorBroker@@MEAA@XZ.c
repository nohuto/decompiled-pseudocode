/*
 * XREFs of ??1DWMCursorBroker@@MEAA@XZ @ 0x180105E38
 * Callers:
 *     ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x180105DEC (--_GDWMCursorBroker@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180065198 (--1-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessage.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMCursorBroker::~DWMCursorBroker(DWMCursorBroker *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v2 = (_QWORD *)((char *)this + 216);
  v3 = 10LL;
  do
  {
    if ( *v2 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 144LL))(*((_QWORD *)this + 22));
      *v2 = 0LL;
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, (char *)this + 16);
  v5 = (_QWORD *)*((_QWORD *)this + 49);
  if ( v5 )
  {
    v6 = 84 * ((*((_QWORD *)this + 51) - (_QWORD)v5) / 84LL);
    if ( v6 >= 0x1000 )
    {
      v6 += 39LL;
      v7 = *(v5 - 1);
      if ( (unsigned __int64)v5 - v7 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x18010605BLL);
      }
      v5 = (_QWORD *)*(v5 - 1);
    }
    operator delete(v5, (const struct std::nothrow_t *)v6);
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
  }
  v8 = *((_QWORD *)this + 48);
  if ( v8 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 25);
  if ( v9 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 24);
  if ( v10 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 22);
  if ( v12 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>((_QWORD *)this + 14);
  std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>((_QWORD *)this + 6);
  v13 = *((_QWORD *)this + 5);
  if ( v13 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
