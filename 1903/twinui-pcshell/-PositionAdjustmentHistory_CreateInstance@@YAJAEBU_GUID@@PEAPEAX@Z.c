/*
 * XREFs of ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803BB280
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803ADC98 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180344768 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHis.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180348834 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PositionAdjustmentHistory_CreateInstance(const struct _GUID *a1, void **a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  volatile signed __int32 *v7; // rcx
  int v8; // ebx
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v13);
  v13 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( !v3 )
  {
    v8 = -2147024882;
    v10 = 115LL;
    goto LABEL_16;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>(v3);
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `IPositionAdjustmentHistory'};
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v14 = v4;
  *(_QWORD *)v4 = &PositionAdjustmentHistory::`vftable'{for `IPositionAdjustmentHistory'};
  *((_QWORD *)v4 + 1) = &PositionAdjustmentHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  v4[14] = 1000;
  _InterlockedIncrement(v4 + 5);
  v13 = v4;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v13;
    *a2 = (void *)v13;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    v8 = 0;
    goto LABEL_17;
  }
  if ( !InlineIsEqualGUID(v5, v5) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_fd10ce77_803f_4316_961f_cc6c4ac32fca) )
    {
      v7 = v13 + 2;
      *a2 = (void *)(v13 + 2);
      v8 = 0;
    }
    else
    {
      v8 = -2147467262;
      v7 = 0LL;
    }
    if ( v8 >= 0 )
      goto LABEL_11;
    v10 = 116LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v7 = v13;
  v8 = 0;
  *a2 = (void *)v13;
LABEL_11:
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
LABEL_17:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v13);
  return (unsigned int)v8;
}
