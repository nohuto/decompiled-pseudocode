/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001B9F0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18001FF50 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18007CBF0 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18007D0F4 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18011CCCC (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18011DDB8 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18005957C (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x1800595F0 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18006428C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180069C80 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18007699C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x180080C5C (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801176FC (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18011CB8C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
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
  HRESULT v62; // ebx
  IUnknown *v63; // rcx
  void *v64; // rcx
  void *v65; // r10
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rcx
  struct IObjectArray *v70; // rcx
  IUnknown *v71; // rcx
  void *v72; // rcx
  const void **v73; // rbx
  __int64 v74; // rcx
  unsigned __int64 v75; // rdi
  __int64 v76; // r8
  IUnknown *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r8
  int v80; // eax
  unsigned __int8 v81; // bl
  __int64 v82; // rdi
  int (__fastcall *v83)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v84; // rbx
  unsigned __int64 v85; // rcx
  __int64 *v86; // rdx
  int cchValue; // [rsp+20h] [rbp-E0h]
  char v88; // [rsp+40h] [rbp-C0h]
  char v89; // [rsp+40h] [rbp-C0h]
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  struct IObjectArray *v92; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+60h] [rbp-A0h] BYREF
  int v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+6Ch] [rbp-94h]
  void *ppvOut; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v98; // [rsp+80h] [rbp-80h]
  __int64 v99; // [rsp+88h] [rbp-78h]
  unsigned __int64 v100; // [rsp+90h] [rbp-70h]
  void *v101; // [rsp+98h] [rbp-68h] BYREF
  int v102; // [rsp+A0h] [rbp-60h]
  struct IImmersiveMonitor *v103; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-50h] BYREF
  void *v105; // [rsp+B8h] [rbp-48h]
  __int64 v106; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-38h] BYREF
  HWND v108; // [rsp+D0h] [rbp-30h]
  IUnknown *v109; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v110; // [rsp+E0h] [rbp-20h]
  _QWORD *v111; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v112; // [rsp+F0h] [rbp-10h] BYREF
  int v113; // [rsp+F4h] [rbp-Ch] BYREF
  unsigned int v114; // [rsp+F8h] [rbp-8h]
  int v115; // [rsp+FCh] [rbp-4h]
  int v116; // [rsp+100h] [rbp+0h] BYREF
  __int64 v117; // [rsp+108h] [rbp+8h] BYREF
  int v118; // [rsp+110h] [rbp+10h] BYREF
  LPMALLOC ppMalloc; // [rsp+118h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+20h]
  __int64 v121; // [rsp+128h] [rbp+28h]
  __int64 v122; // [rsp+130h] [rbp+30h]
  __int64 v123; // [rsp+138h] [rbp+38h]
  HWND v124; // [rsp+140h] [rbp+40h] BYREF
  __int64 v125; // [rsp+148h] [rbp+48h]
  char v126; // [rsp+150h] [rbp+50h]
  PVOID v127; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v128[13]; // [rsp+160h] [rbp+60h] BYREF
  int v129; // [rsp+1C8h] [rbp+C8h]
  __int64 v130; // [rsp+1D0h] [rbp+D0h]
  __int64 v131; // [rsp+1D8h] [rbp+D8h]
  WCHAR Filename[264]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  v128[2] = -2LL;
  v94 = a3;
  v5 = 0LL;
  v115 = 0;
  if ( a1 )
    v6 = a1 + 392;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v128[12] = v6;
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
    ApartmentId = SHCoGetApartmentId(&v112);
    v95 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v112 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v95 = ApartmentId;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_9;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
  v95 = ApartmentId;
