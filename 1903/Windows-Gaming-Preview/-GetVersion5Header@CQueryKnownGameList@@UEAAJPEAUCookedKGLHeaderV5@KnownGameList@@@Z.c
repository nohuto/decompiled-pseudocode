/*
 * XREFs of ?GetVersion5Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV5@KnownGameList@@@Z @ 0x18003EC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion5Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV5 *a2)
{
  __int64 v3; // r8
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = 5LL;
    if ( *((_DWORD *)this + 9) >= 5u )
    {
      v4 = (_OWORD *)((char *)this + 32);
      do
      {
        *(_OWORD *)a2 = *v4;
        *((_OWORD *)a2 + 1) = v4[1];
        *((_OWORD *)a2 + 2) = v4[2];
        *((_OWORD *)a2 + 3) = v4[3];
        *((_OWORD *)a2 + 4) = v4[4];
        *((_OWORD *)a2 + 5) = v4[5];
        *((_OWORD *)a2 + 6) = v4[6];
        a2 = (struct KnownGameList::CookedKGLHeaderV5 *)((char *)a2 + 128);
        v5 = v4[7];
        v4 += 8;
        *((_OWORD *)a2 - 1) = v5;
        --v3;
      }
      while ( v3 );
      *(_OWORD *)a2 = *v4;
      *((_OWORD *)a2 + 1) = v4[1];
      *((_OWORD *)a2 + 2) = v4[2];
      *((_OWORD *)a2 + 3) = v4[3];
      *((_DWORD *)a2 + 16) = *((_DWORD *)v4 + 16);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x277,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x275,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
