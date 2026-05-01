/*
 * XREFs of ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18012F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800112A8 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x18012A358 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x18012CD00 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180131CF4 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180134B0C (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::CreateEnsuredApplication(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        struct IImmersiveApplicationInternal **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  CApplicationManager *v17; // rdi
  CActivationBasedAppAndGlomCollection *v18; // rsi
  struct IImmersiveMonitor *v19; // rbx
  int NextGlomId; // eax
  int ImmersiveApp; // eax
  int v22; // eax
  int v23; // eax
  CImmersiveAppFinderByApplication *v24; // rax
  __int64 v25; // r8
  struct IImmersiveApplicationInternal *v26; // rax
  const struct _GUID *v28; // [rsp+28h] [rbp-38h]
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v30; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IImmersiveApplicationInternal *v33; // [rsp+90h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v34; // [rsp+A8h] [rbp+48h] BYREF

  v31[1] = -2LL;
  *a4 = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  v8 = *((_QWORD *)this + 42);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v10 = v9(v8, 0LL, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v29);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v34 = 0LL;
    v12 = *((_QWORD *)this + 40);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
    v14 = v13(v12, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v34);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v17 = (CApplicationManager *)((char *)this - 240);
      v18 = (CApplicationManager *)((char *)this + 384);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
      v19 = v34;
      NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(v18, a2);
      ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                       v17,
                       (CallerIdentity *)a2,
                       a3,
                       NextGlomId,
                       v19,
                       v28,
                       (void **)&v33);
      v11 = ImmersiveApp;
      if ( ImmersiveApp >= 0 )
      {
        v22 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v29 + 48LL))(
                v29,
                v33,
                0LL,
                0LL,
                8,
                0LL);
        v11 = v22;
        if ( v22 >= 0 )
        {
          v23 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
                  v18,
                  (__int64 (__fastcall ****)(__int64, GUID *, unsigned __int64 *))&v33,
                  0LL);
          v11 = v23;
          if ( v23 >= 0 )
          {
            v31[0] = 0LL;
            v24 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                    (CImmersiveAppFinderByApplication *)&v30,
                    (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))v33);
            CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
              (__int64)v18,
              v24,
              v25,
              v31);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
            v30 = v33;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
            v11 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
                    v18,
                    &v30,
                    v31[0]);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
            if ( v11 >= 0 )
            {
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v33 + 176LL))(v33);
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v33 + 544LL))(v33);
              v26 = v33;
              v33 = 0LL;
              *a4 = v26;
              v11 = 0;
              goto LABEL_15;
            }
            v15 = (unsigned int)v11;
            v16 = 3695LL;
          }
          else
          {
            v15 = (unsigned int)v23;
            v16 = 3691LL;
          }
        }
        else
        {
          v15 = (unsigned int)v22;
          v16 = 3688LL;
        }
      }
      else
      {
        v15 = (unsigned int)ImmersiveApp;
        v16 = 3686LL;
      }
    }
    else
    {
      v15 = (unsigned int)v14;
      v16 = 3680LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v15);
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5C,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  return (unsigned int)v11;
}
