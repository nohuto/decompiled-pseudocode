/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0040FF0
 * Callers:
 *     CoreMsgSend @ 0x1C0040B68 (CoreMsgSend.c)
 *     CoreMsgObjectCallout @ 0x1C0043300 (CoreMsgObjectCallout.c)
 *     CoreMsgCreatePort @ 0x1C00AA1B0 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00AA820 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgOpenConnection @ 0x1C00AA998 (CoreMsgOpenConnection.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01CA150 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
