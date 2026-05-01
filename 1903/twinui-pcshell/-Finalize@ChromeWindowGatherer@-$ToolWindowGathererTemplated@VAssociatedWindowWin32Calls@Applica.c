/*
 * XREFs of ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18015A648
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18015AA28 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180069C80 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18015A0F8 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x18015B958 (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND *v2; // rbx
  HWND v5; // rcx
  signed int Error; // eax
  unsigned int v7; // ebx
  HWND *v9; // rbp
  HWND *v10; // r14
  HWND v11; // rdi
  void *v12; // r8
  RECT v13; // xmm6
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdx
  HWND v17; // rbp
  HWND *v18; // rdx
  int v19[4]; // [rsp+30h] [rbp-488h] BYREF
  RECT v20; // [rsp+40h] [rbp-478h] BYREF
  WCHAR ClassName[264]; // [rsp+50h] [rbp-468h] BYREF
  WCHAR String2[264]; // [rsp+260h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+0h]

  v2 = (HWND *)(a1 + 32);
  if ( !*(_QWORD *)(a1 + 32) )
    return 0LL;
  memset_0(ClassName, 0, 0x208uLL);
  v5 = *v2;
  v19[0] = 0;
  if ( GetClassNameW(v5, ClassName, 260) )
  {
    v9 = v2 + 4;
    v10 = v2;
    do
    {
      v11 = *v10;
      if ( !GetClassNameW(*v10, String2, 260) )
        break;
      if ( CompareStringOrdinal(ClassName, -1, String2, -1, 0) != 2 )
        break;
      v13 = *(RECT *)(a1 + 16);
      if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(v11) )
        break;
      v20 = v13;
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
                  &v20,
                  v11,
                  0,
                  v19) < 0 )
        break;
      ++v10;
    }
    while ( v10 != v9 );
    if ( (v19[0] & 0xF) == 0xF )
    {
      v14 = 0LL;
      v15 = v9 >= v2 ? 4 : 0;
      if ( v2 <= v9 )
      {
        do
        {
          v16 = a2[1];
          v17 = *v2;
          if ( v16 != a2[3]
            || CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)a2,
                 v16 + 1,
                 v12) >= 0 )
          {
            v18 = (HWND *)(*a2 + 8 * a2[1]++);
            if ( v18 )
              *v18 = v17;
          }
          ++v2;
          ++v14;
        }
        while ( v14 != v15 );
      }
    }
    return 0LL;
  }
  Error = ResultFromKnownLastError();
  v7 = Error;
  if ( Error < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)Error);
  return v7;
}
