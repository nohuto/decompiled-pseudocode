/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180009B1C
 * Callers:
 *     _lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_ @ 0x18000A240 (_lambda_694cf3250e255c878c64dabf1ae2e40c_--_lambda_invoker_cdecl_.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180013EEC (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x180015200 (_lambda_0374aa0a5d1201b2358c6bce99369c58_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800D5A30 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     _lambda_13f119b44549d7aec2177494846f39c3_::_lambda_invoker_cdecl_ @ 0x1800151D0 (_lambda_13f119b44549d7aec2177494846f39c3_--_lambda_invoker_cdecl_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
    if ( v1 != v4 )
    {
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
            goto LABEL_13;
          if ( v7 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v7)(*v1, *v8, v10, 0LL);
          }
          else
          {
            if ( !v9 )
              goto LABEL_13;
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v9)(*v1, *v8, v10, 0LL);
          }
          v9 = g_wil_details_apiRecordFeatureUsage;
          v7 = g_wil_details_internalRecordFeatureUsage;
LABEL_13:
          v8 += 2;
        }
        while ( v8 != (unsigned int *)&v15 );
        v1 += 4;
        if ( v1 == v4 )
          goto LABEL_17;
      }
    }
    v7 = g_wil_details_internalRecordFeatureUsage;
    v9 = g_wil_details_apiRecordFeatureUsage;
LABEL_17:
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    if ( v7 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v7)(0LL, 254LL, 0LL, 0LL);
    }
    else if ( v9 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v9)(0LL, 254LL, 0LL, 0LL);
    }
  }
}
