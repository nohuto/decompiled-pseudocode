/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006D71C
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006CC00 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInte.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180063FD8 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID v3; // rdi
  PVOID v5; // rbx
  PVOID Ptr; // rsi
  PVOID v7; // rbp
  PVOID v8; // rsi
  unsigned int v9; // esi
  unsigned int v10; // eax
  PVOID v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(a1 + 4);
  Ptr = a1[3].Ptr;
  v7 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(a1[3].Ptr);
    v3 = Ptr;
    v12 = Ptr;
    v7 = Ptr;
  }
  v8 = a1[2].Ptr;
  if ( v8 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 8LL))(a1[2].Ptr);
    v5 = v8;
  }
  ReleaseSRWLockShared(a1 + 4);
  *a2 = 0LL;
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
           a2);
  }
  else
  {
    if ( v7 )
    {
      v10 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v12, &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11, a2);
      v3 = v12;
      v9 = v10;
      goto LABEL_12;
    }
    v9 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_12:
  if ( v3 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v3 + 16LL))(v3);
  return v9;
}
