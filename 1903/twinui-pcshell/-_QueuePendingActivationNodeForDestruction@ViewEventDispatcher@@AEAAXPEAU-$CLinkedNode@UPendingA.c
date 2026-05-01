/*
 * XREFs of ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180275664
 * Callers:
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x18026E080 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x180275B74 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952_____lambda_119b7ac07a3a2ff7e5e3464a43ca6952___ @ 0x18026659C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2.c)
 *     ??$PendingActivationRemove@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180267858 (--$PendingActivationRemove@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x18026DF44 (-Remove@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU-$CLinkedNode@UPendi.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x18026ED8C (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 **v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+38h] [rbp-8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = (__int64 **)(a1 + 528);
  while ( 1 )
  {
    LOBYTE(v4) = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v10);
    if ( !v4 )
      break;
    if ( v11 == a2 )
    {
      CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove((__int64)&v10);
      break;
    }
  }
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 536) = a2;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationRemove<unsigned __int64 &,unsigned short const *>(
    a2 + 8,
    &StringRawBuffer);
  v13 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v10 = (__int64 **)a1;
  v11 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v5 = *(_DWORD *)(a1 + 272);
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952_____lambda_119b7ac07a3a2ff7e5e3464a43ca6952___(
         (volatile signed __int32 **)&StringRawBuffer,
         &v10);
  v7 = *v6;
  *v6 = 0LL;
  v8 = (volatile signed __int32 *)StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
}
