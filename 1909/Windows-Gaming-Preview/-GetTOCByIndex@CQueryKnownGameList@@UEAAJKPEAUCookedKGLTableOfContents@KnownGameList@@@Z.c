/*
 * XREFs of ?GetTOCByIndex@CQueryKnownGameList@@UEAAJKPEAUCookedKGLTableOfContents@KnownGameList@@@Z @ 0x18003E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetTOCByIndex(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::CookedKGLTableOfContents *a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a2 < *((_DWORD *)this + 200) )
    {
      result = 0LL;
      *(_OWORD *)a3 = *(_OWORD *)(a2 * *((_DWORD *)this + 13) + *((_QWORD *)this + 93));
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL);
      return 2147483659LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22B,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  return result;
}
