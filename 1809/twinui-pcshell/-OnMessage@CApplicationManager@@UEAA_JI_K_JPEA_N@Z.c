/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800375A0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x180039B40 (CDelayIAMOperations--AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x180055610 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnMessage(
        CDelayIAMOperations **this,
        int a2,
        HWND a3,
        unsigned int a4,
        bool *a5)
{
  bool *v9; // r15
  char v10; // r12
  int v11; // r13d
  bool v12; // al
  CDelayIAMOperations **v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v25; // rsi
  int CallbackArray; // eax
  struct IObjectArray *v27; // rdi
  GUID *v28; // rax
  GUID *v29; // r15
  _DWORD *v30; // rax
  _DWORD *v31; // rbx
  _DWORD *v32; // r14
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rcx
  const struct std::nothrow_t *v36; // rdx
  const struct std::nothrow_t *v37; // rdx
  __int64 v38; // rcx
  struct CDelayIAMOperations::COperation *v39; // rbx
  struct CDelayIAMOperations::COperation *v40; // rax
  struct CDelayIAMOperations::COperation *v41; // rbx
  bool v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+34h] [rbp-CCh]
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int Ptr; // [rsp+58h] [rbp-A8h]
  _QWORD v50[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct IObjectArray *v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  bool *v53; // [rsp+80h] [rbp-80h]
  HWND v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h]
  char v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  GUID iid; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR Buffer[40]; // [rsp+D0h] [rbp-30h] BYREF

  v57 = -2LL;
  v9 = a5;
  v53 = a5;
  v10 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister == a2 || CApplicationManager::_uMsgWindowServiceUnregister == a2 )
  {
    v10 = 1;
    if ( GlobalGetAtomNameW(a4, Buffer, 40)
      && IIDFromString(Buffer, &iid) >= 0
      && (unsigned int)GetWindowBand(a3, &v47)
      && ((v47 == 1 || v47 == 8) && v47 != 1
       || (unsigned int)GetWindowBand(a3, &v48)
       && ((v48 == 1 || v48 == 8) && v48 != 1 || v48 == 1 && (unsigned int)IsShellManagedWindow(a3))) )
    {
      v11 = 4;
      if ( !GetWindow(a3, 4u) )
      {
        v12 = (int)CoreIsWindowServiceSupported(a3, &iid) >= 0;
        v42 = CApplicationManager::_uMsgWindowServiceRegister == a2;
        if ( v12 == (CApplicationManager::_uMsgWindowServiceRegister == a2) )
        {
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v13 = this - 25;
          v44 = 0LL;
          v58 = 0LL;
          v14 = 0LL;
          v50[0] = 0LL;
          v15 = 0LL;
          if ( v13[80] )
          {
            v59 = 0LL;
            while ( 1 )
            {
              v16 = *((_QWORD *)v13[79] + v15);
              v52 = v16;
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
              v17 = -1;
              v45 = 0LL;
              if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
                     v16,
                     &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                     &v45) >= 0 )
              {
                v54 = a3;
                v55 = 0LL;
                v56 = 0;
                v17 = ((*(unsigned __int8 (__fastcall **)(__int64, HWND *, __int64))(*(_QWORD *)v45 + 296LL))(
                         v45,
                         &v54,
                         2LL) != 0)
                    - 1;
                v18 = v55;
                if ( v55 )
                {
                  v55 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                }
              }
              v19 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              }
              v52 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              if ( !v17 )
                break;
              if ( ++v15 >= (unsigned __int64)v13[80] )
              {
                v14 = v50[0];
                goto LABEL_26;
              }
            }
            v14 = v15;
            v20 = 0;
          }
          else
          {
LABEL_26:
            v20 = -2147319765;
          }
          if ( v20 < 0
            || (v24 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v13[79] + v14),
                (**v24)(v24, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v44) < 0) )
          {
            if ( !GetPropW(a3, L"DelayServiceAvailabilityChangedOperationId") )
            {
              v50[0] = v13;
              v50[1] = a3;
              v21 = CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(v13[100], v50);
              if ( v21 )
                SetPropW(a3, L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v21);
            }
          }
          else
          {
            if ( v42 )
              v11 = 5;
            if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 384LL))(v44) == a3 )
              v11 |= 2u;
            v46 = 0LL;
            (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v44)(
              v44,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              &v46);
            v25 = v46;
            v51 = 0LL;
            CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(v13 + 55), &v51);
            v27 = v51;
            if ( CallbackArray >= 0 )
            {
              if ( v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
              if ( v27 )
                ((void (__fastcall *)(struct IObjectArray *))v27->lpVtbl->AddRef)(v27);
              v28 = (GUID *)operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
              v29 = v28;
              v43 = 0;
              if ( v28 )
              {
                *v28 = iid;
                v43 = 1;
              }
              v50[0] = v27;
              Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
              v60 = 0LL;
              v30 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
              v31 = v30;
              v32 = 0LL;
              if ( v30 )
              {
                v30[3] = 1;
                *(_QWORD *)v30 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                *((_QWORD *)v31 + 2) = 0LL;
                *((_QWORD *)v31 + 3) = 0LL;
                v33 = v25;
                v25 = 0LL;
                v34 = *((_QWORD *)v31 + 2);
                if ( v34 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                *((_QWORD *)v31 + 2) = v33;
                v50[0] = 0LL;
                v35 = *((_QWORD *)v31 + 3);
                if ( v35 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                *((_QWORD *)v31 + 3) = v27;
                v31[12] = v43;
                v31[8] = v11;
                *((_QWORD *)v31 + 5) = v29;
                v29 = 0LL;
                *(_QWORD *)v31 = off_1803C3B28;
                v32 = v31;
              }
              SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v32, 0LL);
              if ( v32 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 16LL))(v32);
              operator delete(v29, v36);
              if ( v50[0] )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v50[0] + 16LL))(v50[0]);
              if ( v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
              operator delete(0LL, v37);
            }
            if ( v27 )
              ((void (__fastcall *)(struct IObjectArray *))v27->lpVtbl->Release)(v27);
            v38 = v46;
            if ( v46 )
            {
              v46 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
            }
          }
          v22 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v9 = v53;
        }
      }
    }
  }
  else if ( a2 == 1025 )
  {
    v10 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v40 = CDelayIAMOperations::RemoveOperation(this[75], a4);
    v41 = v40;
    if ( v40 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v40 + 8LL))(v40);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v41)(v41, 1LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else if ( a2 == 1026 )
  {
    v10 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v39 = CDelayIAMOperations::RemoveOperation(this[75], a4);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v39 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v39 + 8LL))(v39);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v39)(v39, 1LL);
    }
  }
  *v9 = v10;
  return 0LL;
}
