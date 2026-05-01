/*
 * XREFs of _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1800EBD40
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___::operator() @ 0x1800EC160 (CDelayIAMOperations--CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___--operator().c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180078A9C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800F71D4 (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F7318 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1800F77C8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_20045b0b3bc9a0c8c612018082f6611c_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  struct IObjectArray *v3; // rbx
  __int64 v5; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v6; // [rsp+48h] [rbp-18h] BYREF
  __int64 v7[2]; // [rsp+50h] [rbp-10h] BYREF
  int v8; // [rsp+80h] [rbp+20h] BYREF
  struct IObjectArray *v9; // [rsp+88h] [rbp+28h] BYREF
  struct IImmersiveApplication *v10; // [rsp+90h] [rbp+30h] BYREF
  struct ISyncIAMEventHandler *v11; // [rsp+98h] [rbp+38h] BYREF

  v7[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( (int)CApplicationManager::_GetForegroundApplicationNoLock(*(CApplicationManager **)a1, &v10) >= 0 )
  {
    v7[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v10, v7) >= 0 )
    {
      v6 = 0LL;
      v2 = v7[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
      (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v2 + 464LL))(v2, &v6);
      if ( (unsigned int)SHIsSameObject(v6, *(struct IUnknown **)(a1 + 8)) )
      {
        v9 = 0LL;
        v5 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(*(CApplicationManager **)a1, 0LL, &v9) >= 0 )
        {
          v3 = v9;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
          if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))v3->lpVtbl->GetAt)(
                 v3,
                 0LL,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v5) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 48LL))(v5, &v8) >= 0
            && v8 )
          {
            v11 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(*(CApplicationManager **)a1, &v11) >= 0 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, __int64, struct IImmersiveApplication *, int, int, int))(*(_QWORD *)v11 + 24LL))(
                v11,
                v9,
                (*(_QWORD *)a1 + 248LL) & -(__int64)(*(_QWORD *)a1 != 0LL),
                v10,
                8,
                8,
                0xFFFF);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
}
