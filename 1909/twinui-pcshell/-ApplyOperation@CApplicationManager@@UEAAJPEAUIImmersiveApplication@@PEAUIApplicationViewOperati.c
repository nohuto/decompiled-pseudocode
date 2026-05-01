/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180023040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18013BB74 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=14
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
  int v14; // eax
  RTL_SRWLOCK *v15; // rdi
  __int64 *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // esi
  struct ISyncIAMEventHandler *v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 **); // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  _BYTE *v32; // r8
  __int64 *v33; // rsi
  unsigned int v34; // r14d
  int v35; // eax
  __int64 *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  char *v42; // r8
  int v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+20h] [rbp-E0h]
  char v46; // [rsp+61h] [rbp-9Fh]
  char v47; // [rsp+62h] [rbp-9Eh] BYREF
  _BYTE v48[5]; // [rsp+63h] [rbp-9Dh] BYREF
  __int64 *v49; // [rsp+68h] [rbp-98h] BYREF
  struct ISyncIAMEventHandler *v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  int v57; // [rsp+A8h] [rbp-58h] BYREF
  int v58; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v59; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v65[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v66; // [rsp+110h] [rbp+10h] BYREF
  __int64 v67; // [rsp+120h] [rbp+20h] BYREF
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int128 v69; // [rsp+130h] [rbp+30h]
  __int16 v70; // [rsp+140h] [rbp+40h]
  _BYTE v71[48]; // [rsp+148h] [rbp+48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v65[1] = -2LL;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 168LL))(a3, &v51) < 0 )
  {
    v51 = 0;
  }
  else if ( v51 > 0x11 || (v7 = 131346, !_bittest(&v7, v51)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x871,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL,
      v43);
    return 2147942487LL;
  }
  v53 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 104LL))(a3, &v57) >= 0 )
    v53 = 2 - (v57 != 0);
  v8 = 0;
  v46 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 152LL))(a3, v71) >= 0 )
  {
    v8 = 1;
    v46 = 1;
  }
  v56 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 88LL))(a3, &v56);
  v55 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 184LL))(a3, &v55);
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0uLL;
  v70 = 0;
  (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 120LL))(
    a3,
    &v67,
    (char *)&v67 + 4);
  v52 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationViewOperation *, GUID *, __int64 *))a3)(
         a3,
         &GUID_abc3a46a_162a_4244_bf76_49364432cda1,
         &v52) >= 0 )
  {
    v66 = 0uLL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v52 + 48LL))(v52, &v66);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89D,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v9,
        v43);
      goto LABEL_65;
    }
    v11 = v66 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v66 == *(_QWORD *)&GUID_NULL.Data1 )
      v11 = *((_QWORD *)&v66 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v11 )
      v69 = v66;
    v47 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v52 + 80LL))(v52, &v47);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A5,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v12,
        v43);
      goto LABEL_65;
    }
    if ( v47 )
      HIBYTE(v70) = 1;
    v48[0] = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v52 + 64LL))(v52, v48);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8AD,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v13,
        v43);
      goto LABEL_65;
    }
    if ( v48[0] )
      LOBYTE(v70) = 1;
  }
  v14 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 136LL))(
          a3,
          &v59);
  v10 = v14;
  if ( v14 >= 0 )
  {
    v15 = CApplicationManagerUtility::g_pIAMGlobals;
    v65[2] = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v16 = 0LL;
    v49 = 0LL;
    v65[3] = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
      v16 = v49;
    }
    if ( v16 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
    }
    v49 = 0LL;
    v65[4] = 0LL;
    v17 = 0LL;
    v60 = 0LL;
    if ( *((_QWORD *)this + 53) )
    {
      v65[5] = 0LL;
      do
      {
        v18 = *(_QWORD *)(*((_QWORD *)this + 52) + 8 * v6);
        *(_QWORD *)&v66 = v18;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v19 = -1;
        v50 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, struct ISyncIAMEventHandler **))v18)(
               v18,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v50) >= 0 )
        {
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IImmersiveApplication *, int *))(*(_QWORD *)v50 + 104LL))(
            v50,
            a2,
            &v58);
          v19 = (v58 != 0) - 1;
        }
        v20 = v50;
        if ( v50 )
        {
          v50 = 0LL;
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v20 + 16LL))(v20);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( !v19 )
        {
          v17 = v6;
          v10 = 0;
          v8 = v46;
          goto LABEL_35;
        }
        ++v6;
      }
      while ( v6 < *((_QWORD *)this + 53) );
      v17 = v60;
      v8 = v46;
    }
    v10 = -2147319765;
