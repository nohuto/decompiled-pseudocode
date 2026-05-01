/*
 * XREFs of ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180113330
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18006D7C0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007E940 (-ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_C.c)
 *     _lambda_21ab0f95d81107e5cccfa51f206c78c4_::operator() @ 0x180113080 (_lambda_21ab0f95d81107e5cccfa51f206c78c4_--operator().c)
 *     ?ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801571F0 (-ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveM.c)
 *     ?ActiveZBandChangedForMonitor@CScreenClippingExperienceManager@@EEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18017CE20 (-ActiveZBandChangedForMonitor@CScreenClippingExperienceManager@@EEAAJKKPEAUIImmersiveMonitor@@W4.c)
 * Callees:
 *     <none>
 */

char __fastcall ZBandHelpers::IsBelowImmersiveLauncher(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 == 1 || a1 == 5 || (unsigned int)(a1 - 8) <= 4 )
    return 1;
  return v1;
}
