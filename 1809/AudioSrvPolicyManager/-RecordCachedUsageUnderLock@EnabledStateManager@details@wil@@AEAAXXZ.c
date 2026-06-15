/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180006B84
 * Callers:
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180007950 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_ @ 0x180021EE0 (_lambda_d920a0a3d4a387d1d77e21b11a8b43bc_--_lambda_invoker_cdecl_.c)
 *     _lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_ @ 0x180022080 (_lambda_694cf3250e255c878c64dabf1ae2e40c_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18003A500 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  int *v1; // rdi
  unsigned __int64 v3; // rbx
  int *v4; // rbx
  int *v5; // r10
  unsigned int v6; // r12d
  int v7; // ecx
  int v8; // edx
  int v9; // ett
  void (*v10)(unsigned int, unsigned int, unsigned int, const char *); // r10
  int *v11; // r14
  void (*v12)(unsigned int, unsigned int, unsigned int, const char *); // r11
  unsigned int v13; // r15d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void (*v17)(unsigned int, unsigned int, unsigned int, const char *); // rax
  unsigned __int64 v18; // r8
  int v19; // [rsp+38h] [rbp-29h]
  unsigned __int64 v20; // [rsp+38h] [rbp-29h]
  int v21; // [rsp+48h] [rbp-19h] BYREF
  int v22; // [rsp+4Ch] [rbp-15h]
  int v23; // [rsp+50h] [rbp-11h]
  int v24; // [rsp+54h] [rbp-Dh]
  int v25; // [rsp+58h] [rbp-9h]
  int v26; // [rsp+5Ch] [rbp-5h]
  int v27; // [rsp+60h] [rbp-1h]
  int v28; // [rsp+64h] [rbp+3h]
  int v29; // [rsp+68h] [rbp+7h]
  int v30; // [rsp+6Ch] [rbp+Bh]
  int v31; // [rsp+70h] [rbp+Fh]
  int v32; // [rsp+74h] [rbp+13h]
  int v33; // [rsp+78h] [rbp+17h]
  int v34; // [rsp+7Ch] [rbp+1Bh]
  int v35; // [rsp+80h] [rbp+1Fh]
  int v36; // [rsp+84h] [rbp+23h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = (*((_QWORD *)this + 7) - (_QWORD)v1) >> 4;
  if ( v3 )
  {
    v4 = &v1[4 * v3];
    if ( v1 != v4 )
    {
      while ( 1 )
      {
        v5 = (int *)*((_QWORD *)v1 + 1);
        v6 = *v1;
        _m_prefetchw(v5);
        do
        {
          v19 = *v5;
          v7 = *v5;
          v8 = v19 ^ (v19 ^ (16 * v19)) & 0x100000 ^ (v19 ^ (v19 ^ (16 * v19)) & 0x100000 ^ (16
                                                                                           * (v19 ^ (v19 ^ (16 * v19)) & 0x100000))) & 0x200000;
          v9 = *v5;
        }
        while ( v9 != _InterlockedCompareExchange(
                        v5,
                        (v8 ^ (v8 ^ (16 * v8)) & 0x400000) & 0x807F8037 | (16
                                                                         * ((v8 ^ (v8 ^ (16 * v8)) & 0x400000) & 0x80000)),
                        *v5) );
        v21 = 2;
        if ( (v7 & 0x100000) != 0 || (v22 = 1, (v7 & 0x10000) == 0) )
          v22 = 0;
        v23 = 6;
        if ( (v7 & 0x200000) != 0 || (v24 = 1, (v7 & 0x20000) == 0) )
          v24 = 0;
        v25 = 3;
        if ( (v7 & 0x400000) != 0 || (v26 = 1, (v7 & 0x40000) == 0) )
          v26 = 0;
        v27 = 7;
        if ( (v7 & 0x800000) != 0 || (v28 = 1, (v7 & 0x80000) == 0) )
          v28 = 0;
        v10 = g_wil_details_apiRecordFeatureUsage;
        v11 = &v21;
        v33 = 1;
        v12 = g_wil_details_internalRecordFeatureUsage;
        v13 = 0;
        v29 = 0;
        v31 = 4;
        v14 = ((unsigned int)v7 >> 6) & 0x1FF;
        v35 = 5;
        if ( (v7 & 0x8000) != 0 )
          v14 = 0;
        v30 = v14;
        v32 = (v7 & 0x8000) != 0 ? ((unsigned int)v7 >> 6) & 0x1FF : 0;
        v15 = HIBYTE(v7) & 0x7F;
        if ( v7 < 0 )
          v15 = 0;
        v34 = v15;
        v16 = 0;
        if ( v7 < 0 )
          v16 = HIBYTE(v7) & 0x7F;
        v36 = v16;
        do
        {
          v20 = *(_QWORD *)v11;
          if ( !HIDWORD(*(_QWORD *)v11) )
            goto LABEL_30;
          if ( v12 )
          {
            v17 = v12;
            v18 = HIDWORD(v20);
          }
          else
          {
            if ( !v10 )
              goto LABEL_30;
            v18 = HIDWORD(v20);
            v17 = v10;
          }
          ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64, _QWORD))v17)(v6, (unsigned int)v20, v18, 0LL);
          v10 = g_wil_details_apiRecordFeatureUsage;
          v12 = g_wil_details_internalRecordFeatureUsage;
LABEL_30:
          ++v13;
          v11 += 2;
        }
        while ( v13 < 8 );
        v1 += 4;
        if ( v1 == v4 )
          goto LABEL_34;
      }
    }
    v12 = g_wil_details_internalRecordFeatureUsage;
    v10 = g_wil_details_apiRecordFeatureUsage;
LABEL_34:
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    if ( v12 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v12)(0LL, 254LL, 0LL, 0LL);
    }
    else if ( v10 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v10)(0LL, 254LL, 0LL, 0LL);
    }
  }
}
