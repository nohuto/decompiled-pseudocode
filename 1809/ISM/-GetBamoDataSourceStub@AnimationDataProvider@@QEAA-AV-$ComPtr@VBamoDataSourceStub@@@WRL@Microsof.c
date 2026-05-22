/*
 * XREFs of ?GetBamoDataSourceStub@AnimationDataProvider@@QEAA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18009BE78
 * Callers:
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180025324 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x180097278 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void (__fastcall ****__fastcall AnimationDataProvider::GetBamoDataSourceStub(
        __int64 a1,
        void (__fastcall ****a2)(__int64),
        __int64 *a3))(__int64)
{
  char v5; // bl
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  DWORD CurrentThreadId; // eax
  const char *v10; // r9
  int v11; // ecx
  const char *v12; // r9
  __int64 i; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  void (__fastcall ***v16)(__int64); // rbx
  void (__fastcall ***v17)(__int64); // rcx
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  v5 = 1;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 16LL);
  v7 = *a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*a3 + 32) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v8 + 136) == CurrentThreadId || *(_DWORD *)(v8 + 24) == CurrentThreadId )
    v5 = 0;
  if ( v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v10);
    JUMPOUT(0x18009BFBDLL);
  }
  v11 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) + 36);
  for ( i = *(_QWORD *)(v7 + 48); i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != v11; i = *(_QWORD *)(i + 48) )
    ;
  if ( i )
    i &= -(__int64)(*(_BYTE *)(i + 32) != 0);
  v14 = i - 16;
  v15 = -i;
  v16 = (void (__fastcall ***)(__int64))(v14 & -(__int64)(v15 != 0));
  if ( *a2 != v16 )
  {
    if ( v16 )
      (**v16)(v14 & -(__int64)(v15 != 0));
    v17 = *a2;
    *a2 = v16;
    if ( v17 )
      (*v17)[1]((__int64)v17);
  }
  if ( !*a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v12);
    __debugbreak();
  }
  v18 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  return a2;
}
