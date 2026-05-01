/*
 * XREFs of ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180010D68
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180010FF0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x18012EAE0 (-AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PE.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x180136BA4 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180069E30 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x180120D00 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_AddPresentedWindowCallbackTrigger(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _DWORD *),
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v9; // r15
  _DWORD *v10; // rax
  _DWORD *v11; // rsi
  int v12; // r14d
  __int64 (__fastcall *v13)(_QWORD, GUID *, _DWORD *); // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, __int64 *); // rbx
  int v19; // ebx
  char v20; // al
  _DWORD *v21; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+58h] [rbp-8h]

  v22[1] = -2LL;
  v9 = a6;
  *a6 = 0;
  v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    v10[2] = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    v10[10] = 0;
    *(_QWORD *)v10 = &CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::`vftable';
    v10[12] = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v21 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  if ( v11 )
  {
    LODWORD(a6) = 2;
    v22[0] = a5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11 + 6);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v11 + 6,
            &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a,
            v22,
            &a6);
    if ( v12 >= 0 )
    {
      v13 = **a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11 + 4);
      v12 = v13(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v11 + 4);
      if ( v12 >= 0 )
      {
        v11[2] = a2;
        *((_QWORD *)v11 + 4) = a4;
        v11[10] = _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
        v12 = 0;
        v14 = *(_QWORD *)(a1 + 96);
        if ( v14 != *(_QWORD *)(a1 + 112)
          || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                      a1 + 88,
                      v14 + 1),
              v12 >= 0) )
        {
          v15 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (*(_QWORD *)(a1 + 96))++);
          if ( v15 )
          {
            *v15 = v11;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
          }
        }
        if ( v12 >= 0 )
        {
          *v9 = v11[10];
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          {
            v23 = 0LL;
            v24 = 0LL;
            v25 = 0LL;
            v17 = *((_QWORD *)v11 + 2);
            v18 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 32LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v23);
            v24 = -1LL;
            v25 = -1LL;
            if ( v18(v17, &v23) >= 0
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v19 = v23;
              v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *)))(*a3)[20])(a3);
              WPP_SF_Sdd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                30,
                (unsigned int)&WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids,
                v19,
                v20,
                *v9);
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v23);
          }
        }
      }
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v12;
}