LABEL_9:
  v129 = ApartmentId;
  v10 = *(HWND *)(a2 + 8);
  v108 = v10;
  v11 = 1;
  v88 = 1;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v103 = 0LL;
    if ( *(_BYTE *)(a2 + 20) || *(_BYTE *)(a2 + 21) )
    {
      v81 = 0;
    }
    else
    {
      v81 = 1;
      v128[3] = &v103;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v103);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v10, &v103);
    }
    if ( v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
      && v10 != (HWND)1
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v10, v81) >= 0
      && (!v103
       || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536), v10))
      && CApplicationManager::_IsMultimon((CApplicationManager *)a1)
      && *(_DWORD *)(a2 + 24) == 1 )
    {
      v11 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v10);
      v88 = v11;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v103);
  }
  ppv = 0LL;
  punk = 0LL;
  v122 = 0LL;
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v128[4] = &punk;
    punk = 0LL;
    v128[5] = 0LL;
    v12 = 0LL;
    v110 = 0LL;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 640) )
    {
      v128[6] = 0LL;
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v13);
        v121 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = -1;
        v111 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v14)(
               v14,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v111) >= 0 )
        {
          v16 = *v111;
          v124 = v10;
          v125 = 0LL;
          v126 = 0;
          v15 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v16 + 296))(v111, &v124, 2LL) != 0) - 1;
          v17 = v125;
          if ( v125 )
          {
            v125 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        v18 = v111;
        if ( v111 )
        {
          v111 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        }
        v121 = 0LL;
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
      v12 = v110;
    }
    v19 = -2147319765;
LABEL_22:
    if ( v19 < 0
      || (v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v12),
          v21 = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk),
          v5 = v12,
          v122 = v12,
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
    v11 = v88;
  }
  v23 = *(__int64 **)(a1 + 592);
  v24 = *v23;
  if ( *(_DWORD *)(a2 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v24 + 40))(v23, *(_QWORD *)(a2 + 8));
  else
    (*(void (**)(void))(v24 + 48))();
  v25 = punk;
  *(_QWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 504) = v94;
  if ( v25 && *(IUnknown **)(a1 + 512) != v25 )
  {
    ((void (__fastcall *)(IUnknown *))v25->lpVtbl->AddRef)(v25);
    v123 = *(_QWORD *)(a1 + 512);
    v26 = v123;
    *(_QWORD *)(a1 + 512) = v25;
    if ( v26 )
    {
      v123 = 0LL;
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
      v73 = (const void **)(a1 + 632);
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        a1 + 632,
        v5);
      v74 = *(_QWORD *)(a1 + 640);
      v75 = 1LL;
      if ( v74 )
        v75 = v74 + 1;
      if ( v75 <= *(_QWORD *)(a1 + 656)
        || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  a1 + 632,
                  v75) >= 0 )
      {
        v76 = *(_QWORD *)(a1 + 640);
        if ( v76 )
          memmove_0((char *)*v73 + 8, *v73, 8 * v76);
        *(_QWORD *)(a1 + 640) = v75;
        if ( *v73 )
        {
          v77 = punk;
          *(_QWORD *)*v73 = punk;
          if ( v77 )
            ((void (__fastcall *)(IUnknown *))v77->lpVtbl->AddRef)(v77);
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
    v78 = *(_QWORD *)ppv;
    if ( v11 )
    {
      v79 = *(unsigned int *)(a2 + 24);
LABEL_170:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v78 + 40))(v28, 4LL, v79);
      goto LABEL_45;
    }
LABEL_228:
    v79 = 0LL;
    goto LABEL_170;
  }
  if ( !punk )
  {
    v78 = *v28;
    goto LABEL_228;
  }
