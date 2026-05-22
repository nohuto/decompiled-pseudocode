/*
 * XREFs of ?PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAKPEAX@Z @ 0x180111DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x18010A044 (-Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2Static(
        Windows::Internal::Holographic::SpatialGraphDriverClient *Parameter)
{
  int v1; // ebx
  _DWORD *v2; // rcx
  HolographicDriverClientTrace *v3; // rcx

  v1 = Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2(Parameter);
  v2 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v2 && *v2 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::Log_Information_(v3, v1, L"Stop listening for SpatialGraphDriver property changes.");
  }
  return 0LL;
}
