/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x1801200FC
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18011D56C (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180056494 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180076138 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        struct IUnknown *a3)
{
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF

  v10[1] = -2LL;
  v9 = 0LL;
  v10[0] = -1LL;
  v11 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( v6(a2, &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1, &v11) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 24LL))(v11, v10) >= 0
    && (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
              a1 + 1000,
              v10,
              &v9) >= 0 )
  {
    v7 = v9;
    if ( (unsigned int)SHIsSameObject(a3, *(struct IUnknown **)(v9 + 16)) )
    {
      *(_QWORD *)(v7 + 24) = 0LL;
      Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(v7 + 16), 0LL);
      *(_BYTE *)(v7 + 32) = 0;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
}
