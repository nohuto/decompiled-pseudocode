/*
 * XREFs of ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1803DF358
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803DB1E8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindowGroupingOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EBF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindo.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x1803DEE0C (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803DF4D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_1803DF4D4.c)
 */

__int64 __fastcall CDragVisualAcc_CreateInstance(struct IDragVisual *a1, const struct _GUID *a2, CDragVisualAcc **a3)
{
  CDragVisualAcc *v5; // rax
  CDragVisualAcc *v6; // rdi
  signed int CanCastTo; // ebx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  CDragVisualAcc *v10; // r8
  __int64 v11; // r9

  *a3 = 0LL;
  v5 = (CDragVisualAcc *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = CDragVisualAcc::CDragVisualAcc(v5, a1);
  CanCastTo = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_959cb746_add4_483a_8acd_059d06f3798a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = v6;
      (*(void (__fastcall **)(CDragVisualAcc *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
      {
        *a3 = v6;
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v9, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
        {
          *a3 = v10;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                        (char *)v10 + 8,
                        v11,
                        a3);
        }
        if ( CanCastTo < 0 )
          goto LABEL_13;
      }
      (*(void (__fastcall **)(CDragVisualAcc *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
LABEL_13:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedWindowGroupingOperations,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v6);
  }
  return (unsigned int)CanCastTo;
}
