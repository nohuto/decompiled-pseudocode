/*
 * XREFs of ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x180106304
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800F9208 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CCharmsWindowManager@@QEAA@XZ @ 0x1801063C0 (--0CCharmsWindowManager@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
        _QWORD *a1,
        __int64 *a2)
{
  CCharmsWindowManager *v4; // rax
  unsigned int v5; // ebx
  CCharmsWindowManager *v6; // rax
  __int64 v7; // rbx
  CCharmsWindowManager *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCharmsWindowManager *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CCharmsWindowManager::CCharmsWindowManager(v4);
    v7 = *a2;
    v8 = v6;
    v9 = *((_QWORD *)v6 + 12);
    if ( v9 != v7 )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v9 = *((_QWORD *)v8 + 12);
      }
      v11 = v9;
      *((_QWORD *)v8 + 12) = v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    v5 = (**(__int64 (__fastcall ***)(CCharmsWindowManager *, GUID *, _QWORD *))v8)(
           v8,
           &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee,
           a1);
    (*(void (__fastcall **)(CCharmsWindowManager *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
