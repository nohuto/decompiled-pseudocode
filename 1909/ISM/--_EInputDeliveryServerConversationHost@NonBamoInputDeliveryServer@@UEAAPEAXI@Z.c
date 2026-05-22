/*
 * XREFs of ??_EInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAPEAXI@Z @ 0x180109A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

NonBamoInputDeliveryServer::InputDeliveryServerConversationHost *__fastcall NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::`vector deleting destructor'(
        NonBamoInputDeliveryServer::InputDeliveryServerConversationHost *this,
        char a2)
{
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
