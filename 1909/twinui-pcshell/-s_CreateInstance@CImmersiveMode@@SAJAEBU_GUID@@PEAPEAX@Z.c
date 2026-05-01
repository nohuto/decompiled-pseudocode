/*
 * XREFs of ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180147968
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18013E164 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180132F80 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x18014597C (--0CImmersiveMode@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveMode *v3; // rbx
  CImmersiveMode *v4; // rax
  CImmersiveMode *v5; // rdi
  int inited; // esi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveMode *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
  {
    v3 = CImmersiveMode::CImmersiveMode(v4);
    v5 = v3;
  }
  if ( v5 )
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId((CImmersiveMode *)((char *)v5 + 184));
    if ( inited >= 0 )
      inited = (**(__int64 (__fastcall ***)(CImmersiveMode *, GUID *, void **))v3)(
                 v3,
                 &GUID_64aa042d_4144_4c88_afb9_aed881c0ffee,
                 a2);
  }
  else
  {
    inited = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(CImmersiveMode *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)inited;
}
