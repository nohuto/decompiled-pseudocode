/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F2F18
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045974 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCSixDofProcessor::EndGesture(MPCSixDofProcessor *this)
{
  unsigned __int64 v2; // rbx
  struct MPCGestureHandlerManager *Instance; // rcx
  MPCGestureHandlerManager *v4; // rcx
  const char *v5; // r9
  unsigned __int64 v6; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v7; // [rsp+30h] [rbp-D8h]
  __int64 v8; // [rsp+38h] [rbp-D0h]
  _BYTE v9[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+60h] [rbp-A8h]
  char v11; // [rsp+2A0h] [rbp+198h]
  char v12; // [rsp+3D8h] [rbp+2D0h]
  int v13; // [rsp+490h] [rbp+388h]
  int WorkspaceId; // [rsp+4B8h] [rbp+3B0h]

  v8 = -2LL;
  memset_0(v9, 0, 0x640uLL);
  v10 = 1600;
  v7 = &v6;
  v2 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v6 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  Instance = MPCGestureHandlerManager::GetInstance();
  WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)Instance, &v6);
  v13 = 2;
  v11 = 1;
  v12 = 1;
  v7 = &v6;
  v6 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v4 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DownLevelTo2D(v4, (__int64)v9, &v6, v5);
  *((_BYTE *)this + 3773) = 0;
  *((_DWORD *)this + 1071) = 0;
  *((_DWORD *)this + 1072) = 0;
  *((_DWORD *)this + 941) = 0;
}
