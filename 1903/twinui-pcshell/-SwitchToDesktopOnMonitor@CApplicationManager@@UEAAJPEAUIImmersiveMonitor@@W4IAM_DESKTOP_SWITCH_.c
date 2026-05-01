/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18011A430
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18011A380 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x18011A660 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x18010A654 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x18010AA7C (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHand.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18011432C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x18011B4FC (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801201FC (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(int **a1, __int64 a2, int a3)
{
  signed int Error; // edi
  HANDLE *v7; // rbx
  bool IsCalledOnIAMThread; // al
  bool v9; // r12
  int v10; // r14d
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  HANDLE *v14; // rax
  HANDLE Event; // rax
  int v16; // edi
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  int **v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  bool v22; // [rsp+40h] [rbp-20h]
  HANDLE *v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  v19[1] = -2LL;
  Error = 0;
  if ( (a3 & 0x20) == 0 )
  {
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch((CApplicationManager *)a1);
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  v7 = 0LL;
  v19[0] = 0LL;
  IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread((CIAMGlobals *)a1);
  v9 = IsCalledOnIAMThread;
  v10 = 3;
  if ( (a3 & 4) != 0 )
    goto LABEL_17;
  if ( IsCalledOnIAMThread )
  {
    Error = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)(a1 - 19));
    goto LABEL_17;
  }
  v11 = CreateRefCountedObj<CAutoHandle<void *>,>(&v25);
  v12 = 0LL;
  v7 = 0LL;
  if ( v19 != v11 )
  {
    v7 = (HANDLE *)*v11;
    v12 = *v11;
    *v11 = 0LL;
  }
  v19[0] = v12;
  v13 = v25;
  v14 = v7;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v7;
  }
  if ( v14 )
  {
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    *(_QWORD *)(v12 + 8) = Event;
    if ( Event )
      Error = 0;
    else
      Error = ResultFromKnownLastError();
    if ( Error >= 0 )
    {
      v10 = 4;
      v19[0] = v7;
LABEL_17:
      if ( Error >= 0 )
      {
        v25 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
        v20 = a1 - 19;
        v21 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
        v22 = v9;
        v23 = v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
        v24 = a3;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v16 = CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(a1[81], (HWND)&v20, v10);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v16 )
        {
          Error = 0;
          if ( v7 )
            WaitForSingleObjectEx(v7[1], 0x1388u, 0);
        }
        else
        {
          Error = -2147467259;
        }
        v17 = (__int64)v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      }
    }
  }
  else
  {
    Error = -2147024882;
  }
  if ( v7 )
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  return (unsigned int)Error;
}
