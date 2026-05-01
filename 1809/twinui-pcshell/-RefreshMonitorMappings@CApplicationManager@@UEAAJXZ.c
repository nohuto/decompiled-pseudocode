/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x1800F12F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180051484 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_040c5264cfde888b59927d935a6bda9c_::operator() @ 0x1800EBC60 (_lambda_040c5264cfde888b59927d935a6bda9c_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  HRESULT v2; // r14d
  int v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  unsigned int j; // edi
  __int64 v8; // rbx
  char IsReportingEnabled; // al
  __int64 v10; // rcx
  __int64 v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+88h] [rbp+38h] BYREF
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF

  v12[1] = -2LL;
  ppvOut = 0LL;
  punk = 0LL;
  v15 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 13) + 32LL))(
    (char *)this - 104,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v2 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v3 = *((_DWORD *)this + 200);
    v12[0] = *((_QWORD *)this + 51);
    v4 = v12[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    v13 = v3;
    v14 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v5 = *((_QWORD *)this + 61);
    for ( i = 0LL; i < v5; ++i )
    {
      if ( !lambda_040c5264cfde888b59927d935a6bda9c_::operator()(&v13, *(_QWORD *)(*((_QWORD *)this + 60) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 53) + 32LL))(
      *((_QWORD *)this + 53),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v17);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 51) + 32LL))(*((_QWORD *)this + 51), &v15) >= 0 )
    {
      for ( j = 0; j < v15; ++j )
      {
        punk = 0LL;
        v8 = *((_QWORD *)this + 51);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
        if ( (*(int (__fastcall **)(__int64, _QWORD, IUnknown **))(*(_QWORD *)v8 + 40LL))(v8, j, &punk) >= 0 )
        {
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 punk,
                                 0LL);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, IUnknown *))(*(_QWORD *)v17 + 24LL))(
            v17,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            *((unsigned int *)this + 200),
            punk);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      }
    }
    v10 = *((_QWORD *)this + 48);
    if ( v10 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 40LL))(v10, ppvOut);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v2;
}
