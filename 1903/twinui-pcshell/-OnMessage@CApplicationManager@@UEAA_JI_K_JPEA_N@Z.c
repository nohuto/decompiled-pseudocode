/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800238A0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18001FF50 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x180026450 (CDelayIAMOperations--AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800266B8 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GU.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18005A790 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnMessage(
        CApplicationManager *this,
        int a2,
        HWND a3,
        unsigned int a4,
        bool *a5)
{
  char v9; // r14
  int v10; // r15d
  bool v11; // al
  bool v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v25; // rbx
  __int64 v26; // rsi
  _DWORD *v27; // r12
  __int64 v28; // r14
  void *v29; // r15
  unsigned int Ptr; // r13d
  _DWORD *v31; // rdi
  _DWORD *v32; // rax
  _DWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rcx
  const struct std::nothrow_t *v38; // rdx
  const struct std::nothrow_t *v39; // rdx
  struct IObjectArray *v40; // rcx
  __int64 v41; // rcx
  struct CDelayIAMOperations::COperation *v42; // rbx
  struct CDelayIAMOperations::COperation *v43; // rax
  struct CDelayIAMOperations::COperation *v44; // rbx
  struct IObjectArray *v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  int v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  bool *v53; // [rsp+70h] [rbp-90h]
  HWND v54; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h]
  char v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+A0h] [rbp-60h]
  void *v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+B0h] [rbp-50h]
  _QWORD v62[8]; // [rsp+B8h] [rbp-48h] BYREF
  GUID iid; // [rsp+F8h] [rbp-8h] BYREF
  WCHAR Buffer[40]; // [rsp+110h] [rbp+10h] BYREF

  v62[2] = -2LL;
  v53 = a5;
  v9 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister == a2 || CApplicationManager::_uMsgWindowServiceUnregister == a2 )
  {
    if ( GlobalGetAtomNameW(a4, Buffer, 40) )
    {
      if ( IIDFromString(Buffer, &iid) >= 0
        && (unsigned int)GetWindowBand(a3, &v49)
        && ((v49 == 1 || v49 == 8) && v49 != 1
         || (unsigned int)GetWindowBand(a3, &v50)
         && ((v50 == 1 || v50 == 8) && v50 != 1 || v50 == 1 && (unsigned int)IsShellManagedWindow(a3))) )
      {
        v10 = 4;
        if ( !GetWindow(a3, 4u) )
        {
          v11 = (int)CoreIsWindowServiceSupported(a3, &iid) >= 0;
          v12 = CApplicationManager::_uMsgWindowServiceRegister == a2;
          if ( v11 == (CApplicationManager::_uMsgWindowServiceRegister == a2) )
          {
            AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
            v45 = (struct IObjectArray *)((char *)this - 200);
            v62[3] = &v46;
            v46 = 0LL;
            v62[4] = 0LL;
            v13 = 0LL;
            v47 = 0LL;
            v14 = 0LL;
            if ( *((_QWORD *)this + 55) )
            {
              v62[5] = 0LL;
              while ( 1 )
              {
                v15 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * v14);
                v52 = v15;
                if ( v15 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
                v16 = -1;
                v48 = 0LL;
                if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v15)(
                       v15,
                       &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                       &v48) >= 0 )
                {
                  v17 = *v48;
                  v54 = a3;
                  v55 = 0LL;
                  v56 = 0;
                  v16 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v17 + 296))(v48, &v54, 2LL) != 0)
                      - 1;
                  v18 = v55;
                  if ( v55 )
                  {
                    v55 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                  }
                }
                v19 = v48;
                if ( v48 )
                {
                  v48 = 0LL;
                  (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
                }
                v52 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                if ( !v16 )
                  break;
                if ( (unsigned __int64)++v14 >= *((_QWORD *)this + 55) )
                {
                  v13 = v47;
                  goto LABEL_26;
                }
              }
              v13 = v14;
              v20 = 0;
            }
            else
            {
LABEL_26:
              v20 = -2147319765;
            }
            if ( v20 < 0
              || (v24 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 54) + 8 * v13),
                  (**v24)(v24, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v46) < 0) )
            {
              if ( !GetPropW(a3, L"DelayServiceAvailabilityChangedOperationId") )
              {
                v62[0] = v45;
                v62[1] = a3;
                v21 = CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(
                        v45[100].lpVtbl,
                        v62);
                if ( v21 )
                  SetPropW(a3, L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v21);
              }
            }
            else
            {
              if ( v12 )
                v10 = 5;
              if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 384LL))(v46) == a3 )
                v10 |= 2u;
              v47 = 0LL;
              (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v46)(
                v46,
                &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                &v47);
              v25 = v47;
              v45 = 0LL;
              v62[6] = &v45;
              if ( (int)AgileRegistrationList::GetCallbackArray((CApplicationManager *)((char *)this + 240), &v45) >= 0 )
              {
                SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(&v57, v25, v45, 1LL, &iid, v10);
                v26 = v57;
                v27 = 0LL;
                v57 = 0LL;
                v28 = v58;
                v58 = 0LL;
                v51 = v61;
                v29 = v60;
                v60 = 0LL;
                v61 = 0;
                Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
                v31 = 0LL;
                v62[7] = 0LL;
                v32 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
                v33 = v32;
                if ( v32 )
                {
                  v32[3] = 1;
                  *(_QWORD *)v32 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
                  if ( Microsoft::WRL::Details::ModuleBase::module_ )
                    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                  *((_QWORD *)v33 + 2) = 0LL;
                  *((_QWORD *)v33 + 3) = 0LL;
                  v34 = v26;
                  v26 = 0LL;
                  v35 = *((_QWORD *)v33 + 2);
                  if ( v35 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                  *((_QWORD *)v33 + 2) = v34;
                  v36 = v28;
                  v28 = 0LL;
                  v37 = *((_QWORD *)v33 + 3);
                  if ( v37 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                  *((_QWORD *)v33 + 3) = v36;
                  v33[12] = v51;
                  v33[8] = v59;
                  *((_QWORD *)v33 + 5) = v29;
                  v29 = 0LL;
                  *(_QWORD *)v33 = off_180426810;
                  v31 = v33;
                  v27 = v33;
                }
                SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v31, 0LL);
                if ( v27 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 16LL))(v31);
                operator delete(v29, v38);
                if ( v28 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                if ( v26 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                operator delete(0LL, v39);
              }
              v40 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                ((void (__fastcall *)(struct IObjectArray *))v40->lpVtbl->Release)(v40);
              }
              v41 = v47;
              if ( v47 )
              {
                v47 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
              }
            }
            v22 = v46;
            if ( v46 )
            {
              v46 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            }
            ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          }
        }
      }
      v9 = 1;
    }
    else
    {
      v9 = 1;
    }
  }
  else if ( a2 == 1025 )
  {
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v43 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 75), a4);
    v44 = v43;
    if ( v43 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v43 + 8LL))(v43);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v44)(v44, 1LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else if ( a2 == 1026 )
  {
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v42 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 75), a4);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v42 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v42 + 8LL))(v42);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v42)(v42, 1LL);
    }
  }
  *v53 = v9;
  return 0LL;
}
