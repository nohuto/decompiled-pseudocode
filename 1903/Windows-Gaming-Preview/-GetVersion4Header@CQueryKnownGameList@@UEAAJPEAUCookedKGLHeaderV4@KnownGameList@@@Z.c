/*
 * XREFs of ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x18003EC10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x1800439FC (memcpy_s_0.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion4Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV4 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 4u )
    {
      memcpy_s_0(a2, 0x2C0uLL, (char *)this + 32, 0x2C0uLL);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26C,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
