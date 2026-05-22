/*
 * XREFs of ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1800FB798
 * Callers:
 *     ?OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FB970 (-OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIni.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0ActivationContext@@QEAA@XZ @ 0x1800FB838 (--0ActivationContext@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
        ActivationContext **a1,
        _DWORD *a2,
        char *a3)
{
  unsigned int v3; // edi
  ActivationContext *v7; // rax
  ActivationContext *v8; // rbx
  char v9; // dl

  v3 = 0;
  *a1 = 0LL;
  v7 = (ActivationContext *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = ActivationContext::ActivationContext(v7);
    v9 = *a3;
    *((_DWORD *)v8 + 18) = *a2;
    *((_BYTE *)v8 + 76) = v9;
    (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
