/*
 * XREFs of ?CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18012B660
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18011ECC4 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveApplicationTransitionHelper@@QEAA@XZ @ 0x18012B4A8 (--0CImmersiveApplicationTransitionHelper@@QEAA@XZ.c)
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
