/*
 * XREFs of ??_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800B4000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CProjectedShadowScene::CProjectedShadowSceneInstance *__fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::`scalar deleting destructor'(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        char a2)
{
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 16), &RestartKey);
    if ( !v4 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), v4);
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CProjectedShadowScene::CProjectedShadowSceneInstance *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
