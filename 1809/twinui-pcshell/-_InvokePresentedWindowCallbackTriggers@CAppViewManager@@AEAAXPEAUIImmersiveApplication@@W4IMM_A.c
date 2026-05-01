/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180060D8C
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180060D60 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18005C918 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180061030 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x180061064 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800FAE0C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  struct IUnknown *v4; // rdi
  char *v6; // r15
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rdi
  void *v15; // r8
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // rdx
  char *v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  PSRWLOCK v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  PSRWLOCK v24; // [rsp+40h] [rbp-38h]
  char *v25; // [rsp+48h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  __int64 v28; // [rsp+60h] [rbp-18h]
  struct IImmersiveApplicationInternal *v29; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v30; // [rsp+C8h] [rbp+50h]
  int v31; // [rsp+D0h] [rbp+58h]
  __int64 v32; // [rsp+D8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v23 = -2LL;
  v4 = a2;
  v6 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v22 = CApplicationManagerUtility::g_pIAMGlobals;
  v24 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    v10 = v9 - 1;
    v11 = *(_QWORD *)(a1 + 96);
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10);
      v12 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      if ( (unsigned int)SHIsSameObject(v4, *(struct IUnknown **)(v12 + 16)) )
        break;
LABEL_30:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      --v10;
      if ( !--v11 )
      {
        v8 = v22;
        goto LABEL_2;
      }
    }
    v13 = -2147467260;
    LOBYTE(v29) = 0;
    if ( v31 != 6 )
    {
      if ( *(_DWORD *)(v12 + 8) == 1 )
      {
        if ( v31 != 8 )
          goto LABEL_29;
        v20 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v30->lpVtbl->QueryInterface)(
               v30,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v20) >= 0
          && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 472LL))(v20) )
        {
          LOBYTE(v29) = 1;
          v13 = v32 != *(_QWORD *)(v12 + 32) ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        if ( !(_BYTE)v29 )
          goto LABEL_29;
      }
      else
      {
        if ( *(_DWORD *)(v12 + 8) != 2 || v32 != *(_QWORD *)(v12 + 32) )
        {
LABEL_29:
          v4 = v30;
          goto LABEL_30;
        }
        v13 = v31 != 8 ? 0x80004004 : 0;
      }
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(v12 + 16))(
           *(_QWORD *)(v12 + 16),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v29) >= 0 )
    {
      CAppViewManager::_s_QueueCallback(v29, (struct CMarshaledInterface *)(v12 + 24), v13);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          31LL,
          &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids,
          *(unsigned int *)(v12 + 40));
    }
    v14 = v12;
    v20 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    if ( v7 != v28
      || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                  (__int64)&v25,
                  v7 + 1,
                  v15),
          v7 = v26,
          v6 = v25,
          v16 >= 0) )
    {
      v26 = ++v7;
      v17 = (__int64 *)&v6[8 * v7 - 8];
      if ( v17 )
      {
        *v17 = 0LL;
        if ( v17 != &v20 )
        {
          *v17 = v12;
          v14 = 0LL;
        }
      }
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v10 < *(_QWORD *)(a1 + 96) )
    {
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(*(_QWORD *)(a1 + 88) + 8 * v10);
      v18 = *(_QWORD *)(a1 + 96);
      if ( v10 != v18 - 1 )
      {
        memmove_0(
          (void *)(*(_QWORD *)(a1 + 88) + 8 * v10),
          (const void *)(*(_QWORD *)(a1 + 88) + 8 * v10 + 8),
          8 * (v18 - v10) - 8);
        v18 = *(_QWORD *)(a1 + 96);
      }
      *(_QWORD *)(a1 + 96) = v18 - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    goto LABEL_29;
  }
LABEL_2:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    if ( v7 )
    {
      v19 = v6;
      do
      {
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(v19);
        v19 += 8;
        --v7;
      }
      while ( v7 );
    }
    LocalFree(v6);
  }
}
