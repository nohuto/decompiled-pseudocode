/*
 * XREFs of ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18000DC30
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x18000EB40 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     ??A?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAAAEAUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18000EE04 (--A-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnPropertyChanged(ViewHierarchy *this, struct IMessageProxy *a2, __int16 a3)
{
  int (__fastcall **v6)(struct IMessageProxy *, GUID *, __int64 *); // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rsi
  int v11; // r12d
  char v12; // r13
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // eax
  int v23; // eax
  _BYTE v24[8]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v25; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v27; // [rsp+78h] [rbp+48h] BYREF
  int v28; // [rsp+88h] [rbp+58h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *(int (__fastcall ***)(struct IMessageProxy *, GUID *, __int64 *))a2;
  v25 = 0LL;
  if ( (*v6)(a2, &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa, &v25) >= 0 && (a3 == 15 || a3 == 17) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 120LL))(v25, v24);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x87,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 144LL))(v25, &v28);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 160LL))(v25, &v27);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x18000DEDDLL);
    }
    v10 = v25;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v11 = v28;
    v12 = v27;
    v13 = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::operator[]((char *)this + 96, v24);
    v14 = *(_QWORD *)v13;
    *(_QWORD *)v13 = v10;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *(_DWORD *)(v13 + 8) = v11;
    *(_BYTE *)(v13 + 12) = v12;
  }
  if ( *((struct IMessageProxy **)this + 8) == a2 )
  {
    if ( a3 == 1 )
    {
      (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16, &v27);
      v17 = v27;
      v18 = (_DWORD *)((char *)this + 200);
      if ( v27 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 120LL))(v27, v18);
        v17 = v27;
      }
      else
      {
        *v18 = 0;
      }
      if ( v17 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    else if ( a3 != 2 )
    {
      goto LABEL_17;
    }
    v19 = (_QWORD *)((char *)this + 80);
    if ( !*((_QWORD *)this + 10) )
    {
      ViewHierarchy::RemoveListListenerReference(this);
      v20 = *v19;
      v21 = *((_QWORD *)this + 9);
      if ( *v19 )
      {
        *v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 40LL))(v21, (char *)this + 80);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v22);
        __debugbreak();
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v19 + 64LL))(*v19, (char *)this + 8);
      if ( v23 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v23);
        __debugbreak();
      }
    }
  }
LABEL_17:
  v15 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
