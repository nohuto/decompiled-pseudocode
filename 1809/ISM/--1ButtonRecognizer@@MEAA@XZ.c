/*
 * XREFs of ??1ButtonRecognizer@@MEAA@XZ @ 0x1800C57E0
 * Callers:
 *     ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x1800C59F0 (--_GButtonRecognizer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@0@Z @ 0x1800C6F30 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ButtonRecognizer::~ButtonRecognizer(ButtonRecognizer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  char *v11; // r8
  char *v12; // rcx
  char *v13; // rcx
  char *v14; // r8
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &ButtonRecognizer::`vftable';
  *((_DWORD *)this + 6) = 0;
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 24);
  if ( v4 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((_QWORD *)this + 22) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 144LL))(*((_QWORD *)this + 21));
  *((_QWORD *)this + 22) = 0LL;
  v6 = *((_QWORD *)this + 21);
  if ( v6 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (char *)*((_QWORD *)this + 11);
  if ( v9 )
  {
    v10 = (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
      v11 = (char *)*((_QWORD *)v9 - 1);
      v12 = (char *)(v9 - v11);
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
        goto LABEL_28;
      v9 = v11;
    }
    operator delete(v9, v10);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v13 = (char *)*((_QWORD *)this + 6);
  if ( v13 )
  {
    v10 = (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v10 < 0x1000 )
    {
LABEL_26:
      operator delete(v13, v10);
      *((_QWORD *)this + 6) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      goto LABEL_27;
    }
    v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
    v14 = (char *)*((_QWORD *)v13 - 1);
    v12 = (char *)(v13 - v14);
    if ( (unsigned __int64)(v12 - 8) <= 0x1F )
    {
      v13 = v14;
      goto LABEL_26;
    }
LABEL_28:
    _o__invalid_parameter_noinfo_noreturn(v12, v10);
    JUMPOUT(0x1800C59E5LL);
  }
LABEL_27:
  std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
    (char *)this + 32,
    &v15,
    **((_QWORD **)this + 4));
  operator delete(*((void **)this + 4), (const struct std::nothrow_t *)0x70);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
