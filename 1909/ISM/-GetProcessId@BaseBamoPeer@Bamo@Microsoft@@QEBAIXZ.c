/*
 * XREFs of ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002F404
 * Callers:
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x1800316F0 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z@std@@@Z @ 0x180031AFC (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x180032484 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoPeer::GetProcessId(Microsoft::Bamo::BaseBamoPeer *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)this + 8LL))(this)
                         + 32);
}
