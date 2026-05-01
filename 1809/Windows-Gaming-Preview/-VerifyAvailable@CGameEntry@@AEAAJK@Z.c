/*
 * XREFs of ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x1800404B8
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003FFF0 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x180040400 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x1800404F4 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x180040574 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::VerifyAvailable(CGameEntry *this, unsigned int a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 <= *((_DWORD *)this + 8) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x582,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL);
  return 2147483659LL;
}
