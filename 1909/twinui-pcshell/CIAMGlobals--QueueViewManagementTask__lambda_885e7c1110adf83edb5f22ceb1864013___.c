/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___ @ 0x18000E858
 * Callers:
 *     _lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator() @ 0x18000E324 (_lambda_e3734e8a49c419fea61bf82ed4fde94a_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3223d2e9c44283edf88263d8dc865139_____lambda_3223d2e9c44283edf88263d8dc865139___ @ 0x18000E914 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3223d2e9c4428.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v5 = *Ptr;
  v12[0] = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (**)(void))(v5 + 8))();
  v6 = *a2;
  v7 = (unsigned int)v2[15].Ptr;
  v12[1] = v6;
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3223d2e9c44283edf88263d8dc865139_____lambda_3223d2e9c44283edf88263d8dc865139___(
                    &v13,
                    v12);
  v9 = *v8;
  *v8 = 0LL;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v7);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v10;
}
