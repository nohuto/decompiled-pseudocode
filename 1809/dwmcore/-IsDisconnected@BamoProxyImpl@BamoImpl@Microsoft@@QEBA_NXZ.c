/*
 * XREFs of ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18016FBB4
 * Callers:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18016FD2C (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180171690 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 29) || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
    return 1;
  return v1;
}
