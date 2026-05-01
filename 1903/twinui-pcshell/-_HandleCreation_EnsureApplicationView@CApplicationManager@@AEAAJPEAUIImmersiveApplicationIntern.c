/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18001AEC4
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180018C70 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800590C0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x180019E10 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180019FB0 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18001ACF4 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleCreation_EnsureApplicationView(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        HWND a3,
        struct IApplicationView **a4)
{
  void (__fastcall *v7)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, __int64, struct IApplicationView **); // rbx
  int v10; // ebx
  __int64 v11; // rcx
  HWND v12; // rcx
  void (__fastcall *v13)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID v14; // rdi
  __int64 (__fastcall *v15)(PVOID, __int64, struct IApplicationView **); // rbx
  __int64 v16; // rcx
  struct IApplicationView *v17; // rax
  PVOID v19; // rdi
  __int64 (__fastcall *v20)(PVOID, HWND, struct IApplicationView **); // rbx
  PVOID v21; // rdi
  __int64 (__fastcall *v22)(PVOID, HWND, struct IApplicationView **); // rbx
  APTTYPE v23; // [rsp+20h] [rbp-30h]
  APTTYPEQUALIFIER v24; // [rsp+28h] [rbp-28h]
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26[3]; // [rsp+38h] [rbp-18h] BYREF
  struct IApplicationView *v27; // [rsp+80h] [rbp+30h] BYREF
  __int64 v28; // [rsp+88h] [rbp+38h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF

  v26[1] = -2LL;
  *a4 = 0LL;
  v27 = 0LL;
  if ( a2 )
  {
    v29 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v7((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v29);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v10 = v9(Ptr, v29, &v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  }
  else
  {
    v19 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v20 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v19 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v10 = v20(v19, a3, &v27);
  }
  if ( v10 >= 0 )
    goto LABEL_16;
  v28 = 0LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v28);
  if ( v10 >= 0 )
  {
    v26[0] = v28;
    if ( v28 )
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 36));
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v11, v26) >= 0 )
      SHProcessMessagesUntilEventsEx(v12, (void **)(v28 + 40), 1u, 0x1388u, v23, v24);
    if ( a2 )
    {
      v25 = 0LL;
      v13 = **a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v13((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v25);
      v14 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v15 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v14 + 56LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v10 = v15(v14, v25, &v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    }
    else
    {
      v21 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v22 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v21 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v10 = v22(v21, a3, &v27);
    }
    if ( v26[0] )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v26[0]);
  }
  v16 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v16);
  }
  if ( v10 >= 0 )
  {
LABEL_16:
    v17 = v27;
    v27 = 0LL;
    *a4 = v17;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  return (unsigned int)v10;
}
