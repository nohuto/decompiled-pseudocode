/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18008A218
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180089E30 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800436CC (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18008A33C (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        DWMInputRouter *this,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r14
  char *TargetFromInputSite; // rax
  char *v13; // rdx
  struct IInputTarget *v14; // rcx
  struct IInputTarget *v16[3]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v16[1] = (struct IInputTarget *)-2LL;
  v17 = 0LL;
  v8 = a4[4];
  if ( v8 )
    NtQueryCompositionInputSinkLuid(v8, &v17);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = a4[1];
  v10 = a4[2];
  if ( v9 != v10 )
  {
    v11 = a5;
    do
    {
      TargetFromInputSite = (char *)DWMInputRouter::GetTargetFromInputSite(this, v16, (__int64)a4, (__int64)&v17, v11);
      v13 = *(char **)(a2 + 8);
      if ( *(char **)(a2 + 16) == v13 )
      {
        std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
          (char **)a2,
          v13,
          TargetFromInputSite);
      }
      else
      {
        *(_QWORD *)v13 = 0LL;
        if ( v13 != TargetFromInputSite )
        {
          *(_QWORD *)v13 = *(_QWORD *)TargetFromInputSite;
          *(_QWORD *)TargetFromInputSite = 0LL;
        }
        *(_QWORD *)(a2 + 8) += 8LL;
      }
      v14 = v16[0];
      if ( v16[0] )
      {
        v16[0] = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v9 += 8LL;
    }
    while ( v9 != v10 );
  }
  return a2;
}
