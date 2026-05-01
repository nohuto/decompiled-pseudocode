/*
 * XREFs of ?Finalize@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180130D94
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180130FB8 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005C5C0 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // r14
  _QWORD *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a1 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 584) == 15 )
  {
    v4 = (__int64 *)(a1 + 32);
    v5 = (__int64 *)(a1 + 64);
    v6 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 != a1 + 64 )
    {
      while ( *v6 )
      {
        if ( ++v6 == v5 )
        {
          while ( v4 != v5 )
          {
            v7 = a2[1];
            v8 = 0;
            v9 = *v4;
            if ( v7 == a2[3] )
            {
              v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                     (__int64)a2,
                     v7 + 1,
                     a3);
              if ( v8 < 0 )
                goto LABEL_15;
            }
            v10 = (_QWORD *)(*a2 + 8 * a2[1]++);
            if ( v10 )
              *v10 = v9;
            if ( v8 < 0 )
            {
LABEL_15:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xC5,
                (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
                (const char *)(unsigned int)v8);
              return (unsigned int)v8;
            }
            ++v4;
          }
          return 0LL;
        }
      }
      return 2147500036LL;
    }
    return 0LL;
  }
  return 2147500036LL;
}
