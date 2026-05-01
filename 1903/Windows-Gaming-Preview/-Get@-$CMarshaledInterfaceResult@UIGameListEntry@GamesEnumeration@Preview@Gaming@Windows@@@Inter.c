/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180022EF0
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180020DC0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180024FEC (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID Ptr; // rbx
  PVOID v5; // rdi
  PVOID v6; // rsi
  bool v7; // r9
  int v9; // eax
  PVOID v10; // [rsp+40h] [rbp+8h] BYREF

  Ptr = 0LL;
  v10 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(a1 + 4);
  v6 = 0LL;
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10 = Ptr;
    v6 = Ptr;
  }
  if ( a1[2].Ptr )
  {
    v5 = a1[2].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
  }
  ReleaseSRWLockShared(a1 + 4);
  *a2 = 0LL;
  if ( v5 )
  {
    LODWORD(v6) = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
                    v5,
                    &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                    a2);
  }
  else if ( v6 )
  {
    v9 = CMarshaledInterface::_Unmarshal(
           (CMarshaledInterface *)&v10,
           &GUID_735924d3_811f_4494_b69c_c641a0c61543,
           a2,
           v7);
    Ptr = v10;
    LODWORD(v6) = v9;
    goto LABEL_9;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_9:
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return (unsigned int)v6;
}
