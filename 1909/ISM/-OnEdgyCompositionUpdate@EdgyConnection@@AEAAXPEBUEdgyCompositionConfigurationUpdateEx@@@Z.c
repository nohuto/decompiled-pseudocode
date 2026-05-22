/*
 * XREFs of ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x18010037C
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1801003E0 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801017CC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801023B0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

void __fastcall EdgyConnection::OnEdgyCompositionUpdate(
        EdgyConnection *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        __int64 a3,
        const char *a4)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    if ( Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2) < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        171LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        v4);
      JUMPOUT(0x1801003D8LL);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) != 3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        181LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        a4);
      __debugbreak();
    }
    Edges::Remove((EdgyConnection *)((char *)this + 72), a2);
  }
}
