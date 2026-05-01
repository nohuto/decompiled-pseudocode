/*
 * XREFs of ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1803794D8
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803753D0 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPresentationOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPrese.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180378FDC (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180379650 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_180379650.c)
 */

__int64 __fastcall CDragVisualAcc_CreateInstance(struct IDragVisual *a1, const struct _GUID *a2, void **a3)
{
  CDragVisualAcc *v5; // rbx
  CDragVisualAcc *v6; // rax
  volatile int *v7; // rdx
  CDragVisualAcc *v8; // r9
  signed int CanCastTo; // edi
  _DWORD *v10; // rcx
  void *v11; // r9
  _DWORD *v12; // rcx
  char *v13; // r9
  __int64 v14; // r10

  *a3 = 0LL;
  v5 = 0LL;
  v6 = (CDragVisualAcc *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v6 )
  {
    v5 = CDragVisualAcc::CDragVisualAcc(v6, a1);
    v8 = v5;
  }
  CanCastTo = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_959cb746_add4_483a_8acd_059d06f3798a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = v11;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c)
        || InlineIsEqualGUID(v12, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
      {
        *a3 = v13;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                      v13 + 8,
                      v14,
                      a3);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
  }
LABEL_11:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedPresentationOperations,Microsoft::WRL::FtmBase>::Release(
      (__int64)v5,
      v7);
  return (unsigned int)CanCastTo;
}
