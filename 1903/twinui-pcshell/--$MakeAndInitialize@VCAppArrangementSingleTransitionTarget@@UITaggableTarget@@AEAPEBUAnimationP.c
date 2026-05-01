/*
 * XREFs of ??$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x180388FC8
 * Callers:
 *     CAppTransitionTarget_CreateInstance @ 0x18038B0AC (CAppTransitionTarget_CreateInstance.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x180389168 (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppArrangementSingleTransitionTarget,ITaggableTarget,AnimationPassState const * &,unsigned long &>(
        _QWORD *a1,
        _OWORD **a2,
        int *a3)
{
  CAppTransitionTargetBase *v6; // rax
  CAppTransitionTargetBase *v7; // rbx
  unsigned int v8; // edi
  _OWORD *v9; // rax
  int v10; // ecx
  __int128 v11; // xmm1

  *a1 = 0LL;
  v6 = (CAppTransitionTargetBase *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    CAppTransitionTargetBase::CAppTransitionTargetBase(v6);
    *((_DWORD *)v7 + 68) = 0;
    *((_QWORD *)v7 + 35) = 0LL;
    *(_QWORD *)v7 = &CAppArrangementSingleTransitionTarget::`vftable'{for `ITaggableTarget'};
    *((_QWORD *)v7 + 1) = &CAppTransitionTargetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
    v9 = *a2;
    v10 = *a3;
    *(_OWORD *)((char *)v7 + 136) = **a2;
    v11 = v9[1];
    *((_DWORD *)v7 + 42) = v10;
    *(_OWORD *)((char *)v7 + 152) = v11;
    v8 = (**(__int64 (__fastcall ***)(CAppTransitionTargetBase *, GUID *, _QWORD *))v7)(
           v7,
           &GUID_42b028e4_80cd_42b1_b817_0191712101d7,
           a1);
    (*(void (__fastcall **)(CAppTransitionTargetBase *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
