/*
 * XREFs of ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180113494
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800F9208 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180112F14 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 */

__int64 __fastcall CRealmActivationHistory::s_CreateInstance(
        struct IImmersiveApplicationManagerInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  CRealmActivationHistory *v5; // rbx
  CRealmActivationHistory *v6; // rax
  CRealmActivationHistory *v7; // rsi
  unsigned int v8; // edi

  *a3 = 0LL;
  v5 = 0LL;
  v6 = (CRealmActivationHistory *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v5 = CRealmActivationHistory::CRealmActivationHistory(v6, a1);
    v7 = v5;
  }
  v8 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v8 = (**(__int64 (__fastcall ***)(CRealmActivationHistory *, GUID *, void **))v5)(
           v5,
           &GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600,
           a3);
    (*(void (__fastcall **)(CRealmActivationHistory *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
