/*
 * XREFs of ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x1C00AD7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146880 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::UnReferenceOnThreadTermination(void *a1)
{
  CTouchProcessor::UnreferenceMsgDataExternal(WPP_MAIN_CB.Queue.ListEntry.Blink, a1, 8LL);
}
