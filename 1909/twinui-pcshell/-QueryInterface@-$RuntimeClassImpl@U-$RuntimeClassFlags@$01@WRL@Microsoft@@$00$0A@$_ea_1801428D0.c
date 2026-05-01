/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UITrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801428D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UITrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D4BE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D4BE0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  Microsoft::WRL::FtmBase *v4; // r10
  const struct _GUID *v5; // r11
  int CanCastTo; // ebx
  _QWORD *v7; // r8
  _DWORD *v8; // r11
  int v9; // r9d
  __int64 v10; // r10

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v4, v5, v3);
  if ( CanCastTo == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_2a74d8da_47f0_47be_b3e6_195778432fb4) )
    {
      CanCastTo = 0;
      *v7 = v10 + 32;
LABEL_7:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
      return (unsigned int)CanCastTo;
    }
    CanCastTo = v9;
  }
  if ( CanCastTo >= 0 )
    goto LABEL_7;
  return (unsigned int)CanCastTo;
}
