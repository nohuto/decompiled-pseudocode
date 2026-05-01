/*
 * XREFs of ??0?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@AEBVAsyncEventSerialInvocationContextToken@1@@Z @ 0x18022B0D8
 * Callers:
 *     ??0Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z @ 0x18022BFFC (--0Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAA@AEAVAsyncEventSerialInvocati.c)
 *     ??0ApplicationViewBackedViewHostItem@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z @ 0x1802392C4 (--0ApplicationViewBackedViewHostItem@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 8));
  InitializeSRWLock((PSRWLOCK)(a1 + 16));
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_BYTE *)(a1 + 32) = 1;
  v4 = *a2;
  *(_QWORD *)(a1 + 40) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 48) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
