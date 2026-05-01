/*
 * XREFs of ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180105704
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800F9208 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CRotationManagerSync@@QEAA@XZ @ 0x180104CB4 (--0CRotationManagerSync@@QEAA@XZ.c)
 */

__int64 __fastcall CRotationManagerSync::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CRotationManagerSync *v3; // rax
  CRotationManagerSync *v4; // rax
  const struct _GUID *v5; // rcx
  unsigned int v6; // ebx
  const struct _GUID *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *a2 = 0LL;
  v3 = (CRotationManagerSync *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 && (v4 = CRotationManagerSync::CRotationManagerSync(v3)) != 0LL )
    v5 = (const struct _GUID *)((char *)v4 + 72);
  else
    v5 = 0LL;
  v8 = v5;
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
    v6 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v5->Data1)(
           v5,
           &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
           a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v6;
}
