/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18012FE78
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180132F14 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800862AC (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 */

void __fastcall MPCSixDofProcessor::EndGesture(MPCSixDofProcessor *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 **v5; // rax
  __int64 **v6; // rbx
  __int64 *v7; // rax
  const char *v8; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-818h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-808h] BYREF
  int v11; // [rsp+48h] [rbp-7F0h]
  char v12; // [rsp+C8h] [rbp-770h]
  char v13; // [rsp+208h] [rbp-630h]
  int v14; // [rsp+2C0h] [rbp-578h]
  int WorkspaceId; // [rsp+2E8h] [rbp-550h]

  memset_0(v10, 0, 0x7F0uLL);
  v11 = 2032;
  MPCGestureHandlerManager::GetInstance();
  v3 = v2;
  v4 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v9,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId(v3, v4);
  v14 = 2;
  v12 = 1;
  v13 = 1;
  MPCGestureHandlerManager::GetInstance();
  v6 = v5;
  v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v9,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(v6, (__int64)v10, v7, v8);
  *((_BYTE *)this + 4645) = 0;
  *(_QWORD *)((char *)this + 5164) = 0LL;
  *((_DWORD *)this + 1159) = 0;
}
