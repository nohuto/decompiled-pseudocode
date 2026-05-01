/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800ED220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180046A3C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E88EC (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800EEA10 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1800FA078 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v8; // r12
  int ImmersiveApp; // ebx
  __int64 v10; // rbx
  struct IImmersiveMonitor *v11; // rbx
  unsigned __int16 *v12; // rdi
  int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v14; // rax
  const struct _GUID *v16; // [rsp+30h] [rbp-49h]
  __int64 v17; // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int16 *v22; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1h]
  __int64 v24; // [rsp+80h] [rbp+7h]
  HWND v25; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+90h] [rbp+17h] BYREF
  char v27; // [rsp+98h] [rbp+1Fh]
  __int64 v28; // [rsp+A0h] [rbp+27h]
  __int64 v29; // [rsp+E8h] [rbp+6Fh] BYREF

  v28 = -2LL;
  v8 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  ImmersiveApp = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a3)(
                   a3,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   &v17);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v17, &v20);
    if ( ImmersiveApp >= 0 )
    {
      v21 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
      if ( ImmersiveApp >= 0 )
      {
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v10 = v17;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
        v23 = -1LL;
        v24 = -1LL;
        ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v10 + 32LL))(v10, &v22);
        if ( ImmersiveApp >= 0 )
        {
          v29 = 0LL;
          v25 = a2;
          v26 = 0LL;
          v27 = 0;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
          CApplicationManager::_RemoveWindowFromGlom((char *)this - 240, &v25, a3);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          v19 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
          ImmersiveApp = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *, __int64 *))(**((_QWORD **)this + 42)
                                                                                                 + 32LL))(
                           *((_QWORD *)this + 42),
                           0LL,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v19,
                           &v29);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v18 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a3 + 464LL))(
            a3,
            &v18);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
          v11 = v18;
          v12 = v22;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 384),
                         v22);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           (CallerIdentity *)v12,
                           (unsigned __int16 **)v21,
                           NextGlomId,
                           v11,
                           v16,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, a5, 0, v29);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, a3, 9, v29);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
        if ( ImmersiveApp >= 0 )
        {
          v14 = a5;
          a5 = 0LL;
          *v8 = (struct IImmersiveApplicationInternal *)v14;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
