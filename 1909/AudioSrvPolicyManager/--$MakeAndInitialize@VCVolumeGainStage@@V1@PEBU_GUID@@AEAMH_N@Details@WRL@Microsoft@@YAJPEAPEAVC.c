/*
 * XREFs of ??$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVCVolumeGainStage@@$$QEAPEBU_GUID@@AEAM$$QEAH$$QEA_N@Z @ 0x18000C928
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AED4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800349FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     pow @ 0x1800350A8 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeGainStage,CVolumeGainStage,_GUID const *,float &,int,bool>(
        _QWORD *a1,
        __int128 **a2,
        float *a3,
        int *a4,
        char *a5)
{
  unsigned int v5; // edi
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v12; // rcx
  __int64 v13; // r14
  __int128 *v14; // r15
  char v15; // bp
  float v16; // xmm0_4
  __int128 v17; // xmm0
  signed __int32 v18; // eax

  v5 = 0;
  *a1 = 0LL;
  v10 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    v12 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v10 = &CGainStage::`vftable';
    v10[9] = 1;
    v10[13] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
    if ( v12 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v12 + 8LL))(v12);
    *(_QWORD *)v11 = &CVolumeGainStage::`vftable';
    v13 = *a4;
    v14 = *a2;
    v15 = *a5;
    if ( *(_DWORD *)a3 == -8388608 )
      v16 = 0.0;
    else
      v16 = pow(10.0, *a3 / 20.0);
    *((float *)v11 + 14) = v16;
    v17 = *v14;
    *((_BYTE *)v11 + 32) = v15;
    *((_QWORD *)v11 + 5) = v13;
    *((_OWORD *)v11 + 1) = v17;
    do
      v18 = v11[13];
    while ( v18 != 0x7FFFFFFF && v18 != _InterlockedCompareExchange(v11 + 13, v18 + 1, v18) );
    *a1 = v11;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
