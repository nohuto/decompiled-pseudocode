/*
 * XREFs of ??1ViewHierarchy@@UEAA@XZ @ 0x18000D758
 * Callers:
 *     ??_EViewHierarchy@@UEAAPEAXI@Z @ 0x18000D5E0 (--_EViewHierarchy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x18000EB40 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000EB8C (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ??1?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAA@XZ @ 0x18000EC40 (--1-$list@U-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$allocator@U-$pair@$$CBIUViewH.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewHierarchy::~ViewHierarchy(ViewHierarchy *this)
{
  void *v2; // rcx
  const char *v3; // r9
  char *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  char *v6; // r8
  char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &ViewHierarchy::`vftable';
  *((_QWORD *)this + 1) = &ViewHierarchy::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 2) = &ViewHierarchy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IViewHierarchy>'};
  ViewHierarchy::RemoveListListenerReference(this);
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 && !CloseHandle(v2) )
    goto LABEL_22;
  std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>((char *)this + 168);
  v4 = (char *)*((_QWORD *)this + 15);
  if ( !v4 )
    goto LABEL_8;
  v5 = (const struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (unsigned __int64)v5 >= 0x1000 )
  {
    v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
    v6 = (char *)*((_QWORD *)v4 - 1);
    v7 = (char *)(v4 - v6);
    if ( (unsigned __int64)(v7 - 8) <= 0x1F )
    {
      v4 = v6;
      goto LABEL_7;
    }
    _o__invalid_parameter_noinfo_noreturn(v7, v5);
LABEL_22:
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v3);
    JUMPOUT(0x18000D8ECLL);
  }
LABEL_7:
  operator delete(v4, v5);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
LABEL_8:
  std::list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::~list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>((char *)this + 104);
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
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 8);
  if ( v11 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 7);
  if ( v12 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 6);
  if ( v13 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_DWORD *)this + 7) = -1073741823;
}
