/*
 * XREFs of ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAUSystemContextMessage@@@Z @ 0x180011948
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18001179C (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemContextProvider::BroadcastMessageToObservers(
        SystemContextProvider *this,
        struct SystemContextMessage *a2)
{
  __int64 *i; // rbx

  for ( i = (__int64 *)*((_QWORD *)this + 4);
        ;
        (*(void (__fastcall **)(__int64, struct SystemContextMessage *))(*(_QWORD *)i[2] + 24LL))(i[2], a2) )
  {
    i = (__int64 *)*i;
    if ( i == *((__int64 **)this + 4) )
      break;
  }
  return 0LL;
}
