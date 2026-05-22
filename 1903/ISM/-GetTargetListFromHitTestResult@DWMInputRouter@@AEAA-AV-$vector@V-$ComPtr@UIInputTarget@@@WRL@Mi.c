/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1800C3D20
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C4030 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800660F8 (--$_Emplace_reallocate@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@@WR.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C39C4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        DWMInputRouter *this,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 (__fastcall ****a5)(_QWORD, GUID *, __int64 *))
{
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 *v11; // rbp
  __int64 (__fastcall ****v12)(_QWORD, GUID *, __int64 *); // r14
  char *TargetFromInputSite; // rax
  char *v14; // rdx
  struct IInputTarget *v15; // rcx
  struct IInputTarget *v17[3]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v17[1] = (struct IInputTarget *)-2LL;
  v18 = 0LL;
  v9 = a4[4];
  if ( v9 )
    NtQueryCompositionInputSinkLuid(v9, &v18);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = (__int64 *)a4[1];
  v11 = (__int64 *)a4[2];
  if ( v10 != v11 )
  {
    v12 = a5;
    do
    {
      TargetFromInputSite = (char *)DWMInputRouter::GetTargetFromInputSite(
                                      this,
                                      v17,
                                      v10,
                                      a3,
                                      (__int64)a4,
                                      (__int64)&v18,
                                      v12);
      v14 = *(char **)(a2 + 8);
      if ( *(char **)(a2 + 16) == v14 )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite>>(
          (char **)a2,
          v14,
          TargetFromInputSite);
      }
      else
      {
        *(_QWORD *)v14 = 0LL;
        if ( v14 != TargetFromInputSite )
        {
          *(_QWORD *)v14 = *(_QWORD *)TargetFromInputSite;
          *(_QWORD *)TargetFromInputSite = 0LL;
        }
        *(_QWORD *)(a2 + 8) += 8LL;
      }
      v15 = v17[0];
      if ( v17[0] )
      {
        v17[0] = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      ++v10;
    }
    while ( v10 != v11 );
  }
  return a2;
}
