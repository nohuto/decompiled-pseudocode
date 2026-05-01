/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x1800582A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800EE584 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F7318 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  unsigned __int64 v6; // r15
  int v7; // ecx
  char v8; // si
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  RTL_SRWLOCK *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // esi
  struct ISyncIAMEventHandler *v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 *v26; // rdx
  _BYTE *v27; // r8
  __int64 v28; // rsi
  unsigned int v29; // r14d
  int v30; // ecx
  CApplicationManager *v31; // r13
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // r9
  char *v41; // r8
  bool v42; // [rsp+60h] [rbp-A0h]
  char v43; // [rsp+61h] [rbp-9Fh]
  char v44; // [rsp+62h] [rbp-9Eh] BYREF
  char v45[5]; // [rsp+63h] [rbp-9Dh] BYREF
  struct ISyncIAMEventHandler *v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+78h] [rbp-88h] BYREF
  __int16 v49; // [rsp+7Ch] [rbp-84h]
  unsigned int v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  int v55; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v61[6]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v62; // [rsp+108h] [rbp+8h] BYREF
  __int64 v63; // [rsp+118h] [rbp+18h] BYREF
  __int64 v64; // [rsp+120h] [rbp+20h]
  __int128 v65; // [rsp+128h] [rbp+28h]
  __int16 v66; // [rsp+138h] [rbp+38h]
  _BYTE v67[48]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v61[1] = -2LL;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 152LL))(a3, &v50) < 0 )
  {
    v50 = 0;
  }
  else if ( v50 > 0x11 || (v7 = 131346, !_bittest(&v7, v50)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v52 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 104LL))(a3, &v55) >= 0 )
    v52 = 2 - (v55 != 0);
  v8 = 0;
  v43 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 136LL))(a3, v67) >= 0 )
  {
    v8 = 1;
    v43 = 1;
  }
  v54 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 88LL))(a3, &v54);
  v53 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 168LL))(a3, &v53);
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0uLL;
  v66 = 0;
  v42 = (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 120LL))(
          a3,
          &v63,
          (char *)&v63 + 4) >= 0;
  v51 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationViewOperation *, GUID *, __int64 *))a3)(
         a3,
         &GUID_abc3a46a_162a_4244_bf76_49364432cda1,
         &v51) < 0 )
  {
LABEL_20:
    v14 = CApplicationManagerUtility::g_pIAMGlobals;
    v61[2] = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = 0LL;
    v47 = 0LL;
    v61[3] = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = v47;
    }
    if ( v15 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v47 = 0LL;
    v61[4] = 0LL;
    v16 = 0LL;
    v56 = 0LL;
    if ( *((_QWORD *)this + 53) )
    {
      v61[5] = 0LL;
      do
      {
        v17 = *(_QWORD *)(*((_QWORD *)this + 52) + 8 * v6);
        *(_QWORD *)&v62 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v18 = -1;
        v46 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, struct ISyncIAMEventHandler **))v17)(
               v17,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v46) >= 0 )
        {
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IImmersiveApplication *, int *))(*(_QWORD *)v46 + 104LL))(
            v46,
            a2,
            &v48);
          v18 = (v48 != 0) - 1;
        }
        v19 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v19 + 16LL))(v19);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( !v18 )
        {
          v16 = v6;
          v10 = 0;
          v8 = v43;
          goto LABEL_34;
        }
        ++v6;
      }
      while ( v6 < *((_QWORD *)this + 53) );
      v16 = v56;
      v8 = v43;
    }
    v10 = -2147319765;
LABEL_34:
    if ( v10 >= 0 )
    {
      v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 52) + 8 * v16);
      v10 = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v47);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v10 < 0 )
    {
      v39 = 2111LL;
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 200LL))(
              a3,
              &v58,
              &v57);
      v10 = v21;
      if ( v21 < 0 )
      {
        v40 = (unsigned int)v21;
        v39 = 2116LL;
        goto LABEL_86;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v47 + 560LL))(v47, v58, v57);
      v10 = v22;
      if ( v22 < 0 )
      {
        v40 = (unsigned int)v22;
        v39 = 2117LL;
        goto LABEL_86;
      }
      v23 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
              a3,
              &v60,
              &v59);
      v10 = v23;
      if ( v23 < 0 )
      {
        v40 = (unsigned int)v23;
        v39 = 2121LL;
        goto LABEL_86;
      }
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v47 + 568LL))(v47, v60, v59);
      v10 = v24;
      if ( v24 < 0 )
      {
        v40 = (unsigned int)v24;
        v39 = 2122LL;
        goto LABEL_86;
      }
      if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _QWORD *))(*(_QWORD *)a3 + 232LL))(a3, v61) >= 0 )
      {
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v47 + 592LL))(v47, v61[0]);
        v10 = v25;
        if ( v25 < 0 )
        {
          v40 = (unsigned int)v25;
          v39 = 2128LL;
          goto LABEL_86;
        }
      }
      if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetCachedFeatureEnabledState();
      v48 = 0;
      LOBYTE(v49) = 2;
      LODWORD(v46) = 0;
      WORD2(v46) = v49;
      wil::details::ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data,
        15441787LL,
        &v46,
        0LL,
        3);
      if ( v42 )
        v26 = &v63;
      else
        v26 = 0LL;
      if ( v8 )
        v27 = v67;
      else
        v27 = 0LL;
      v28 = v47;
      v29 = v50;
      v30 = *((_DWORD *)this + 184);
      v31 = (CApplicationManager *)((char *)this - 216);
      v32 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, int, int, _QWORD, __int64 *, int, unsigned int))(*(_QWORD *)v47 + 256LL))(
              v47,
              v54,
              v27,
              v53,
              v52,
              v30,
              0LL,
              v26,
              1,
              v50);
      v10 = v32;
      if ( v32 >= 0 )
      {
        if ( v29 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 280LL))(v28) & 2) != 0 )
        {
          v46 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
          if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v31, &v46) >= 0 )
          {
            v41 = (char *)v31 + 248;
            if ( !v31 )
              v41 = 0LL;
            (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, char *, struct IImmersiveApplication *, unsigned int, int, int))(*(_QWORD *)v46 + 24LL))(
              v46,
              0LL,
              v41,
              a2,
              v29,
              5,
              1);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
        }
        v33 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        if ( v14 )
          ReleaseSRWLockExclusive(v14);
        v10 = 0;
        goto LABEL_59;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFCC,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v32);
      v39 = 2152LL;
    }
    v40 = (unsigned int)v10;
LABEL_86:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v40);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
    if ( v14 )
      ReleaseSRWLockExclusive(v14);
    goto LABEL_59;
  }
  v62 = 0uLL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v51 + 48LL))(v51, &v62);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v11 = v62 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v62 == *(_QWORD *)&GUID_NULL.Data1 )
      v11 = *((_QWORD *)&v62 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v11 )
    {
      v65 = v62;
      v42 = 1;
    }
    v44 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v51 + 80LL))(v51, &v44);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x829,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v12);
    }
    else
    {
      if ( v44 )
      {
        HIBYTE(v66) = 1;
        v42 = 1;
      }
      v45[0] = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v51 + 64LL))(v51, v45);
      v10 = v13;
      if ( v13 >= 0 )
      {
        if ( v45[0] )
        {
          LOBYTE(v66) = 1;
          v42 = 1;
        }
        goto LABEL_20;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x831,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v13);
    }
  }
LABEL_59:
  v34 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return (unsigned int)v10;
}
