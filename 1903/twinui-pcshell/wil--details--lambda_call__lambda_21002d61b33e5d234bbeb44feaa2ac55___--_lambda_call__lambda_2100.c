/*
 * XREFs of wil::details::lambda_call__lambda_21002d61b33e5d234bbeb44feaa2ac55___::_lambda_call__lambda_21002d61b33e5d234bbeb44feaa2ac55___ @ 0x18021F17C
 * Callers:
 *     __lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator()_::_1_::dtor$1 @ 0x18021F723 (__lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x180222AE4 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_21002d61b33e5d234bbeb44feaa2ac55___::_lambda_call__lambda_21002d61b33e5d234bbeb44feaa2ac55___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(
      *(PeoplePaneViewManager **)a1,
      **(const unsigned __int16 ***)(a1 + 8));
  }
}
