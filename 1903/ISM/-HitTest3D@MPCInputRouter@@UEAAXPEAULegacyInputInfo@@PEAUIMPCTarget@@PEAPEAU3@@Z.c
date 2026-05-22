/*
 * XREFs of ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800542F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180053BA0 (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x180053EC8 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800589F8 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x1800837CC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 */

void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget **a4)
{
  struct HitTestResult3D *v7; // r13
  int v8; // eax
  bool v9; // r15
  __int64 v10; // rcx
  bool v11; // si
  bool v12; // r12
  MPCInputRouter *v13; // rcx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IMPCTarget **); // r9
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  unsigned __int64 WindowIdFromViewId; // rsi
  struct IViewHierarchy *ViewHierarchy; // rax
  struct MPCHolographicInputManager *Instance; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      317LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 96) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      320LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v7 = (struct LegacyInputInfo *)((char *)a2 + 152);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         (char *)a2 + 80,
         (char *)a2 + 152);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      326LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = !*((_BYTE *)a2 + 153)
    && (*(_DWORD *)a2 & 0x2600) != 0
    && ((unsigned int)(*((_DWORD *)a2 + 16) - 1) <= 1 || *((_DWORD *)a2 + 17) == 2);
  v10 = *((_QWORD *)this + 3);
  v11 = 0;
  v12 = 0;
  if ( v10 )
    v12 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10) != 0;
  if ( IsEdition(8778LL) )
  {
    if ( *((_BYTE *)a2 + 224) )
      goto LABEL_35;
    if ( v9 && *((_BYTE *)a2 + 458) && !v12 )
      v11 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) == 0;
  }
  if ( !*((_BYTE *)a2 + 224) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
    {
      v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
              *((_QWORD *)this + 5),
              &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
              a4);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          359LL,
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
            363LL,
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
          if ( *((_BYTE *)a2 + 458)
            || (v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 5)) == 0LL )
          {
            v20 = (**v17)(*((_QWORD *)this + 3), &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
            if ( v20 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                369LL,
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
                375LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                (const char *)(unsigned int)v19);
              __debugbreak();
            }
          }
        }
      }
    }
    goto LABEL_39;
  }
LABEL_35:
  if ( *(_BYTE *)v7 )
  {
    v21 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
            *((_QWORD *)this + 5),
            &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
            a4);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        385LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
  }
  else
  {
    MPCInputRouter::FixViewIdForHitTestResult(v13, v7);
    MPCInputRouter::GetMPCTarget((MPCInputRouter *)((char *)this - 808), *((_QWORD *)a2 + 24), *((_DWORD *)a2 + 50), a4);
  }
LABEL_39:
  if ( !v9 )
    return;
  if ( !v11 )
  {
    if ( !*((_BYTE *)a2 + 224) )
      return;
    if ( *(_BYTE *)v7 && !*((_DWORD *)a2 + 46) )
      goto LABEL_46;
  }
  if ( v11 )
    v22 = 0;
  else
LABEL_46:
    v22 = *((_DWORD *)a2 + 109);
  if ( v11 )
  {
    WindowIdFromViewId = *((_QWORD *)a2 + 58);
  }
  else
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, *((_DWORD *)a2 + 109));
  }
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RequestForegroundChange(
    Instance,
    WindowIdFromViewId,
    v22,
    *((unsigned int *)a2 + 1),
    *(_DWORD *)a2);
}
