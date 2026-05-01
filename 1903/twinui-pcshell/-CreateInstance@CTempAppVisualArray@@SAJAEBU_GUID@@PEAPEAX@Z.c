/*
 * XREFs of ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1803DBF88
 * Callers:
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x1803C0D88 (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1803D51D0 (-GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1803D96D4 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802CD220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopR.c)
 *     ??0CTempAppVisualArray@@QEAA@XZ @ 0x1803DBAC4 (--0CTempAppVisualArray@@QEAA@XZ.c)
 */

__int64 __fastcall CTempAppVisualArray::CreateInstance(const struct _GUID *a1, void **a2)
{
  volatile signed __int32 *v3; // rbx
  CTempAppVisualArray *v4; // rax
  volatile signed __int32 *v5; // r9
  CTempAppVisualArray *v6; // rdi
  unsigned int v7; // edi
  _DWORD *v8; // rcx
  void *v9; // r9
  _DWORD *v10; // rcx
  void *v11; // r9

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CTempAppVisualArray *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x30uLL);
    v3 = (volatile signed __int32 *)CTempAppVisualArray::CTempAppVisualArray(v6);
    v5 = v3;
  }
  if ( v5 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_c8b22b16_aa16_4dc8_8a95_5affc3bc78bd, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v9;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
      v7 = 0;
    }
    else if ( InlineIsEqualGUID(v8, v8) || InlineIsEqualGUID(v10, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    {
      *a2 = v11;
      v7 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      v7 = -2147467262;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopRegistryHelpers>::Release(v3);
  return v7;
}
