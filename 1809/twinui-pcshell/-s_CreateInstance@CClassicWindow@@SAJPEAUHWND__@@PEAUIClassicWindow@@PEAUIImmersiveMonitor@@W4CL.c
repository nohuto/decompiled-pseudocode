/*
 * XREFs of ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x18004FF5C
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x18004F950 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??0CClassicWindow@@QEAA@PEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x1800509D4 (--0CClassicWindow@@QEAA@PEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindow::s_CreateInstance(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  void *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  _DWORD *v12; // rcx

  *a5 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = 0LL;
  if ( v9 )
    v10 = CClassicWindow::CClassicWindow(v9, a1, a2, a3, a4);
  v11 = v10 == 0 ? 0x8007000E : 0;
  if ( v10 )
  {
    *a5 = 0LL;
    if ( InlineIsEqualGUID(&GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a5 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = 0;
    }
    else if ( InlineIsEqualGUID(v12, v12) )
    {
      *a5 = v10;
      v11 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      v11 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v10);
  }
  return v11;
}
