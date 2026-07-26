/*
 * XREFs of ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0059A34
 * Callers:
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     NdisFRegisterFilterDriver @ 0x1C00220A0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00EC5AC (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_NDIS_FILTER_DRIVER_BLOCK *__fastcall _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(
        _NDIS_FILTER_DRIVER_BLOCK *this)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rcx

  p = this->Bind._p;
  if ( p && _InterlockedExchangeAdd((volatile signed __int32 *)&p->RefCount, 0xFFFFFFFF) == 1 )
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(p);
  return this;
}
