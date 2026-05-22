/*
 * XREFs of ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1800CA2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB050 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB260 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall EdgyConnection::OnEdgyCompositionUpdateStatic(
        char *a1,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        int a3)
{
  const char *v3; // r9
  const char *v4; // r9
  const char *v6; // r9
  unsigned int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (const char *)*((unsigned int *)a2 + 2);
  if ( (int)v3 >= 0 )
  {
    if ( (int)v3 <= 1 )
    {
      v7 = wil::verify_hresult<long>(0x80004001);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)v7);
      __debugbreak();
    }
    if ( (int)v3 <= 3 )
    {
      if ( a3 != 152 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x99,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
          v3);
        __debugbreak();
      }
      v4 = (const char *)(unsigned int)((_DWORD)v3 - 2);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 != 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB5,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
            v4);
          __debugbreak();
        }
        Edges::Remove((Edges *)(a1 + 72), a2);
      }
      else if ( Edges::AddOrUpdate((Edges *)(a1 + 72), a2) < 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xAB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
          v6);
        JUMPOUT(0x1800CA385LL);
      }
    }
  }
  return 0LL;
}
