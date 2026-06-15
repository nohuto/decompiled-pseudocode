/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x140048E60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemoryManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14002C6A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemo.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioHistoryControl@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x14002D658 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioH.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1400467F0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14004725C (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  struct IUnknownVtbl *v6; // r10
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v8; // r8
  unsigned __int64 v10; // rdx
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // rbx

  v2 = *(_QWORD *)(a1 + 152);
  a2->lpVtbl = 0LL;
  v4 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 8), a2);
    v8 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v4;
    v10 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 152), v10, v4);
    for ( i = v4 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        a2->lpVtbl = v8;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      LODWORD(v8->Release) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 152), v10, v12);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
      1);
    v14 = 2 * v13;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessMemoryManager>::AddRef(v14);
    a2->lpVtbl = (struct IUnknownVtbl *)v14;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICPAudioHistoryControl>::InternalAddRef(
      2 * v2,
      (volatile int *)a2);
    a2->lpVtbl = v6;
  }
  return 0LL;
}
