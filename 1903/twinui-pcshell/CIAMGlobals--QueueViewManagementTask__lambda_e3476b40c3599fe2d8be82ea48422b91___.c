/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___ @ 0x180016EB4
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800169B8 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e02303751d4e49a7e603e0304fd9978e_____lambda_e02303751d4e49a7e603e0304fd9978e___ @ 0x180016FB8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e02303751d4e4.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edi
  PVOID v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+10h] BYREF

  v17 = a1;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v5 = *Ptr;
  v14 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (**)(void))(v5 + 8))();
  v15 = 0LL;
  if ( &v15 != a2 )
  {
    v6 = *a2;
    *a2 = 0LL;
    v15 = v6;
  }
  v16[0] = 0LL;
  v7 = a2 + 1;
  if ( v16 != v7 )
  {
    v8 = *v7;
    *v7 = 0LL;
    v16[0] = v8;
  }
  v9 = (unsigned int)v2[15].Ptr;
  v10 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e02303751d4e49a7e603e0304fd9978e_____lambda_e02303751d4e49a7e603e0304fd9978e___(
                     &v17,
                     &v14);
  v11 = *v10;
  *v10 = 0LL;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v12 = SHTaskPoolQueueTask(3LL, 2LL, v9, 0LL, v11, 0LL);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v12;
}
