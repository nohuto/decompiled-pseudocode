/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180045280
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180045234 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180064598 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800BE64C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _lambda_13f119b44549d7aec2177494846f39c3_::_lambda_invoker_cdecl_ @ 0x180045588 (_lambda_13f119b44549d7aec2177494846f39c3_--_lambda_invoker_cdecl_.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v1; // rdi
  __int64 v3; // rbx
  unsigned int *v4; // rbx
  volatile signed __int32 *v5; // rsi
  signed __int32 v6; // r15d
  void (*v7)(unsigned int, unsigned int, unsigned int, const char *); // r11
  unsigned int *v8; // rsi
  void (*v9)(unsigned int, unsigned int, unsigned int, const char *); // r10
  __int64 v10; // r8
  volatile signed __int32 v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v14[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v15; // [rsp+98h] [rbp+37h] BYREF

  v1 = (unsigned int *)*((_QWORD *)this + 6);
  v3 = (*((_QWORD *)this + 7) - (_QWORD)v1) >> 4;
  if ( v3 )
  {
    v4 = &v1[4 * v3];
    if ( v1 == v4 )
    {
      v7 = g_wil_details_internalRecordFeatureUsage;
      v9 = g_wil_details_apiRecordFeatureUsage;
      goto LABEL_10;
    }
    while ( 1 )
    {
      memset_0(v14, 0, sizeof(v14));
      v12 = 0LL;
      v5 = (volatile signed __int32 *)*((_QWORD *)v1 + 1);
      v13[0] = &v12;
      v13[1] = v14;
      do
      {
        v11 = *v5;
        v11 = *v5;
        v6 = v11;
      }
      while ( (unsigned int)lambda_13f119b44549d7aec2177494846f39c3_::_lambda_invoker_cdecl_(&v11, v13)
           && v6 != _InterlockedCompareExchange(v5, v11, v6) );
      v7 = g_wil_details_internalRecordFeatureUsage;
      v8 = (unsigned int *)v14;
      v9 = g_wil_details_apiRecordFeatureUsage;
      do
      {
        v10 = v8[1];
        if ( !(_DWORD)v10 )
          goto LABEL_8;
        if ( v7 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v7)(*v1, *v8, v10, 0LL);
LABEL_15:
          v9 = g_wil_details_apiRecordFeatureUsage;
          v7 = g_wil_details_internalRecordFeatureUsage;
          goto LABEL_8;
        }
        if ( v9 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v9)(*v1, *v8, v10, 0LL);
          goto LABEL_15;
        }
LABEL_8:
        v8 += 2;
      }
      while ( v8 != (unsigned int *)&v15 );
      v1 += 4;
      if ( v1 == v4 )
      {
LABEL_10:
        *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
        if ( v7 )
        {
          ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v7)(0LL, 254LL, 0LL, 0LL);
        }
        else if ( v9 )
        {
          ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v9)(0LL, 254LL, 0LL, 0LL);
        }
        return;
      }
    }
  }
}
