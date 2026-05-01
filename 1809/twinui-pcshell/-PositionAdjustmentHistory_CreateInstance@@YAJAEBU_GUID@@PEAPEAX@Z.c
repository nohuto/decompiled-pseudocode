/*
 * XREFs of ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180355380
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x180348188 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800FD2EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802E3D7C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHis.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E7E7C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PositionAdjustmentHistory_CreateInstance(const struct _GUID *a1, void **a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rbx
  volatile int *v5; // rdx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  volatile int *v8; // rcx
  int v9; // ebx
  volatile int *v10; // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v14; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  v14 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (__int64)v3;
  if ( !v3 )
  {
    v9 = -2147024882;
    v11 = 115LL;
    goto LABEL_16;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>(v3);
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `IPositionAdjustmentHistory'};
  *(_QWORD *)(v4 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v15 = (volatile int *)v4;
  *(_QWORD *)v4 = &PositionAdjustmentHistory::`vftable'{for `IPositionAdjustmentHistory'};
  *(_QWORD *)(v4 + 8) = &PositionAdjustmentHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_DWORD *)(v4 + 56) = 1000;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
    v4,
    v5);
  v14 = (volatile int *)v4;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v15);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a2 = (void *)v14;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v10 + 8LL))(v10);
    v9 = 0;
    goto LABEL_17;
  }
  if ( !InlineIsEqualGUID(v6, v6) )
  {
    if ( InlineIsEqualGUID(v7, &GUID_fd10ce77_803f_4316_961f_cc6c4ac32fca) )
    {
      v8 = v14 + 2;
      *a2 = (void *)(v14 + 2);
      v9 = 0;
    }
    else
    {
      v9 = -2147467262;
      v8 = 0LL;
    }
    if ( v9 >= 0 )
      goto LABEL_11;
    v11 = 116LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_17;
  }
  v8 = v14;
  v9 = 0;
  *a2 = (void *)v14;
LABEL_11:
  (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_17:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  return (unsigned int)v9;
}
