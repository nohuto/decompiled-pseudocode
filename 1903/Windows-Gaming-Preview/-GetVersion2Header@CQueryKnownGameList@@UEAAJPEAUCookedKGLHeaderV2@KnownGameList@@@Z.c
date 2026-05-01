/*
 * XREFs of ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x18003EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x1800439FC (memcpy_s_0.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion2Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV2 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 2u )
    {
      memcpy_s_0(a2, 0x20uLL, (char *)this + 32, 0x20uLL);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x256,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
