/*
 * XREFs of ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180376178
 * Callers:
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x18035AFC8 (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x18036F320 (-GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1803738B4 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutItemInternal@@UITaskbarLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013F050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_18013F050.c)
 *     ??0CTempAppVisualArray@@QEAA@XZ @ 0x180375CB4 (--0CTempAppVisualArray@@QEAA@XZ.c)
 */

__int64 __fastcall CTempAppVisualArray::CreateInstance(const struct _GUID *a1, void **a2)
{
  CTempAppVisualArray *v3; // rbx
  CTempAppVisualArray *v4; // rax
  volatile int *v5; // rdx
  CTempAppVisualArray *v6; // r9
  CTempAppVisualArray *v7; // rdi
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  void *v10; // r9
  _DWORD *v11; // rcx
  void *v12; // r9

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CTempAppVisualArray *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x30uLL);
    v3 = CTempAppVisualArray::CTempAppVisualArray(v7);
    v6 = v3;
  }
  v8 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_c8b22b16_aa16_4dc8_8a95_5affc3bc78bd, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v10;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
      v8 = 0;
    }
    else if ( InlineIsEqualGUID(v9, v9) || InlineIsEqualGUID(v11, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    {
      *a2 = v12;
      v8 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      v8 = -2147467262;
    }
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
      (__int64)v3,
      v5);
  return v8;
}
