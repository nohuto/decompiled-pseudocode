/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAXXZ @ 0x18006D678
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18006CEB0 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInterna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Close(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // r14
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  char *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v3 = (__int64 *)(a1 + 16);
  v4 = 0LL;
  v5 = 0LL;
  if ( &v9 != (char *)(a1 + 16) )
  {
    v4 = *v3;
    *v3 = 0LL;
    v5 = v4;
  }
  v6 = (char *)(a1 + 24);
  v7 = 0LL;
  v8 = 0LL;
  if ( &v9 != v6 )
  {
    v8 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    v7 = v8;
  }
  ReleaseSRWLockExclusive(v1);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
