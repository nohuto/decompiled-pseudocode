/*
 * XREFs of ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001DB0C
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 * Callees:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18001D93C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x18001E1AC (-_Reallocate_exactly@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInpu.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001E7B0 (--$_Emplace_reallocate@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@@WR.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18001EB60 (-terminate@details@gsl@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct(gsl::details *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  __int64 *v10; // r8
  __int64 *v11; // rdx
  int v13; // ebx
  __int64 v14; // [rsp+28h] [rbp-50h]
  wil::ResultException *v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  gsl::details *v18; // [rsp+80h] [rbp+8h]
  gsl::details *v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  v18 = a1;
  v3 = a2;
  v4 = (__int64)a1;
  v5 = *(unsigned int *)(a3 + 48);
  v6 = *(_QWORD *)(a3 + 40);
  v16 = v5;
  v17 = v6;
  if ( !v6 && v5 )
LABEL_21:
    gsl::details::terminate(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  if ( v5 )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(a2, v5);
    v5 = v16;
  }
  v7 = 0LL;
  v21 = 0LL;
  v14 = v5;
  v8 = v5;
  while ( v7 != v5 )
  {
    if ( v7 == v8 )
      goto LABEL_21;
    try
    {
      InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(
                                       v4,
                                       (__int64 *)&v20,
                                       *(_QWORD *)(v17 + 8 * v7));
      v10 = InputSiteFromInputSinkHandle;
      v11 = (__int64 *)v3[1];
      if ( (__int64 *)v3[2] == v11 )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite>>(
          v3,
          v11,
          InputSiteFromInputSinkHandle);
      }
      else
      {
        *v11 = 0LL;
        if ( v11 != InputSiteFromInputSinkHandle )
        {
          *v11 = *InputSiteFromInputSinkHandle;
          *InputSiteFromInputSinkHandle = 0LL;
        }
        v3[1] += 8LL;
      }
      a1 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(gsl::details *, __int64 *, __int64 *))(*(_QWORD *)a1 + 16LL))(a1, v11, v10);
      }
    }
    catch ( wil::ResultException *v15 )
    {
      v13 = *((_DWORD *)v15 + 7);
      if ( v13 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL) )
        throw;
      v4 = (__int64)v18;
      v3 = a2;
      v7 = v21;
      v5 = v14;
    }
    if ( v7 < 0 )
      goto LABEL_21;
    v8 = v16;
    if ( v7 == v16 )
      goto LABEL_21;
    v21 = ++v7;
  }
  return v3;
}
