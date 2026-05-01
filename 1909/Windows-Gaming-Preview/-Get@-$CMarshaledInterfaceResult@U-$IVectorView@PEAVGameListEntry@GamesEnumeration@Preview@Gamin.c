/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18002300C
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180021DB0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumera.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002502C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Get(
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
                    &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
                    a2);
  }
  else if ( v6 )
  {
    v9 = CMarshaledInterface::_Unmarshal(
           (CMarshaledInterface *)&v10,
           &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
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
