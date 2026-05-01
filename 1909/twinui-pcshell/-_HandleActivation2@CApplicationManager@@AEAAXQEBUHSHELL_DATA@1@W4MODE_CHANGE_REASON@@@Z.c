/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180025EC0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18007F080 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18007F634 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18013C16C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18013D258 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180056690 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180056704 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18006643C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18006E290 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800799AC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x18008331C (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180136B3C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18013C02C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // eax
  int ApartmentId; // ebx
  HWND v10; // r12
  bool v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, IUnknown **); // rcx
  int v21; // eax
  void *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  IUnknown *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rcx
  unsigned __int128 v29; // rax
  IUnknown *v30; // rcx
  __int64 v31; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  char *v39; // r14
  unsigned __int64 v40; // r12
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rcx
  struct IObjectArray *v44; // rcx
  char v45; // r14
  int v46; // eax
  __int64 v47; // rbx
  unsigned __int64 i; // rdi
  int SingleMonitorObjectArray; // eax
  void *v50; // rcx
  unsigned __int64 j; // rbx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // r14
  PSRWLOCK v55; // rdi
  PVOID Ptr; // r15
  __int64 v57; // r12
  _QWORD *v58; // rbx
  _QWORD *v59; // rax
  _QWORD *v60; // rdi
  void *v61; // rcx
  __int64 v62; // rdx
  HRESULT v63; // ebx
  IUnknown *v64; // rcx
  void *v65; // rcx
  void *v66; // r10
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  struct IObjectArray *v71; // rcx
  IUnknown *v72; // rcx
  void *v73; // rcx
  const void **v74; // rbx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdi
  __int64 v77; // r8
  IUnknown *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r8
  int v81; // eax
  unsigned __int8 v82; // bl
  __int64 v83; // rdi
  int (__fastcall *v84)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v85; // rbx
  unsigned __int64 v86; // rcx
  __int64 *v87; // rdx
  int cchValue[2]; // [rsp+20h] [rbp-E0h]
  int cchValuea; // [rsp+20h] [rbp-E0h]
  BOOL bIgnoreCase[2]; // [rsp+28h] [rbp-D8h]
  char v91; // [rsp+40h] [rbp-C0h]
  char v92; // [rsp+40h] [rbp-C0h]
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  struct IObjectArray *v95; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+60h] [rbp-A0h] BYREF
  int v97; // [rsp+68h] [rbp-98h]
  int v98; // [rsp+6Ch] [rbp-94h]
  void *ppvOut; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v101; // [rsp+80h] [rbp-80h]
  __int64 v102; // [rsp+88h] [rbp-78h]
  unsigned __int64 v103; // [rsp+90h] [rbp-70h]
  void *v104; // [rsp+98h] [rbp-68h] BYREF
  int v105; // [rsp+A0h] [rbp-60h]
  struct IImmersiveMonitor *v106; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-50h] BYREF
  void *v108; // [rsp+B8h] [rbp-48h]
  __int64 v109; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-38h] BYREF
  HWND v111; // [rsp+D0h] [rbp-30h]
  IUnknown *v112; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v113; // [rsp+E0h] [rbp-20h]
  _QWORD *v114; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v115; // [rsp+F0h] [rbp-10h] BYREF
  int v116; // [rsp+F4h] [rbp-Ch] BYREF
  unsigned int v117; // [rsp+F8h] [rbp-8h]
  int v118; // [rsp+FCh] [rbp-4h]
  int v119; // [rsp+100h] [rbp+0h] BYREF
  __int64 v120; // [rsp+108h] [rbp+8h] BYREF
  int v121; // [rsp+110h] [rbp+10h] BYREF
  LPMALLOC ppMalloc; // [rsp+118h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+20h]
  __int64 v124; // [rsp+128h] [rbp+28h]
  __int64 v125; // [rsp+130h] [rbp+30h]
  __int64 v126; // [rsp+138h] [rbp+38h]
  HWND v127; // [rsp+140h] [rbp+40h] BYREF
  __int64 v128; // [rsp+148h] [rbp+48h]
  char v129; // [rsp+150h] [rbp+50h]
  PVOID v130; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v131[13]; // [rsp+160h] [rbp+60h] BYREF
  int v132; // [rsp+1C8h] [rbp+C8h]
  __int64 v133; // [rsp+1D0h] [rbp+D0h]
  __int64 v134; // [rsp+1D8h] [rbp+D8h]
  WCHAR Filename[264]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  v131[2] = -2LL;
  v97 = a3;
  v5 = 0LL;
  v118 = 0;
  if ( a1 )
    v6 = a1 + 392;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v131[12] = v6;
  v7 = *(_DWORD *)(v6 + 44);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_221;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_214;
      }