LABEL_45:
  v92 = 0LL;
  v93 = 0LL;
  v102 = 0xFFFF;
  v89 = 1;
  if ( GetShellWindow() != v10
    && !(unsigned int)GetPropW(v10, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v10 )
  {
    pv = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v30 = punk;
    if ( punk )
    {
      v31 = v93;
      if ( v93 )
      {
        v93 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        v30 = punk;
      }
      ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v30->lpVtbl->QueryInterface)(
        v30,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v93);
      v104 = 0LL;
      lpVtbl = punk->lpVtbl;
      v128[7] = &v104;
      ((void (__fastcall *)(IUnknown *, __int64 *))lpVtbl[19].AddRef)(punk, &v104);
      v33 = v104;
      v117 = v104;
      if ( v104 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 8LL))(v104);
      v34 = v98;
      if ( v98 != v100 )
        goto LABEL_72;
      v35 = v98 + 1;
      if ( v98 + 1 <= 0xFFFFFFFE )
      {
        if ( v35 <= v100 )
        {
LABEL_72:
          v98 = v34 + 1;
          v42 = (__int64 *)((char *)pv + 8 * v34);
          if ( v42 )
          {
            *v42 = 0LL;
            if ( v42 != &v117 )
            {
              *v42 = v33;
              v33 = 0LL;
              v117 = 0LL;
            }
          }
          goto LABEL_75;
        }
        v29 = v100 * (unsigned __int128)2uLL;
        v128[8] = *((_QWORD *)&v29 + 1);
        v36 = 2 * v100;
        if ( is_mul_ok(v100, 2uLL) )
        {
          if ( (unsigned __int64)v29 - v100 > 0x1000 )
            v36 = v100 + 4096;
          if ( v35 <= v36 )
            v37 = v36;
          else
            v37 = v98 + 1;
          if ( v37 > 0xFFFFFFFE )
          {
            v36 = 4294967294LL;
          }
          else if ( v35 > v36 )
          {
            v36 = v98 + 1;
          }
          v29 = v36 * (unsigned __int128)8uLL;
          v128[9] = *((_QWORD *)&v29 + 1);
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
              v10 = v108;
            }
            v41 = 0;
            v100 = v36;
            pv = v39;
            v34 = v98;
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
        v117 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v43 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      goto LABEL_79;
    }
    v80 = *(_DWORD *)(a2 + 16);
    if ( v80 == 1 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v10, &pv);
      goto LABEL_79;
    }
    if ( v80 == 2 )
      goto LABEL_235;
    if ( *(_DWORD *)(a2 + 24) == 1 || *(_DWORD *)(a2 + 24) == 8 )
    {
LABEL_79:
      v128[10] = &v92;
      v44 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v44->lpVtbl->Release)(v44);
      }
      v45 = 0;
      v92 = 0LL;
      v101 = 0LL;
      v46 = CEnumerableObjectCollection::CreateInstance((int)v44, *((const struct _GUID **)&v29 + 1), &v101);
      v47 = v46;
      if ( v46 >= 0 )
      {
        for ( i = 0LL; i < v98; ++i )
        {
          if ( v47 < 0 )
            break;
          (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + i) + 48LL))(*((_QWORD *)pv + i), &v118);
          if ( v118 )
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v101 + 40LL))(v101, *((_QWORD *)pv + i));
        }
        (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v101 + 24LL))(v101, &v113);
        if ( v113 )
        {
          SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v101)(
                                       v101,
                                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                       &v92);
        }
        else
        {
          v45 = 1;
          SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                       (CApplicationManager *)a1,
                                       0LL,
                                       &v92);
        }
        LODWORD(v47) = SingleMonitorObjectArray;
      }
      v50 = v101;
      if ( v101 )
      {
        v101 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v50 + 16LL))(v50);
      }
      if ( (int)v47 >= 0 )
      {
        if ( v45 && punk )
          v94 = 8;
        goto LABEL_94;
      }
LABEL_235:
      v89 = 0;
