/*
 * XREFs of ?CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18014ABA0
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18013E164 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveApplicationTransitionHelper@@QEAA@XZ @ 0x18014A9E8 (--0CImmersiveApplicationTransitionHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveApplicationTransitionHelper *v3; // rbx
  CImmersiveApplicationTransitionHelper *v4; // rax
  CImmersiveApplicationTransitionHelper *v5; // rdi
  unsigned int v6; // ebx

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveApplicationTransitionHelper *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
  {
    v3 = CImmersiveApplicationTransitionHelper::CImmersiveApplicationTransitionHelper(v4);
    v5 = v3;
  }
  if ( v5 )
    v6 = (**(__int64 (__fastcall ***)(CImmersiveApplicationTransitionHelper *, GUID *, void **))v3)(
           v3,
           &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
           a2);
  else
    v6 = -2147024882;
  if ( v5 )
    (*(void (__fastcall **)(CImmersiveApplicationTransitionHelper *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
