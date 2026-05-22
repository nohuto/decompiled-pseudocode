/*
 * XREFs of ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800276D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1800CBF98 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnDisconnected(EdgyControllerClientProxy *this)
{
  const unsigned __int16 *v1; // rdx
  __int64 v3; // rsi
  int Edge; // eax
  const char *v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (const unsigned __int16 *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  v3 = *(_QWORD *)(*((_QWORD *)this + 15) + 56LL);
  Edge = Edges::FindEdge((Edges *)(v3 + 72), v1);
  if ( Edge < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18002781DLL);
  }
  v6 = 0;
  v7 = 104LL * Edge;
  v8 = *(_QWORD *)(v3 + 72);
  if ( *(_QWORD *)(v8 + v7 + 24) )
  {
    LOBYTE(v6) = *(_QWORD *)(v8 + v7 + 40) != 0LL;
    if ( *(_DWORD *)(v8 + v7 + 64) )
      v6 = 2;
  }
  if ( (unsigned __int8)(v6 >> 1) )
  {
    v10 = *(_QWORD *)(v8 + v7 + 40);
    if ( v10 )
    {
      *(_QWORD *)(v8 + v7 + 40) = 0LL;
      (**(void (__fastcall ***)(__int64))(v10 + 16))(v10 + 16);
    }
  }
  else
  {
    if ( this != *(EdgyControllerClientProxy **)(v8 + v7 + 40) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x181,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v5);
      __debugbreak();
    }
    v9 = (_QWORD *)(v7 + v8 + 8);
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    std::wstring::wstring(v14, v9);
    std::vector<Edge>::erase(v3 + 72, v13, v7 + *(_QWORD *)(v3 + 72));
    std::wstring::~wstring(v14);
  }
  v11 = *((_QWORD *)this + 15);
  if ( v11 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (**(void (__fastcall ***)(__int64))(v11 + 16))(v11 + 16);
  }
  return 0LL;
}
