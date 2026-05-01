/*
 * XREFs of ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800ECE10
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180046C64 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800E8CBC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800EAD1C (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800EEA10 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800F0F3C (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::CreateEnsuredApplication(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        struct IImmersiveApplicationInternal **a4)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  struct IImmersiveMonitor *v15; // rbx
  int NextGlomId; // eax
  int ImmersiveApp; // eax
  int v18; // eax
  int v19; // eax
  CImmersiveAppFinderByApplication *v20; // rax
  __int64 v21; // r8
  struct IImmersiveApplicationInternal *v22; // rax
  const struct _GUID *v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v26; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IImmersiveApplicationInternal *v29; // [rsp+90h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v30; // [rsp+A8h] [rbp+48h] BYREF

  v27[1] = -2LL;
  *a4 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v8 = *((_QWORD *)this + 42);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
         v8,
         0LL,
         &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
         &v25);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v30 = 0LL;
    v11 = *((_QWORD *)this + 40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v11 + 72LL))(
            v11,
            0LL,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &v30);
    v10 = v12;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
      v15 = v30;
      NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId((CApplicationManager *)((char *)this + 384), a2);
      ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                       (CApplicationManager *)((char *)this - 240),
                       (CallerIdentity *)a2,
                       a3,
                       NextGlomId,
                       v15,
                       v24,
                       (void **)&v29);
      v10 = ImmersiveApp;
      if ( ImmersiveApp >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v25 + 48LL))(
                v25,
                v29,
                0LL,
                0LL,
                8,
                0LL);
        v10 = v18;
        if ( v18 >= 0 )
        {
          v19 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
                  (CApplicationManager *)((char *)this + 384),
                  &v29,
                  0LL);
          v10 = v19;
          if ( v19 >= 0 )
          {
            v27[0] = 0LL;
            v20 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                    (CImmersiveAppFinderByApplication *)&v26,
                    v29);
            CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
              (__int64)this + 384,
              v20,
              v21,
              v27);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
            v26 = v29;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
            v10 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
                    (char *)this + 384,
                    &v26,
                    v27[0]);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
            if ( v10 >= 0 )
            {
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v29 + 176LL))(v29);
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v29 + 544LL))(v29);
              v22 = v29;
              v29 = 0LL;
              *a4 = v22;
              v10 = 0;
              goto LABEL_15;
            }
            v13 = (unsigned int)v10;
            v14 = 3532LL;
          }
          else
          {
            v13 = (unsigned int)v19;
            v14 = 3528LL;
          }
        }
        else
        {
          v13 = (unsigned int)v18;
          v14 = 3525LL;
        }
      }
      else
      {
        v13 = (unsigned int)ImmersiveApp;
        v14 = 3523LL;
      }
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = 3517LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v13);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDB9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  return (unsigned int)v10;
}
