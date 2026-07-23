/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1405B1ED8
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1405B1F90 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1405A70DC (HvGetEffectiveLogSizeCapForHive.c)
 */

char __fastcall CmpIsHiveEligibleForLazyReconcile(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  unsigned int v2; // r10d
  __int64 v3; // r11
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v9; // r11

  if ( (a1[40] & 0x8001) != 0 || !a1[32] || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_DWORD *)(v3 + 176) >= EffectiveLogSizeCapForHive )
    return 1;
  v4 = *(_DWORD *)(v3 + 164);
  v5 = v2;
  if ( v4 == 1 )
    return 1;
  v6 = v2;
  v7 = v2;
  do
  {
    if ( v6 != v4 && *(_BYTE *)(v7 + v3 + 188) == (_BYTE)v2 )
      ++v5;
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  if ( v5
    && (UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(),
        UnbiasedInterruptTime < *(_QWORD *)(v9 + 4184) + 10000000 * (unsigned __int64)(unsigned int)dword_1403FF9B0) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