LABEL_35:
    if ( v10 >= 0 )
    {
      v21 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(*((_QWORD *)this + 52) + 8 * v17);
      v10 = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v49);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8BE,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v10,
        v43);
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
              a3,
              &v62,
              &v61);
      v10 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8C3,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v22,
          v43);
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v49 + 560))(v49, v62, v61);
        v10 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8C4,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v23,
            v43);
        }
        else
        {
          v24 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 232LL))(
                  a3,
                  &v64,
                  &v63);
          v10 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x8C8,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v24,
              v43);
          }
          else
          {
            v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v49 + 568))(v49, v64, v63);
            v10 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8C9,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v25,
                v43);
            }
            else if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _QWORD *))(*(_QWORD *)a3 + 248LL))(
                        a3,
                        v65) >= 0
                   && (v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v49 + 592))(v49, v65[0]), v10 = v26, v26 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8CF,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v26,
                v43);
            }
            else
            {
              wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
              v27 = *(_QWORD *)a3;
              v50 = 0LL;
              if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, struct ISyncIAMEventHandler **))(v27 + 264))(
                     a3,
                     &v50) >= 0 )
              {
                v28 = (*(__int64 (__fastcall **)(__int64 *, struct ISyncIAMEventHandler *))(*v49 + 632))(v49, v50);
                if ( v28 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x8D8,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v28,
                    v43);
              }
              if ( v50 )
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v50 + 16LL))(v50);
              v54 = 0LL;
              v29 = *v49;
              v54 = 0LL;
              v30 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v29 + 504))(v49, &v54);
              v10 = v30;
              if ( v30 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x8DE,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v30,
                  v43);
              }
              else
              {
                v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v54 + 144LL))(v54, v59);
                v10 = v31;
                if ( v31 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8DF,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v31,
                    v43);
                }
                else
                {
                  if ( v8 )
                    v32 = v71;
                  else
                    v32 = 0LL;
                  v33 = v49;
                  v34 = v51;
                  v44 = v53;
                  v35 = (*(__int64 (__fastcall **)(__int64 *, __int64, _BYTE *, __int64))(*v49 + 256))(
                          v49,
                          v56,
                          v32,
                          v55);
                  v10 = v35;
                  if ( v35 >= 0 )
                  {
                    if ( v34 && ((*(__int64 (__fastcall **)(__int64 *))(*v33 + 280))(v33) & 2) != 0 )
                    {
                      v50 = 0LL;
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
                      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(
                                  (CApplicationManager *)((char *)this - 216),
                                  &v50) >= 0 )
                      {
                        v42 = (char *)this + 32;
                        if ( this == (CApplicationManager *)216 )
                          v42 = 0LL;
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, char *, struct IImmersiveApplication *, unsigned int, int, __int64))(*(_QWORD *)v50 + 24LL))(
                          v50,
                          0LL,
                          v42,
                          a2,
                          v34,
                          5,
                          1LL);
                      }
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
                    }
                    if ( v54 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
                    v36 = v49;
                    if ( v49 )
                    {
                      v49 = 0LL;
                      (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
                    }
                    if ( v15 )
                      ReleaseSRWLockExclusive(v15);
                    v10 = 0;
                    goto LABEL_65;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x106F,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v35,
                    v44);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8EC,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v10,
                    v45);
                }
              }
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v54);
            }
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
    if ( v15 )
      ReleaseSRWLockExclusive(v15);
    goto LABEL_65;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B6,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v14,
    v43);
LABEL_65:
  v37 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v39 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  return (unsigned int)v10;
}
