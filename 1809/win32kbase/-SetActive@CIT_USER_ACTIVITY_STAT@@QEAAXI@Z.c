/*
 * XREFs of ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0036068
 * Callers:
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0036030 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00360A8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077010 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C00964B0 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CIT_USER_ACTIVITY_STAT::SetActive(CIT_USER_ACTIVITY_STAT *this, int a2)
{
  int v2; // r8d

  if ( *((_DWORD *)this + 1) >> 31 != a2 )
  {
    v2 = (a2 << 31) | *((_DWORD *)this + 1) & 0x7FFFFFFF;
    *((_DWORD *)this + 1) = v2;
    if ( a2 )
      *((_DWORD *)this + 1) = v2 ^ (v2 ^ (v2 + 1)) & 0x7FFFFFFF;
  }
}
