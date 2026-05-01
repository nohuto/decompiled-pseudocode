/*
 * XREFs of ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18015AA28
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18004D3E0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18015AD10 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180069C80 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180081A2C (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@Z1@Z @ 0x18015A2AC (-EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18015A648 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?Finalize@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18015A804 (-Finalize@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@App.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18015A8E8 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        _QWORD *a1,
        HWND a2)
{
  DWORD WindowThreadProcessId; // r14d
  void *v6; // r8
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  struct tagRECT v10; // xmm6
  void *v11; // r8
  int v12[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  LPARAM lParam[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  struct tagRECT Rect; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v21[8]; // [rsp+A8h] [rbp-60h] BYREF
  HWND v22; // [rsp+B0h] [rbp-58h]
  struct tagRECT v23; // [rsp+B8h] [rbp-50h]
  _BYTE v24[32]; // [rsp+C8h] [rbp-40h] BYREF
  int v25; // [rsp+E8h] [rbp-20h]
  _BYTE v26[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v27; // [rsp+FCh] [rbp-Ch]
  HWND v28; // [rsp+100h] [rbp-8h]
  struct tagRECT v29; // [rsp+108h] [rbp+0h]
  _BYTE v30[552]; // [rsp+118h] [rbp+10h] BYREF
  int v31; // [rsp+340h] [rbp+238h]
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  lParam[3] = -2LL;
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)a1);
  WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL);
  if ( !WindowThreadProcessId )
    return 2147943800LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x18A,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v7);
  *(_QWORD *)v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
         (__int64)v12,
         4uLL,
         v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v26[0] = 0;
    v27 = -1;
    v28 = a2;
    v10 = Rect;
    v29 = Rect;
    memset_0(v30, 0, sizeof(v30));
    v31 = 0;
    v21[0] = 0;
    v22 = a2;
    v23 = v10;
    memset_0(v24, 0, sizeof(v24));
    v25 = 0;
    LOBYTE(v17[0]) = 0;
    v17[1] = a2;
    v18 = v10;
    v19 = 0LL;
    lParam[0] = (LPARAM)v26;
    lParam[1] = (LPARAM)v21;
    lParam[2] = (LPARAM)v17;
    ApplicationViewManagement::AssociatedWindowWin32Calls::EnumThreadWindows(
      WindowThreadProcessId,
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>,
      (LPARAM)lParam);
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::Finalize(
      (__int64)v26,
      v12,
      v11);
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
      (__int64)v21,
      v12);
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
      (__int64)v17,
      v12);
    *a1 = *(_QWORD *)v12;
    a1[2] = v14;
    a1[1] = v13;
    a1[3] = v15;
    *(_QWORD *)v12 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    v15 = 0LL;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)v8);
  }
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)v12);
  return v9;
}
