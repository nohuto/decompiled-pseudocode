/*
 * XREFs of PlaySoundDisconnect @ 0x1C035531C
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C012CFDC (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C012D090 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?CleanupPlaySound@@YAJXZ @ 0x1C0136800 (-CleanupPlaySound@@YAJXZ.c)
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
