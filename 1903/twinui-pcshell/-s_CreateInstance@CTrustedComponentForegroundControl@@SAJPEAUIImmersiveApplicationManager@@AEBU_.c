/*
 * XREFs of ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18007EBC4
 * Callers:
 *     ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x18005E950 (-InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025AC0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180078E40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBr.c)
 *     ??0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z @ 0x18007ECA8 (--0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::s_CreateInstance(
        struct IImmersiveApplicationManager *a1,
        const struct _GUID *a2,
        void **a3)
{
  CTrustedComponentForegroundControl *v5; // rax
  CTrustedComponentForegroundControl *v6; // rdi
  unsigned int CanCastTo; // ebx
  const struct _GUID *v8; // r10
  _DWORD *v9; // rdx
  _DWORD *v10; // r10
  unsigned int v11; // r8d

  *a3 = 0LL;
  v5 = (CTrustedComponentForegroundControl *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = CTrustedComponentForegroundControl::CTrustedComponentForegroundControl(v5, a1);
  CanCastTo = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_2a74d8da_47f0_47be_b3e6_195778432fb4, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = v6;
      (*(void (__fastcall **)(CTrustedComponentForegroundControl *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
      goto LABEL_9;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v6, v8, a3);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v10, v9) )
      {
        CanCastTo = 0;
        *a3 = (char *)v6 + 32;
LABEL_8:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
LABEL_9:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWindowManagerBridge,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v6);
        return CanCastTo;
      }
      CanCastTo = v11;
    }
    if ( (CanCastTo & 0x80000000) != 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  return CanCastTo;
}
