/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180134EA0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  Microsoft::WRL::FtmBase *v4; // r9
  const struct _GUID *v5; // r10
  int CanCastTo; // ebx
  _QWORD *v7; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v4, v5, v3);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return (unsigned int)CanCastTo;
}
