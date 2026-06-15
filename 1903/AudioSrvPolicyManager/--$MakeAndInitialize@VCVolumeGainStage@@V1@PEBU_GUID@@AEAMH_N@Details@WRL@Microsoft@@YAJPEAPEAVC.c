/*
 * XREFs of ??$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVCVolumeGainStage@@$$QEAPEBU_GUID@@AEAM$$QEAH$$QEA_N@Z @ 0x18000C96C
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AEB4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034AFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     pow @ 0x1800351A8 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeGainStage,CVolumeGainStage,_GUID const *,float &,int,bool>(
        _QWORD *a1,
        __int128 **a2,
        float *a3,
        int *a4,
        char *a5)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 result; // rax
  struct Microsoft::WRL::Details::ModuleBase *v12; // rcx
  __int64 v13; // rsi
  __int128 *v14; // r14
  char v15; // r15
  float v16; // xmm0_4
  __int128 v17; // xmm0

  *a1 = 0LL;
  v9 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
    return 2147942414LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)v9 = &CGainStage::`vftable';
  v9[9] = 1;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
  v9[13] = 1;
  if ( v12 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v12 + 8LL))(v12);
  *(_QWORD *)v10 = &CVolumeGainStage::`vftable';
  v13 = *a4;
  v14 = *a2;
  v15 = *a5;
  if ( *(_DWORD *)a3 == -8388608 )
    v16 = 0.0;
  else
    v16 = pow(10.0, *a3 / 20.0);
  *((float *)v10 + 14) = v16;
  v17 = *v14;
  *((_BYTE *)v10 + 32) = v15;
  *((_QWORD *)v10 + 5) = v13;
  *((_OWORD *)v10 + 1) = v17;
  _InterlockedIncrement(v10 + 13);
  *a1 = v10;
  result = 0LL;
  if ( _InterlockedExchangeAdd(v10 + 13, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    result = 0LL;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      return 0LL;
    }
  }
  return result;
}