LABEL_221:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_214:
  if ( *(_DWORD *)(v6 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v115);
    v98 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v115 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v98 = ApartmentId;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue[0]);
      goto LABEL_9;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
  v98 = ApartmentId;
LABEL_9:
  v132 = ApartmentId;
  v10 = *(HWND *)(a2 + 8);
  v111 = v10;
  v11 = 1;
  v91 = 1;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v106 = 0LL;
    if ( *(_BYTE *)(a2 + 20) || *(_BYTE *)(a2 + 21) )
    {
      v82 = 0;
    }
    else
    {
      v82 = 1;
      v131[3] = &v106;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v106);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v10, &v106);
    }
    if ( v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
      && v10 != (HWND)1
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v10, v82) >= 0
      && (!v106
       || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536), v10))
      && CApplicationManager::_IsMultimon((CApplicationManager *)a1)
      && *(_DWORD *)(a2 + 24) == 1 )
    {
      v11 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v10);
      v91 = v11;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v106);
  }
  ppv = 0LL;
  punk = 0LL;
  v125 = 0LL;
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v131[4] = &punk;
    punk = 0LL;
    v131[5] = 0LL;
    v12 = 0LL;
    v113 = 0LL;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 640) )
    {
      v131[6] = 0LL;
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v13);
        v124 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = -1;
        v114 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v14)(
               v14,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v114) >= 0 )
        {
          v16 = *v114;
          v127 = v10;
          v128 = 0LL;
          v129 = 0;
          v15 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v16 + 296))(v114, &v127, 2LL) != 0) - 1;
          v17 = v128;
          if ( v128 )
          {
            v128 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        v18 = v114;
        if ( v114 )
        {
          v114 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        }
        v124 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !v15 )
        {
          v12 = v13;
          v19 = 0;
          goto LABEL_22;
        }
        ++v13;
      }
      while ( v13 < *(_QWORD *)(a1 + 640) );
      v12 = v113;
    }
    v19 = -2147319765;
LABEL_22:
    if ( v19 < 0
      || (v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v12),
          v21 = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk),
          v5 = v12,
          v125 = v12,
          v21 < 0) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
        *(_QWORD *)(a1 + 576),
        0LL,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        &ppv);
    }
    else
    {
      v22 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v11 = v91;
  }
  v23 = *(__int64 **)(a1 + 592);
  v24 = *v23;
  if ( *(_DWORD *)(a2 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v24 + 40))(v23, *(_QWORD *)(a2 + 8));
  else
    (*(void (**)(void))(v24 + 48))();
  v25 = punk;
  *(_QWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 504) = v97;
  if ( v25 && *(IUnknown **)(a1 + 512) != v25 )
  {
    ((void (__fastcall *)(IUnknown *))v25->lpVtbl->AddRef)(v25);
    v126 = *(_QWORD *)(a1 + 512);
    v26 = v126;
    *(_QWORD *)(a1 + 512) = v25;
    if ( v26 )
    {
      v126 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v25 = punk;
  }
  if ( *(_DWORD *)(a2 + 16) == 2 && !v25 )
  {
    v27 = 2LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 40LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(a2 + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 528) + 88LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(a2 + 24),
      v11);
    v27 = *(unsigned int *)(a2 + 16);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *(unsigned int *)(a2 + 24),
    v27,
    *(unsigned __int8 *)(a2 + 28));
  v28 = (__int64 *)ppv;
  if ( ppv && punk )
  {
    if ( (*(int (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
           ppv,
           punk,
           v10,
           0LL,
           2,
           0LL) >= 0
      && v5 )
    {
      v74 = (const void **)(a1 + 632);
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        a1 + 632,
        v5);
      v75 = *(_QWORD *)(a1 + 640);
      v76 = 1LL;
      if ( v75 )
        v76 = v75 + 1;
      if ( v76 <= *(_QWORD *)(a1 + 656)
        || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  a1 + 632,
                  v76) >= 0 )
      {
        v77 = *(_QWORD *)(a1 + 640);
        if ( v77 )
          memmove_0((char *)*v74 + 8, *v74, 8 * v77);
        *(_QWORD *)(a1 + 640) = v76;
        if ( *v74 )
        {
          v78 = punk;
          *(_QWORD *)*v74 = punk;
          if ( v78 )
            ((void (__fastcall *)(IUnknown *))v78->lpVtbl->AddRef)(v78);
        }
      }
    }
    v28 = (__int64 *)ppv;
  }
  if ( *(_DWORD *)(a2 + 16) != 2 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
           *(_QWORD *)(a1 + 576),
           0LL,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &ppv) < 0 )
      goto LABEL_45;
    v28 = (__int64 *)ppv;
    v79 = *(_QWORD *)ppv;
    if ( v11 )
    {
      v80 = *(unsigned int *)(a2 + 24);
LABEL_170:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v79 + 40))(v28, 4LL, v80);
      goto LABEL_45;
    }
