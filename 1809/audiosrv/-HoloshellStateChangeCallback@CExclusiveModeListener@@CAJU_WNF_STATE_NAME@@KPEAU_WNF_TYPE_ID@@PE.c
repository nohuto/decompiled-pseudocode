/*
 * XREFs of ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180119230
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180119E40 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Win.c)
 */

__int64 __fastcall CExclusiveModeListener::HoloshellStateChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        unsigned int *a5,
        unsigned int a6)
{
  __int64 v6; // rdx

  v6 = 3LL;
  if ( a6 == 4 )
    v6 = *a5;
  CExclusiveModeListener::OnHoloshellStateChange(a4, v6, a3);
  return 0LL;
}
