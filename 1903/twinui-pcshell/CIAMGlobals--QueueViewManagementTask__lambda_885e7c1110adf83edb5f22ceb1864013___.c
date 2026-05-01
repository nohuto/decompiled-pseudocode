/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___ @ 0x18006A834
 * Callers:
 *     _lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator() @ 0x18002C188 (_lambda_e3734e8a49c419fea61bf82ed4fde94a_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3223d2e9c44283edf88263d8dc865139_____lambda_3223d2e9c44283edf88263d8dc865139___ @ 0x18006A8F0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3223d2e9c4428.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___(
        volatile signed __int32 *a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rcx
  unsigned int v11; // edi
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v5 = *Ptr;
  v13[0] = (__int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (**)(void))(v5 + 8))();
  v6 = *a2;
  v7 = (unsigned int)v2[15].Ptr;
  v13[1] = v6;
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3223d2e9c44283edf88263d8dc865139_____lambda_3223d2e9c44283edf88263d8dc865139___(
                    &v14,
                    v13);
  v9 = *v8;
  *v8 = 0LL;
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v10);
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return v11;
}