LABEL_228:
    v80 = 0LL;
    goto LABEL_170;
  }
  if ( !punk )
  {
    v79 = *v28;
    goto LABEL_228;
  }
LABEL_45:
  v95 = 0LL;
  v96 = 0LL;
  v105 = 0xFFFF;
  v92 = 1;
  if ( GetShellWindow() != v10
    && !(unsigned int)GetPropW(v10, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v10 )
  {
    pv = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    v30 = punk;
    if ( punk )
    {
      v31 = v96;
      if ( v96 )
      {
        v96 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        v30 = punk;
      }
      ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v30->lpVtbl->QueryInterface)(
        v30,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v96);
      v107 = 0LL;
      lpVtbl = punk->lpVtbl;
      v131[7] = &v107;
      ((void (__fastcall *)(IUnknown *, __int64 *))lpVtbl[19].AddRef)(punk, &v107);
      v33 = v107;
      v120 = v107;
      if ( v107 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 8LL))(v107);
      v34 = v101;
      if ( v101 != v103 )
        goto LABEL_72;
      v35 = v101 + 1;
      if ( v101 + 1 <= 0xFFFFFFFE )
      {
        if ( v35 <= v103 )
        {
LABEL_72:
          v101 = v34 + 1;
          v42 = (__int64 *)((char *)pv + 8 * v34);
          if ( v42 )
          {
            *v42 = 0LL;
            if ( v42 != &v120 )
            {
              *v42 = v33;
              v33 = 0LL;
              v120 = 0LL;
            }
          }
          goto LABEL_75;
        }
        v29 = v103 * (unsigned __int128)2uLL;
        v131[8] = *((_QWORD *)&v29 + 1);
        v36 = 2 * v103;
        if ( is_mul_ok(v103, 2uLL) )
        {
          if ( (unsigned __int64)v29 - v103 > 0x1000 )
            v36 = v103 + 4096;
          if ( v35 <= v36 )
            v37 = v36;
          else
            v37 = v101 + 1;
          if ( v37 > 0xFFFFFFFE )
          {
            v36 = 4294967294LL;
          }
          else if ( v35 > v36 )
          {
            v36 = v101 + 1;
          }
          v29 = v36 * (unsigned __int128)8uLL;
          v131[9] = *((_QWORD *)&v29 + 1);
          v38 = 8 * v36;
          if ( is_mul_ok(v36, 8uLL) )
          {
            v39 = (char *)CoTaskMemRealloc(pv, v29);
            if ( !v39 )
              goto LABEL_75;
            if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
            {
              v40 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v39);
              ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
              if ( v40 > v38 )
                memset_0(&v39[v38], 0, v40 - v38);
              v10 = v111;
            }
            v41 = 0;
            v103 = v36;
            pv = v39;
            v34 = v101;
          }
          else
          {
            v41 = -2147024362;
          }
          if ( v41 >= 0 )
            goto LABEL_72;
        }
      }
LABEL_75:
      if ( v33 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v43 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      goto LABEL_79;
    }
    v81 = *(_DWORD *)(a2 + 16);
    if ( v81 == 1 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v10, &pv);
      goto LABEL_79;
    }
    if ( v81 == 2 )
      goto LABEL_235;
    if ( *(_DWORD *)(a2 + 24) == 1 || *(_DWORD *)(a2 + 24) == 8 )
    {
LABEL_79:
      v131[10] = &v95;
      v44 = v95;
      if ( v95 )
      {
        v95 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v44->lpVtbl->Release)(v44);
      }
      v45 = 0;
      v95 = 0LL;
      v104 = 0LL;
      v46 = CEnumerableObjectCollection::CreateInstance((int)v44, *((const struct _GUID **)&v29 + 1), &v104);
      v47 = v46;
      if ( v46 >= 0 )
      {
        for ( i = 0LL; i < v101; ++i )
        {
          if ( v47 < 0 )
            break;
          (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + i) + 48LL))(*((_QWORD *)pv + i), &v121);
          if ( v121 )
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v104 + 40LL))(v104, *((_QWORD *)pv + i));
        }
        (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v104 + 24LL))(v104, &v116);
        if ( v116 )
        {
          SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v104)(
                                       v104,
                                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                       &v95);
        }
        else
        {
          v45 = 1;
          SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                       (CApplicationManager *)a1,
                                       0LL,
                                       &v95);
        }
        LODWORD(v47) = SingleMonitorObjectArray;
      }
      v50 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v50 + 16LL))(v50);
      }
      if ( (int)v47 >= 0 )
      {
        if ( v45 && punk )
          v97 = 8;
        goto LABEL_94;
      }
LABEL_235:
      v92 = 0;
