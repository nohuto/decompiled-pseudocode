/*
 * XREFs of _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x180067494
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_::Invoke @ 0x180067470 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-___ptr64_--Invoke.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_____lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x1800675E0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c74.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A4F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ca324c265ed58b3d9541d2204f682216_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  unsigned int v5; // esi
  __int64 *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  int v11; // esi
  __int64 v13; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+30h] BYREF
  __int64 v15; // [rsp+80h] [rbp+38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+40h] BYREF

  v14 = 0;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 120) + 136LL))(*(_QWORD *)(*a1 + 120), &v13) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 168LL))(v13, &v14);
  v2 = *a1;
  v16 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 64);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 64), v3 + 1, v3);
        if ( v4 != v3 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v3 + 16));
  }
LABEL_10:
  v5 = v14;
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_____lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(
                    &v15,
                    &v16);
  v8 = *v6;
  *v6 = 0LL;
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v9,
      v7);
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, v5, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v16);
  if ( v11 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*a1 + 129) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return 0LL;
}
