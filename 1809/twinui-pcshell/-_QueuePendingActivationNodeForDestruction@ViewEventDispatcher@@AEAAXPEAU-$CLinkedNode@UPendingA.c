/*
 * XREFs of ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180220230
 * Callers:
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180217CF0 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x180220728 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952_____lambda_119b7ac07a3a2ff7e5e3464a43ca6952___ @ 0x18020ED20 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2.c)
 *     ??$PendingActivationRemove@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180210000 (--$PendingActivationRemove@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x180217BAC (-Remove@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU-$CLinkedNode@UPendi.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180218DB8 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  const WCHAR *v9; // rcx
  __int64 **v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+38h] [rbp-8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = (__int64 **)(a1 + 552);
  while ( 1 )
  {
    LOBYTE(v4) = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v11);
    if ( !v4 )
      break;
    if ( v12 == a2 )
    {
      CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove((__int64)&v11);
      break;
    }
  }
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 560) = a2;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationRemove<unsigned __int64 &,unsigned short const *>(
    a2 + 8,
    &StringRawBuffer);
  v14 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v11 = (__int64 **)a1;
  v12 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v5 = *(_DWORD *)(a1 + 288);
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952_____lambda_119b7ac07a3a2ff7e5e3464a43ca6952___(
         (__int64 *)&StringRawBuffer,
         &v11);
  v8 = *v6;
  *v6 = 0LL;
  v9 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      (__int64)v9,
      v7);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
}
