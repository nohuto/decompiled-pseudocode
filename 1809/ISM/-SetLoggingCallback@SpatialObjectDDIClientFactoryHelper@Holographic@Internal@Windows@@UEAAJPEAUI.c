/*
 * XREFs of ?SetLoggingCallback@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAJPEAUISpatialObjectDDIClientLoggingCallback@234@@Z @ 0x1800AA340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::SetLoggingCallback(
        Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *this,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientLoggingCallback *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Holographic::ISpatialObjectDDIClientLoggingCallback *))(**((_QWORD **)this + 9) + 56LL))(
           *((_QWORD *)this + 9),
           a2);
}
