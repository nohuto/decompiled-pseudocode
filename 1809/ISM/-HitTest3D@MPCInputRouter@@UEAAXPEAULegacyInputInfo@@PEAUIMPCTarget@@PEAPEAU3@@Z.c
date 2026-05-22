/*
 * XREFs of ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180006880
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800072C8 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180042B58 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget **a4)
{
  unsigned int v4; // r14d
  _BYTE *v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  bool v11; // r12
  __int64 v12; // rcx
  bool v13; // bp
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IMPCTarget **); // r9
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  HWND v27; // rcx
  struct IViewHierarchy *v28; // rax
  unsigned __int64 WindowIdFromViewId; // rbp
  struct MPCHolographicInputManager *Instance; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPARAM lParam; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 96) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x132,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    JUMPOUT(0x180006C76LL);
  }
  v8 = (char *)a2 + 600;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         (char *)a2 + 536,
         (char *)a2 + 600);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v11 = !*((_BYTE *)a2 + 601)
     && (*(_DWORD *)a2 & 0x2600) != 0
     && ((unsigned int)(*((_DWORD *)a2 + 130) - 1) <= 1 || *((_DWORD *)a2 + 131) == 2);
  v12 = *((_QWORD *)this + 3);
  v13 = 0;
  LOBYTE(v10) = 0;
  if ( v12 )
    LOBYTE(v10) = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 88LL))(v12, v10) != 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( *((_BYTE *)a2 + 672) )
      goto LABEL_32;
    if ( v11 && *((_BYTE *)a2 + 898) && !(_BYTE)v10 )
      v13 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1873) == 0;
  }
  if ( !*((_BYTE *)a2 + 672) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1873) )
    {
      v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
              *((_QWORD *)this + 5),
              &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
              a4);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x159,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
    }
    else
    {
      v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 2);
      if ( v15 )
      {
        v16 = (**v15)(v15, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x15D,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
        }
      }
      else
      {
        v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 3);
        if ( v17 )
        {
          if ( *((_BYTE *)a2 + 898)
            || (v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 5)) == 0LL )
          {
            v20 = (**v17)(*((_QWORD *)this + 3), &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
            if ( v20 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x163,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                (const char *)(unsigned int)v20);
              __debugbreak();
            }
          }
          else
          {
            v19 = (**v18)(v18, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
            if ( v19 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x169,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                (const char *)(unsigned int)v19);
              __debugbreak();
            }
          }
        }
      }
    }
    goto LABEL_41;
  }
LABEL_32:
  v21 = *v8 == 0;
  v22 = *((_QWORD *)a2 + 80);
  *((_QWORD *)a2 + 48) = v22;
  *((_DWORD *)a2 + 114) = 1;
  if ( v21 )
  {
    v24 = *((unsigned int *)a2 + 219);
    if ( (_DWORD)v24 && v24 != v22 )
    {
      v4 = 0;
    }
    else
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v22);
      v4 = 0;
      *((_DWORD *)a2 + 219) = ViewIdFromWindowId;
      if ( !ViewIdFromWindowId )
      {
        v27 = (HWND)*((int *)a2 + 160);
        LODWORD(lParam) = 0;
        EnumChildWindows(v27, lambda_389ee6cac702106878bc21352c056760_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
        *((_DWORD *)a2 + 219) = lParam;
      }
    }
    MPCInputRouter::GetMPCTarget(
      (MPCInputRouter *)((char *)this - 760),
      *((_QWORD *)a2 + 80),
      *((_DWORD *)a2 + 162),
      a4);
  }
  else
  {
    v23 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
            *((_QWORD *)this + 5),
            &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
            a4);
    v4 = 0;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x176,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
  }
LABEL_41:
  if ( v11 && (v13 || *((_BYTE *)a2 + 672)) )
  {
    if ( v13 )
    {
      WindowIdFromViewId = *((_QWORD *)a2 + 113);
    }
    else
    {
      v4 = *((_DWORD *)a2 + 219);
      v28 = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v28, *((_DWORD *)a2 + 219));
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::RequestForegroundChange(
      Instance,
      WindowIdFromViewId,
      v4,
      *((unsigned int *)a2 + 1),
      *(_DWORD *)a2);
  }
}
