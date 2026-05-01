/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x1800324A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x1800325D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--Run.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____ @ 0x180140390 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Wind.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator()(RTL_SRWLOCK **a1)
{
  __int64 *Ptr; // rdi
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK *v7; // rsi
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rax
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+90h] [rbp+40h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  BYTE1((*a1)[16].Ptr) = 0;
  Ptr = (__int64 *)(*a1)[12].Ptr;
  v3 = (__int64 *)(*a1)[13].Ptr;
  while ( Ptr != v3 )
  {
    v4 = *Ptr;
    v13 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 40LL))(
           v4,
           &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
           &v12) >= 0 )
    {
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    ++Ptr;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = *a1;
  v7 = *a1 + 9;
  v15 = 0LL;
  v14 = v6;
  *(_QWORD *)&v10 = &v14;
  *((_QWORD *)&v10 + 1) = &v15;
  v8 = 0LL;
  AcquireSRWLockExclusive(v7 + 1);
  v9 = (volatile signed __int32 *)v7->Ptr;
  if ( v7->Ptr )
  {
    _InterlockedIncrement(v9 + 3);
    v8 = v9;
  }
  if ( v7 != (RTL_SRWLOCK *)-8LL )
    ReleaseSRWLockExclusive(v7 + 1);
  if ( v8 )
  {
    v11 = v10;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____(
      &v11,
      v8,
      v7);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
  }
}