LABEL_94:
      if ( pv )
      {
        for ( j = 0LL; j < v98; ++j )
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
      v98 = 0LL;
      v100 = 0LL;
      goto LABEL_101;
    }
    v107 = 0LL;
    v82 = *(_QWORD *)(a1 + 560);
    v83 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v82 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v107);
    if ( v83(v82, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v107) < 0 )
    {
LABEL_198:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
             *(_QWORD *)(a1 + 568),
             v10) )
      {
        v102 = 65534;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v107);
      goto LABEL_79;
    }
    v84 = v107;
    v106 = v107;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v106);
    v85 = v98;
    if ( v98 == v100 )
    {
      if ( (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  &pv,
                  v98 + 1) < 0 )
      {
LABEL_197:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v106);
        goto LABEL_198;
      }
      v85 = v98;
    }
    v98 = v85 + 1;
    v86 = (__int64 *)((char *)pv + 8 * v85);
    if ( v86 )
    {
      *v86 = 0LL;
      if ( v86 != &v106 )
      {
        *v86 = v84;
        v106 = 0LL;
      }
    }
    goto LABEL_197;
  }
  if ( v10 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) )
    v89 = 0;
LABEL_101:
  v53 = (__int64)v10;
  v110 = (__int64)v10;
  v54 = v93;
  if ( !v93 && v10 )
  {
    v53 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v10);
    v110 = v53;
    v54 = v93;
  }
  v130 = v54;
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
  v131 = v53;
  v55 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v127 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v57 = v54;
    v128[0] = v54;
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
    v128[1] = v53;
    v114 = (unsigned int)v55[15].Ptr;
    v58 = 0LL;
    v128[11] = 0LL;
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
      if ( v60 + 2 != &v127 )
      {
        v60[2] = Ptr;
        Ptr = 0LL;
      }
      v60[3] = 0LL;
      if ( v60 + 3 != v128 )
      {
        v60[3] = v54;
        v57 = 0LL;
      }
      v60[4] = v110;
      *v60 = off_180426348;
      v58 = v60;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v114, 0LL, v58, 0LL);
    if ( v58 )
      (*(void (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v10 = v108;
  }
  if ( v89 )
  {
    v105 = 0LL;
    ppvOut = 0LL;
    v109 = 0LL;
    v115 = 2;
    (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL))(
      a1 + 48,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v109);
    v61 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = IUnknown_QueryService(v109, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    v63 = v109;
    if ( v109 )
    {
      v109 = 0LL;
      ((void (__fastcall *)(IUnknown *, struct IUnknownVtbl *))v63->lpVtbl->Release)(v63, v63->lpVtbl);
    }
    v64 = ppvOut;
    if ( v62 < 0 )
    {
      v65 = v105;
    }
    else
    {
      if ( ppvOut )
      {
        (*(void (**)(void))(*(_QWORD *)ppvOut + 8LL))();
        v64 = ppvOut;
      }
      v65 = v64;
      v105 = v64;
      v62 = 0;
    }
    if ( v64 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v64 + 16LL))(v64);
      v65 = v105;
    }
    if ( v62 >= 0 )
    {
      (*(void (__fastcall **)(void *, struct IObjectArray *, __int64, __int64, _DWORD, int, int))(*(_QWORD *)v65 + 24LL))(
        v65,
        v92,
        a1 + 248,
        v93,
        *(_DWORD *)(a2 + 24),
        v94,
        v102);
      v65 = v105;
    }
    if ( v65 )
    {
      v105 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v65 + 16LL))(v65);
    }
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v66 = *(_QWORD *)(a1 + 512);
  if ( v66 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
  }
  *(_DWORD *)(a1 + 504) = 0;
  v67 = *(_QWORD *)(a1 + 488);
  if ( v67 != 1 )
    *(_QWORD *)(a1 + 496) = v67;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(a2 + 24));
  *(_QWORD *)(a1 + 768) = v10;
  v116 = 0;
  v68 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v116, 4LL) | 0x10000000;
  if ( v68 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x33D,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v68,
      0);
    __debugbreak();
  }
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  v69 = v93;
  if ( v93 )
  {
    v93 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
  v70 = v92;
  if ( v92 )
  {
    v92 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v70->lpVtbl->Release)(v70);
  }
  v71 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v71->lpVtbl->Release)(v71);
  }
  v72 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v72 + 16LL))(v72);
  }
  if ( v95 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
