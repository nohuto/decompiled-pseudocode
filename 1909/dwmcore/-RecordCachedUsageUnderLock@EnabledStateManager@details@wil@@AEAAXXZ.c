/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800AFE34
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800AFFD8 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800B02F8 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800F17F0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800AFF3C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800AFF64 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
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
      wil_details_ModifyFeatureData(v8, lambda_13f119b44549d7aec2177494846f39c3_::_lambda_invoker_cdecl_, v12);
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
