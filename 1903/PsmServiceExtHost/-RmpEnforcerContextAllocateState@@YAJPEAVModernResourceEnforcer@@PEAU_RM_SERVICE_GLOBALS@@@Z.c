/*
 * XREFs of ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044438
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180043494 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcerContextAllocateState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int64 result; // rax

  result = TpAllocTimer((char *)a2 + 128, RmpPowerBoostWatchdogCallback, a2, 0LL);
  if ( (int)result >= 0 )
  {
    result = TpAllocTimer((char *)a2 + 160, RmpPowerBoostTimedBoostCallback, a2, 0LL);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      result = TpAllocTimer((char *)a2 + 192, RmpQoSWatchdogCallback, (char *)a2 + 176, 0LL);
      if ( (int)result >= 0 )
        result = 0LL;
      if ( (int)result >= 0 )
      {
        result = TpAllocTimer((char *)a2 + 48, RmpGpuMonitorTimerCallback, a2, 0LL);
        if ( (int)result >= 0 )
          result = 0LL;
        if ( (int)result >= 0 )
        {
          result = TpAllocWork((char *)a2 + 216, RmpOfferLazyDecommitWorkerCallback, (char *)a2 + 216, 0LL);
          if ( (int)result >= 0 )
            result = 0LL;
          if ( (int)result >= 0 )
          {
            if ( a1 )
            {
              *((_QWORD *)a2 + 5) = a1;
              (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
