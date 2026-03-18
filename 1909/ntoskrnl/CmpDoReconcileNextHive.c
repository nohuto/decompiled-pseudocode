/*
 * XREFs of CmpDoReconcileNextHive @ 0x140691010
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14068FAD0 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140691124 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406E813C (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // bp
  unsigned __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 *NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r14
  unsigned __int64 v10; // rcx
  unsigned int EffectiveLogSizeCapForHive; // eax

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_1404249B4;
  if ( !BYTE1(NlsMbCodePageTag) )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v6);
      if ( !NextActiveHive )
        break;
      v8 = -1LL;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
      {
        EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive((unsigned int *)NextActiveHive);
        if ( (int)CmpFlushHive(
                    (ULONG_PTR)NextActiveHive,
                    *((_DWORD *)NextActiveHive + 44) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_1404249BC;
        }
      }
      else if ( *((_DWORD *)NextActiveHive + 32) )
      {
        if ( (NextActiveHive[20] & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = NextActiveHive[523] + 10000000LL * (unsigned int)dword_1404249B0;
          if ( UnbiasedInterruptTime < v10 )
            v8 = v10 - UnbiasedInterruptTime;
        }
      }
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( v8 >= v3 )
        v8 = v3;
      v3 = v8;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
