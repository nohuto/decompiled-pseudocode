/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180083098
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800800D4 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r8
  struct IMPCTarget *v10; // rbx
  struct IMPCTarget *v11; // [rsp+20h] [rbp-20h] BYREF
  struct IMPCTarget *v12[3]; // [rsp+28h] [rbp-18h] BYREF
  MPCHolographicInputManager *v13; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+40h] BYREF

  v13 = this;
  v12[1] = (struct IMPCTarget *)-2LL;
  v7 = (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 144LL))(a3) == 0;
  v8 = *(_QWORD *)a3;
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(v8 + 176))(a3, a2) )
    {
      if ( *a4 )
      {
        LOBYTE(v9) = *((_BYTE *)a2 + 152) != 0;
        (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a3 + 160LL))(a3, *a4, v9);
        v11 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 168LL))(a3);
        LOBYTE(v13) = 1;
        v14 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 104LL))(a3);
        v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 80LL))(a3);
        ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>(
          &v15,
          &v14,
          (bool *)&v13,
          &v11);
      }
    }
  }
  else
  {
    v10 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 168))(a3);
    v11 = v10;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v11);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v11);
    *a4 = v10;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 184LL))(
           a3,
           a2) )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, _QWORD))(*(_QWORD *)a3 + 160LL))(a3, 0LL, 0LL);
      v12[0] = v10;
      LOBYTE(v13) = 0;
      v14 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 104LL))(a3);
      v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 80LL))(a3);
      ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>(
        &v15,
        &v14,
        (bool *)&v13,
        v12);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v11);
  }
}
