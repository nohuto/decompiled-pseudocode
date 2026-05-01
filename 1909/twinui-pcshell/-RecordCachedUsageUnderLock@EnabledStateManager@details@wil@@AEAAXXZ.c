/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180086814
 * Callers:
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180082448 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800E9760 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180121280 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800823D4 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801238E8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int *v4; // rdi
  __int64 v6; // rbx
  unsigned int *v7; // rbx
  union wil_details_FeaturePropertyCache *v8; // rcx
  unsigned int *v9; // rsi
  unsigned int v10; // r8d
  const char *v11; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v13[64]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+80h] [rbp-18h] BYREF

  v4 = (unsigned int *)*((_QWORD *)this + 6);
  v6 = (*((_QWORD *)this + 7) - (_QWORD)v4) >> 4;
  if ( v6 )
  {
    v7 = &v4[4 * v6];
    while ( v4 != v7 )
    {
      memset_0(v13, 0, sizeof(v13));
      v11 = 0LL;
      v8 = (union wil_details_FeaturePropertyCache *)*((_QWORD *)v4 + 1);
      v12[0] = &v11;
      v12[1] = v13;
      wil_details_ModifyFeatureData(
        v8,
        (unsigned int (__fastcall *)(signed __int32 *, void *))lambda_13f119b44549d7aec2177494846f39c3_::_lambda_invoker_cdecl_,
        v12);
      v9 = (unsigned int *)v13;
      do
      {
        v10 = v9[1];
        if ( v10 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)*v4, *v9, v10, a4, v11);
        v9 += 2;
      }
      while ( v9 != (unsigned int *)&v14 );
      v4 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v11);
  }
}
