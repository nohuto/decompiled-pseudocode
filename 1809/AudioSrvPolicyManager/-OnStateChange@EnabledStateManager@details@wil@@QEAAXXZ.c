/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180006AAC
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180006998 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_ @ 0x180006E10 (_lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180003DA0 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r14
  volatile signed __int32 **Ptr; // rbx
  char *v4; // rbp
  volatile signed __int32 *v5; // rsi
  signed __int32 v6; // r15d
  signed __int32 v7; // eax
  volatile signed __int32 v8; // [rsp+58h] [rbp+10h] BYREF

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[10].Ptr;
    v4 = (char *)Ptr + (((char *)this[11].Ptr - (char *)Ptr) & 0xFFFFFFFFFFFFFFF0uLL);
    while ( Ptr != (volatile signed __int32 **)v4 )
    {
      v5 = Ptr[1];
      if ( *(_DWORD *)Ptr )
      {
        do
        {
          if ( (*v5 & 0x30) == 0 )
            break;
          v7 = *v5;
        }
        while ( v7 != _InterlockedCompareExchange(v5, *v5 & 0xFFFFFFCF, v7) );
      }
      else
      {
        do
        {
          v8 = *v5;
          v8 = *v5;
          v6 = v8;
        }
        while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                                (union wil_details_FeaturePropertyCache *)&v8,
                                0LL)
             && v6 != _InterlockedCompareExchange(v5, v8, v6) );
      }
      Ptr += 2;
    }
    this[11].Ptr = this[10].Ptr;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
