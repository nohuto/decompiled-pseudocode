/*
 * XREFs of ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A75EC
 * Callers:
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006E0FC (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A766C (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___ @ 0x1800A8B4C (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc11095.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::CommonHelper::UnregisterTask(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h]

  v7 = a2;
  v6 = a1;
  v5[0] = &v6;
  v5[1] = a2;
  result = CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___(v5);
  v4 = *(volatile signed __int32 **)(a2 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
