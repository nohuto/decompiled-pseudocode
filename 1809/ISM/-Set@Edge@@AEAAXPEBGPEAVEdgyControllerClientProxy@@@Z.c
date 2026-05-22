/*
 * XREFs of ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1800CAD7C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1800CB158 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180027824 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Edge::Set(Edge *this, unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  _QWORD *v5; // rcx
  const char *v6; // r9
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (_QWORD *)((char *)this + 8);
  if ( *((_QWORD *)this + 3) )
  {
    if ( v5[3] >= 8uLL )
      v5 = (_QWORD *)*v5;
    if ( (unsigned int)_o__wcsicmp(v5) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x42,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v6);
      JUMPOUT(0x1800CAE22LL);
    }
  }
  else
  {
    std::wstring::operator=(v5, a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( !a3 || a3 != *((struct EdgyControllerClientProxy **)this + 5) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v6);
      __debugbreak();
    }
  }
  else if ( a3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a3 + 6);
    v7 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a3;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))(v7 + 16))(v7 + 16);
  }
}
