/*
 * XREFs of ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180013CC8
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18001168C (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180018C28 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::NotifyVolumePolicyChange(CApplication *this)
{
  _QWORD *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  const char *v6; // r9
  _QWORD *v7; // r15
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  _QWORD *v10; // r8
  _QWORD *i; // rbx
  const struct std::nothrow_t *v12; // rdx
  char *v13; // rax
  _QWORD v14[5]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v14[4] = -2LL;
  v2 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v7 = (_QWORD *)*((_QWORD *)this + 15);
  try
  {
LABEL_2:
    v9 = (_QWORD *)*((_QWORD *)&v16 + 1);
    v8 = (_QWORD *)v16;
    while ( v7 )
    {
      v10 = v7;
      v7 = (_QWORD *)*v7;
      v5 = v10 + 2;
      if ( v9 == v8 )
      {
        std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
          &v15,
          v8,
          v5);
        v2 = v15;
        goto LABEL_2;
      }
      *v8++ = *v5;
      *(_QWORD *)&v16 = v8;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    for ( i = v2; i != v8; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(
        *i,
        *((unsigned int *)this + 4),
        *((_QWORD *)this + 3));
    if ( v2 )
    {
      v12 = (const struct std::nothrow_t *)(8 * (v9 - v2));
      v13 = (char *)v2;
      if ( (unsigned __int64)v12 >= 0x1000 )
      {
        v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
        v2 = (_QWORD *)*(v2 - 1);
        if ( (unsigned __int64)(v13 - (char *)v2 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v4, v12);
          __debugbreak();
        }
      }
      operator delete(v2, v12);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, v14, (unsigned int)v5, v6);
  }
}
