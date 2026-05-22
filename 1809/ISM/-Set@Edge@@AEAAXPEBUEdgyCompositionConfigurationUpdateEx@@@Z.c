/*
 * XREFs of ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CAD10
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB050 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180027824 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  _QWORD *v4; // rcx
  _WORD *v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = *(_QWORD *)a2;
  v4 = (_QWORD *)((char *)this + 8);
  v5 = (_WORD *)((char *)a2 + 24);
  if ( *((_QWORD *)this + 3) )
  {
    if ( v4[3] >= 8uLL )
      v4 = (_QWORD *)*v4;
    if ( (unsigned int)_o__wcsicmp(v4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x26,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v6);
      JUMPOUT(0x1800CAD75LL);
    }
  }
  else
  {
    std::wstring::operator=(v4, v5);
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
}
