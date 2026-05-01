/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180066C6C
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180066C40 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x180066F50 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18006E440 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x18014022C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  struct IUnknown *v4; // r12
  __int64 v5; // rdi
  _QWORD *v6; // r15
  unsigned __int64 v7; // r14
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // r12d
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 v15; // rdi
  int v16; // eax
  __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 i; // rbx
  __int64 v22; // rcx
  char v23; // [rsp+28h] [rbp-49h]
  struct IImmersiveApplicationInternal *v24; // [rsp+30h] [rbp-41h] BYREF
  __int64 v25; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-31h] BYREF
  __int64 v27; // [rsp+48h] [rbp-29h]
  __int64 v28; // [rsp+50h] [rbp-21h]
  __int64 v29; // [rsp+58h] [rbp-19h]
  __int64 v30; // [rsp+60h] [rbp-11h] BYREF
  PSRWLOCK v31; // [rsp+68h] [rbp-9h]
  __int64 v32; // [rsp+70h] [rbp-1h]
  PSRWLOCK v33; // [rsp+78h] [rbp+7h]

  v32 = -2LL;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v31 = CApplicationManagerUtility::g_pIAMGlobals;
  v33 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *(_QWORD *)(v5 + 96);
  if ( v9 )
  {
    v10 = v9 - 1;
    v11 = *(_QWORD *)(v5 + 96);
    while ( 1 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(v5 + 88) + 8 * v10);
      v12 = v30;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
      if ( (unsigned int)SHIsSameObject(v4, *(struct IUnknown **)(v12 + 16)) )
        break;
LABEL_32:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      --v10;
      if ( !--v11 )
      {
        v8 = v31;
        goto LABEL_2;
      }
    }
    v13 = -2147467260;
    v23 = 0;
    if ( a3 == 6 )
      goto LABEL_15;
    if ( *(_DWORD *)(v12 + 8) == 1 )
    {
      if ( a3 == 8 )
      {
        v24 = 0LL;
        QueryInterface = a2->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, struct IImmersiveApplicationInternal **))QueryInterface)(
               a2,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v24) >= 0
          && !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 472LL))(v24) )
        {
          v23 = 1;
          v13 = a4 != *(_QWORD *)(v12 + 32) ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        if ( v23 )
          goto LABEL_15;
        v5 = a1;
      }
    }
    else if ( *(_DWORD *)(v12 + 8) == 2 && a4 == *(_QWORD *)(v12 + 32) )
    {
      v13 = a3 != 8 ? 0x80004004 : 0;
LABEL_15:
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(v12 + 16))(
             *(_QWORD *)(v12 + 16),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v24) >= 0 )
      {
        CAppViewManager::_s_QueueCallback(v24, (struct CMarshaledInterface *)(v12 + 24), v13);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            31LL,
            &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids,
            *(unsigned int *)(v12 + 40));
      }
      v15 = v12;
      v25 = v12;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
      if ( v7 != v29
        || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                    &v26,
                    v7 + 1),
            v7 = v27,
            v6 = v26,
            v16 >= 0) )
      {
        v27 = ++v7;
        v17 = &v6[v7 - 1];
        if ( v17 )
        {
          *v17 = 0LL;
          if ( v17 != &v25 )
          {
            *v17 = v12;
            v15 = 0LL;
          }
        }
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v5 = a1;
      v18 = *(_QWORD *)(a1 + 96);
      if ( v10 < v18 )
      {
        v19 = *(_QWORD *)(a1 + 88);
        v20 = *(_QWORD *)(v19 + 8 * v10);
        if ( v20 )
        {
          *(_QWORD *)(v19 + 8 * v10) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v18 = *(_QWORD *)(a1 + 96);
        }
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
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    }
    v4 = a2;
    goto LABEL_32;
  }
LABEL_2:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    for ( i = 0LL; i < v7; ++i )
    {
      v22 = v6[i];
      if ( v22 )
      {
        v6[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    LocalFree(v6);
  }
}
