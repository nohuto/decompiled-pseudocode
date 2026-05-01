/*
 * XREFs of ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180033D18
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180033730 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077BDC (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInSystemState(__int64 a1, int *a2)
{
  int v3; // esi

  v3 = *a2;
  if ( (a2[1] & 0xC) != 0 )
  {
    return 7;
  }
  else if ( (a2[1] & 2) != 0 && (*(_BYTE *)(a1 + 116) & 4) != 0 )
  {
    return 1;
  }
  else if ( ((*(_BYTE *)(a1 + 116) & 8) != 0 || (*(_DWORD *)(a1 + 112) & 0x400) != 0)
         && (a2[1] & 1) != 0
         && HampHostShouldDplPolicyApply(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80)) )
  {
    return 2;
  }
  else if ( (v3 & 8) != 0 && (*(_BYTE *)(a1 + 116) & 2) != 0 )
  {
    return 3;
  }
  else if ( (v3 & 0x20) != 0 && (*(_BYTE *)(a1 + 116) & 1) != 0 )
  {
    return 4;
  }
  else if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 116) & 0x10) == 0 )
  {
    if ( (v3 & 0x10) != 0 && (*(_BYTE *)(a1 + 116) & 0x20) != 0 )
      return 6;
    else
      return 0;
  }
  else
  {
    return 5;
  }
}