LABEL_94:
      if ( pv )
      {
        for ( j = 0LL; j < v101; ++j )
        {
          v52 = *((_QWORD *)pv + j);
          if ( v52 )
          {
            *((_QWORD *)pv + j) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v101 = 0LL;
      v103 = 0LL;
      goto LABEL_101;
    }
    v110 = 0LL;
    v83 = *(_QWORD *)(a1 + 560);
    v84 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v83 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v110);
    if ( v84(v83, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v110) < 0 )
    {
LABEL_198:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
             *(_QWORD *)(a1 + 568),
             v10) )
      {
        v105 = 65534;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v110);
      goto LABEL_79;
    }
    v85 = v110;
    v109 = v110;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v109);
    v86 = v101;
    if ( v101 == v103 )
    {
      if ( (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  &pv,
                  v101 + 1) < 0 )
      {
LABEL_197:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v109);
        goto LABEL_198;
      }
      v86 = v101;
    }
    v101 = v86 + 1;
    v87 = (__int64 *)((char *)pv + 8 * v86);
    if ( v87 )
    {
      *v87 = 0LL;
      if ( v87 != &v109 )
      {
        *v87 = v85;
        v109 = 0LL;
      }
    }
    goto LABEL_197;
  }
  if ( v10 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) )
    v92 = 0;
LABEL_101:
  v53 = (__int64)v10;
  v113 = (__int64)v10;
  v54 = v96;
  if ( !v96 && v10 )
  {
    v53 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v10);
    v113 = v53;
    v54 = v96;
  }
  v133 = v54;
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
  v134 = v53;
  v55 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v130 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v57 = v54;
    v131[0] = v54;
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
    v131[1] = v53;
    v117 = (unsigned int)v55[15].Ptr;
    v58 = 0LL;
    v131[11] = 0LL;
    v59 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v60 = v59;
    if ( v59 )
    {
      *((_DWORD *)v59 + 3) = 1;
      *v59 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v60[2] = 0LL;
      if ( v60 + 2 != &v130 )
      {
        v60[2] = Ptr;
        Ptr = 0LL;
      }
      v60[3] = 0LL;
      if ( v60 + 3 != v131 )
      {
        v60[3] = v54;
        v57 = 0LL;
      }
      v60[4] = v113;
      *v60 = off_180446600;
      v58 = v60;
    }
    bIgnoreCase[1] = 0;
    cchValue[1] = HIDWORD(v58);
    SHTaskPoolQueueTask(3LL, 2LL, v117);
    if ( v58 )
      (*(void (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v10 = v111;
  }
  if ( v92 )
  {
    v108 = 0LL;
    ppvOut = 0LL;
    v112 = 0LL;
    v118 = 2;
    (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL))(
      a1 + 48,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v112);
    v61 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v63 = IUnknown_QueryService(v112, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    v64 = v112;
    if ( v112 )
    {
      v112 = 0LL;
      ((void (__fastcall *)(IUnknown *, struct IUnknownVtbl *))v64->lpVtbl->Release)(v64, v64->lpVtbl);
    }
    v65 = ppvOut;
    if ( v63 < 0 )
    {
      v66 = v108;
    }
    else
    {
      if ( ppvOut )
      {
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 8LL))(ppvOut, v62);
        v65 = ppvOut;
      }
      v66 = v65;
      v108 = v65;
      v63 = 0;
    }
    if ( v65 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v65 + 16LL))(v65);
      v66 = v108;
    }
    if ( v63 >= 0 )
    {
      bIgnoreCase[0] = v97;
      cchValue[0] = *(_DWORD *)(a2 + 24);
      (*(void (__fastcall **)(void *, struct IObjectArray *, __int64, __int64, int *, BOOL *, int))(*(_QWORD *)v66 + 24LL))(
        v66,
        v95,
        a1 + 248,
        v96,
        *(int **)cchValue,
        *(BOOL **)bIgnoreCase,
        v105);
      v66 = v108;
    }
    if ( v66 )
    {
      v108 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v66 + 16LL))(v66);
    }
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v67 = *(_QWORD *)(a1 + 512);
  if ( v67 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  }
  *(_DWORD *)(a1 + 504) = 0;
  v68 = *(_QWORD *)(a1 + 488);
  if ( v68 != 1 )
    *(_QWORD *)(a1 + 496) = v68;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(a2 + 24));
  *(_QWORD *)(a1 + 768) = v10;
  v119 = 0;
  v69 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v119, 4LL, 0LL) | 0x10000000;
  if ( v69 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x33D,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v69,
      cchValuea);
    __debugbreak();
  }
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  v70 = v96;
  if ( v96 )
  {
    v96 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
  }
  v71 = v95;
  if ( v95 )
  {
    v95 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v71->lpVtbl->Release)(v71);
  }
  v72 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v72->lpVtbl->Release)(v72);
  }
  v73 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v73 + 16LL))(v73);
  }
  if ( v98 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
