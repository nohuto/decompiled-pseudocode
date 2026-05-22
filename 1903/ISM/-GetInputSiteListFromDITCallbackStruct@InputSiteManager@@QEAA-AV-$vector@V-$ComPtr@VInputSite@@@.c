/*
 * XREFs of ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000CFF0
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180001C70 (-_Reallocate_exactly@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInpu.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F430 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800660F8 (--$_Emplace_reallocate@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@@WR.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *InputSiteFromInputSinkHandle; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+20h]

  v5 = *(unsigned int *)(a3 + 48);
  v6 = *(_QWORD **)(a3 + 40);
  if ( v6 || !*(_DWORD *)(a3 + 48) )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    if ( v5 )
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly((char **)a2, v5);
    v5 = (unsigned __int64)&v6[v5];
    goto LABEL_5;
  }
  _o_terminate(a1);
LABEL_16:
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite>>(a2, v9, v8);
  while ( 1 )
  {
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v10 + 16LL))(v10, v9, v8);
    }
    ++v6;
LABEL_5:
    v13 = v6;
    if ( v6 == (_QWORD *)v5 )
      return a2;
    InputSiteFromInputSinkHandle = (_QWORD *)InputSiteManager::GetInputSiteFromInputSinkHandle(a1, &v12, *v6);
    v8 = InputSiteFromInputSinkHandle;
    v9 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD **)(a2 + 16) == v9 )
      goto LABEL_16;
    *v9 = 0LL;
    if ( v9 != InputSiteFromInputSinkHandle )
    {
      *v9 = *InputSiteFromInputSinkHandle;
      *InputSiteFromInputSinkHandle = 0LL;
    }
    *(_QWORD *)(a2 + 8) += 8LL;
  }
}
