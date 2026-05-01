/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x1801350F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180057028 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_::operator() @ 0x18012DED4 (_lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  HRESULT v2; // r15d
  int v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  unsigned int j; // r14d
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, IUnknown **); // rbx
  char IsReportingEnabled; // al
  __int64 v11; // rcx
  __int64 v13[2]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+48h] BYREF
  void *ppvOut; // [rsp+A8h] [rbp+50h] BYREF

  v13[1] = -2LL;
  ppvOut = 0LL;
  punk = 0LL;
  v16 = 2;
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
    v3 = *((_DWORD *)this + 202);
    v13[0] = *((_QWORD *)this + 51);
    v4 = v13[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    v14 = v3;
    v15[0] = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v5 = *((_QWORD *)this + 61);
    for ( i = 0LL; i < v5; ++i )
    {
      if ( !lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_::operator()(&v14, *(_QWORD *)(*((_QWORD *)this + 60) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 53) + 32LL))(
      *((_QWORD *)this + 53),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v18);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 51) + 32LL))(*((_QWORD *)this + 51), &v16) >= 0 )
    {
      for ( j = 0; j < v16; ++j )
      {
        punk = 0LL;
        v8 = *((_QWORD *)this + 51);
        v9 = *(int (__fastcall **)(__int64, _QWORD, IUnknown **))(*(_QWORD *)v8 + 40LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        if ( v9(v8, j, &punk) >= 0 )
        {
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 punk,
                                 0LL);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, IUnknown *))(*(_QWORD *)v18 + 24LL))(
            v18,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            *((unsigned int *)this + 202),
            punk);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      }
    }
    v11 = *((_QWORD *)this + 48);
    if ( v11 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 40LL))(v11, ppvOut);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v2;
}
