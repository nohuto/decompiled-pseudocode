/*
 * XREFs of ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18018A678
 * Callers:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18018A864 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(
        Microsoft::BamoImpl::BamoStubImpl *this,
        char a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 32);
  *((_BYTE *)this + 32) = 0;
  if ( v2 && !a2 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 48LL))(this);
  *((_QWORD *)this + 3) = 0LL;
}
