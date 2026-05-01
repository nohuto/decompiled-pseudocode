/*
 * XREFs of ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18006EA00
 * Callers:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18006E97C (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1801219B0 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180069C80 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180081A2C (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(
        __int64 a1,
        LPARAM a2,
        void *a3,
        __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  LPARAM lParam; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+58h] [rbp-20h]

  lParam = a2;
  v10 = (int)a3;
  v6 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
         (__int64)&v11,
         0x14uLL,
         a3) >= 0 )
    EnumWindows(CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc, (LPARAM)&lParam);
  if ( (a4 & 2) != 0 && *(_BYTE *)(a1 + 72) )
    a4 |= 4uLL;
  v7 = v12;
  if ( v12 )
  {
    do
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr
                                                                     + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        *(_QWORD *)(v11 + 8 * v6++),
        0LL,
        *(unsigned int *)(a1 + 76),
        a4);
    while ( v6 < v7 );
  }
  return CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(&v11);
}
