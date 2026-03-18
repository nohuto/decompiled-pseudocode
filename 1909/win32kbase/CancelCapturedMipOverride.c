/*
 * XREFs of CancelCapturedMipOverride @ 0x1C0181CB0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0190DEC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void CancelCapturedMipOverride()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::RemoveMipOverrideOnMouseOwner(MouseProcessor);
}
