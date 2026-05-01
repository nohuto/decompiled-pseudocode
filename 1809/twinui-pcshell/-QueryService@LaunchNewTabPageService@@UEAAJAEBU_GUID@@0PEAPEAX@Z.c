/*
 * XREFs of ?QueryService@LaunchNewTabPageService@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801E37B0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801D87E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIUpdateViewValueSet@@V.c)
 */

__int64 __fastcall LaunchNewTabPageService::QueryService(
        LaunchNewTabPageService *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // r9
  _QWORD *v7; // r11
  _QWORD *v8; // r9
  _DWORD *v9; // r10
  _QWORD **v10; // r11
  int CanCastTo; // ebx

  *a4 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - 0x40AAF578E1380B20LL;
  if ( *(_QWORD *)&a2->Data1 == 0x40AAF578E1380B20LL )
    v4 = *(_QWORD *)a2->Data4 - 0x36081BD12BA27DBBLL;
  if ( v4 )
    return (unsigned int)-2147467263;
  *a4 = 0LL;
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v7 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  if ( InlineIsEqualGUID(v5, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
  {
    *v10 = v8;
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD, _QWORD))(**v10 + 8LL))(*v10, **v10);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
                (__int64)(v8 + 1),
                v9);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
  return (unsigned int)CanCastTo;
}
