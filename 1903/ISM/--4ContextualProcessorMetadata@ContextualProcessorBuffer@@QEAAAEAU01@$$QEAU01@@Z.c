/*
 * XREFs of ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FA074
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180066C18 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 */

__int64 __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v8 != (__int64 *)a2 )
  {
    v5 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    v3 = v5;
  }
  v6 = *(_QWORD *)a1;
  *(_QWORD *)a1 = v3;
  v8 = v6;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
    (__int64 *)(a1 + 16),
    (__int64 *)(a2 + 16));
  return a1;
}
