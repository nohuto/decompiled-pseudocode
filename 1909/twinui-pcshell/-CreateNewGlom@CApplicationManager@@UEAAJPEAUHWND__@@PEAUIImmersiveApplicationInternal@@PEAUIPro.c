/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x18012F830
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E9C4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012994C (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180131CF4 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18013F040 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v7; // r13
  __int64 (__fastcall *v8)(struct IImmersiveApplicationInternal *, GUID *, _QWORD); // rbx
  int ImmersiveApp; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  CApplicationManager *v12; // r15
  void (__fastcall *v13)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **); // rbx
  CActivationBasedAppAndGlomCollection *v14; // rbx
  struct IImmersiveMonitor *v15; // rdi
  unsigned __int16 *v16; // rsi
  int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v18; // rax
  const struct _GUID *v20; // [rsp+30h] [rbp-59h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-41h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int16 *v26; // [rsp+70h] [rbp-19h] BYREF
  __int64 v27; // [rsp+78h] [rbp-11h]
  __int64 v28; // [rsp+80h] [rbp-9h]
  HWND v29; // [rsp+88h] [rbp-1h] BYREF
  __int64 v30; // [rsp+90h] [rbp+7h] BYREF
  char v31; // [rsp+98h] [rbp+Fh]
  __int64 v32; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+F8h] [rbp+6Fh] BYREF

  v32 = -2LL;
  v7 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v8 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, _QWORD))a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  ImmersiveApp = v8(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v21);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v21, &v24);
    if ( ImmersiveApp >= 0 )
    {
      v25 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v25);
      if ( ImmersiveApp >= 0 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        v10 = v21;
        v11 = (*v21)[4];
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        v27 = -1LL;
        v28 = -1LL;
        ImmersiveApp = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), unsigned __int16 **))v11)(
                         v10,
                         &v26);
        if ( ImmersiveApp >= 0 )
        {
          v34 = 0LL;
          v12 = (CApplicationManager *)((char *)this - 240);
          v29 = a2;
          v30 = 0LL;
          v31 = 0;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
          CApplicationManager::_RemoveWindowFromGlom((char *)this - 240, &v29, a3);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          v23 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
          ImmersiveApp = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *, __int64 *))(**((_QWORD **)this + 42)
                                                                                                 + 32LL))(
                           *((_QWORD *)this + 42),
                           0LL,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v23,
                           &v34);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v22 = 0LL;
          v13 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a3 + 464LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
          v13(a3, &v22);
          v14 = (CApplicationManager *)((char *)this + 384);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
          v15 = v22;
          v16 = v26;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(v14, v26);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           v12,
                           (CallerIdentity *)v16,
                           (unsigned __int16 **)v25,
                           NextGlomId,
                           v15,
                           v20,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom((__int64)v12, 0LL, a5, 0, v34);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom((__int64)v12, 0LL, a3, 9, v34);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        if ( ImmersiveApp >= 0 )
        {
          v18 = a5;
          a5 = 0LL;
          *v7 = (struct IImmersiveApplicationInternal *)v18;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
