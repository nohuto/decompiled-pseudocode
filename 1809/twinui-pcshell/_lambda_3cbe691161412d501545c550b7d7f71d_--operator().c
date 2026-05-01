/*
 * XREFs of _lambda_3cbe691161412d501545c550b7d7f71d_::operator() @ 0x18008A5A0
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___ @ 0x18008A4EC (CClassicWindowManager--ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005C5C0 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_3cbe691161412d501545c550b7d7f71d_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  void *v5; // r8
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) && *a2 != *(_QWORD *)(a1 + 8) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 24LL))(*a2);
    v6 = *(_QWORD **)(a1 + 16);
    v7 = v4;
    v8 = v6[1];
    if ( v8 == v6[3]
      && (v9 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 *(_QWORD *)(a1 + 16),
                 v8 + 1,
                 v5),
          v9 < 0) )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2255LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      v10 = (__int64 *)(*v6 + 8 * v6[1]++);
      if ( v10 )
        *v10 = v7;
    }
  }
  return 1;
}
