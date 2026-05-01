/*
 * XREFs of ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x1800514C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180052340 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x1800531B8 (CIAMGlobals--QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CClassicWindowManager::AttachApplicationId(CClassicWindowManager *this, HWND a2, unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  HWND v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v11 = a2;
  if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              (char *)this + 96,
              &v11,
              v8,
              &v12,
              -2LL,
              v6,
              v7) < 0 )
  {
    CoTaskMemFree(a3);
  }
  else
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v12);
    (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v9 + 48LL))(v9, a3);
    v11 = a2;
    CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___(v10, &v11);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
