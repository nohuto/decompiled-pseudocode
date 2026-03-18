/*
 * XREFs of ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180153700
 * Callers:
 *     ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154320 (-OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x180153BA8 (-Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 */

Microsoft::BamoImpl::ConnectionIndirector *__fastcall Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    Microsoft::Bamo::BaseBamoConnection::Free(*(Microsoft::Bamo::BaseBamoConnection **)(v4 + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
