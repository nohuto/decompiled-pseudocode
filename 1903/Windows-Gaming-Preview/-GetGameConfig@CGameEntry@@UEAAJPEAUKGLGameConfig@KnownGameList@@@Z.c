/*
 * XREFs of ?GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z @ 0x1800400E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x180040CB4 (-InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z.c)
 */

__int64 __fastcall CGameEntry::GetGameConfig(CGameEntry *this, struct KnownGameList::KGLGameConfig *a2)
{
  int inited; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    inited = -2147467261;
    v3 = 1214LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = InitGameConfigFromEntry(this, a2);
  if ( inited < 0 )
  {
    v3 = 1216LL;
    goto LABEL_3;
  }
  return 0LL;
}
