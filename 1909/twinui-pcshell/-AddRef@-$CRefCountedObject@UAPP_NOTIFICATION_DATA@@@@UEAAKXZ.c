/*
 * XREFs of ?AddRef@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x180086DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
}
