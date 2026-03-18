/*
 * XREFs of PlaySoundDisconnect @ 0x1C03670D8
 * Callers:
 *     ?CleanupPlaySound@@YAJXZ @ 0x1C00E45D0 (-CleanupPlaySound@@YAJXZ.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00E49D4 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00E4A58 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
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
