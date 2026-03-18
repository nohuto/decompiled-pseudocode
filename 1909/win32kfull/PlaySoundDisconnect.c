/*
 * XREFs of PlaySoundDisconnect @ 0x1C03680F0
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C0113340 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C01133F4 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?CleanupPlaySound@@YAJXZ @ 0x1C011B9C0 (-CleanupPlaySound@@YAJXZ.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall PlaySoundDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
