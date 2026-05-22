/*
 * XREFs of ?OnDisposePublic@SipcEndpoint@@MEAAXXZ @ 0x1800A1810
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z @ 0x1800A1CC8 (-Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z.c)
 */

void __fastcall SipcEndpoint::OnDisposePublic(SipcClient **this, __int64 a2)
{
  if ( this[13] )
  {
    SipcClient::Disconnect(this[13], a2);
  }
  else if ( this[14] )
  {
    SipcServer::Disconnect(this[14], (struct SipcEndpoint *)this);
  }
}
