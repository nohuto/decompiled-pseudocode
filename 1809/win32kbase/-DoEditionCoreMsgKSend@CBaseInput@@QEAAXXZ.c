/*
 * XREFs of ?DoEditionCoreMsgKSend@CBaseInput@@QEAAXXZ @ 0x1C0149840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C007AE84 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CBaseInput::DoEditionCoreMsgKSend(CBaseInput *this)
{
  void *DispatcherHandleByName; // rax

  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 11LL, 1LL);
  ZwSetEvent(DispatcherHandleByName, 0LL);
}
