/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180031BB0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180078FE0 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180079538 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F7904 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F8450 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18005C7C4 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18005F980 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180073254 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800790D4 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180079148 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x18007DC5C (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800F28A0 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1800F77C8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
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
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, IUnknown **); // rcx
  int v20; // eax
  void *v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rax
  IUnknown *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rcx
  IUnknown *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rbx
  unsigned __int64 v31; // rcx
  __int64 *v32; // rdx
  __int64 v33; // rcx
  struct IObjectArray *v34; // rcx
  char v35; // r14
  int v36; // edi
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  unsigned __int64 i; // rbx
  int SingleMonitorObjectArray; // eax
  __int64 v41; // rcx
  unsigned __int64 j; // rbx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r15
  PSRWLOCK v46; // rdi
  PVOID Ptr; // r14
  __int64 v48; // r12
  _QWORD *v49; // rbx
  _QWORD *v50; // rax
  _QWORD *v51; // rdi
  void *v52; // rbx
  void *v53; // rcx
  HRESULT v54; // edi
  IUnknown *v55; // rcx
  void *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  struct IObjectArray *v60; // rcx
  IUnknown *v61; // rcx
  void *v62; // rcx
  const void **v63; // rbx
  __int64 v64; // rcx
  unsigned __int64 v65; // rdi
  __int64 v66; // r8
  IUnknown *v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  unsigned __int8 v70; // bl
  __int64 v71; // rbx
  __int64 v72; // rbx
  unsigned __int64 v73; // rcx
  __int64 *v74; // rdx
  int cchValue; // [rsp+20h] [rbp-E0h]
  char v76; // [rsp+40h] [rbp-C0h]
  char v77; // [rsp+40h] [rbp-C0h]
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+58h] [rbp-A8h] BYREF
  struct IObjectArray *v81; // [rsp+60h] [rbp-A0h] BYREF
  int v82; // [rsp+68h] [rbp-98h]
  int v83; // [rsp+6Ch] [rbp-94h]
  void *ppvOut; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v86; // [rsp+80h] [rbp-80h]
  __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+98h] [rbp-68h] BYREF
  int v90; // [rsp+A0h] [rbp-60h]
  __int64 v91; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-50h] BYREF
  IUnknown *v93; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  struct IImmersiveMonitor *v95; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v96; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v98; // [rsp+E0h] [rbp-20h] BYREF
  int v99; // [rsp+E4h] [rbp-1Ch] BYREF
  int v100; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v101; // [rsp+ECh] [rbp-14h]
  __int64 v102; // [rsp+F0h] [rbp-10h] BYREF
  int v103; // [rsp+F8h] [rbp-8h]
  HWND v104; // [rsp+100h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+108h] [rbp+8h]
  _QWORD *v106; // [rsp+110h] [rbp+10h]
  __int64 v107; // [rsp+118h] [rbp+18h]
  __int64 v108; // [rsp+120h] [rbp+20h]
  HWND v109; // [rsp+128h] [rbp+28h] BYREF
  __int64 v110; // [rsp+130h] [rbp+30h]
  char v111; // [rsp+138h] [rbp+38h]
  PVOID v112; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v113[7]; // [rsp+148h] [rbp+48h] BYREF
  int v114; // [rsp+180h] [rbp+80h]
  __int64 v115; // [rsp+188h] [rbp+88h]
  __int64 v116; // [rsp+190h] [rbp+90h]
  WCHAR Filename[264]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  v113[2] = -2LL;
  v82 = a3;
  v5 = 0LL;
  v103 = 0;
  if ( a1 )
    v6 = a1 + 392;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v113[6] = v6;
  v7 = *(_DWORD *)(v6 + 44);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_206;
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
        goto LABEL_199;
      }
LABEL_206:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_199:
  if ( *(_DWORD *)(v6 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v98);
    v83 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v98 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v83 = ApartmentId;
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
  v83 = ApartmentId;
LABEL_9:
  v114 = ApartmentId;
  v10 = *(HWND *)(a2 + 8);
  v104 = v10;
  v11 = 1;
  v76 = 1;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v95 = 0LL;
    if ( *(_BYTE *)(a2 + 20) || *(_BYTE *)(a2 + 21) )
    {
      v70 = 0;
    }
    else
    {
      v70 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v95);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v10, &v95);
    }
    if ( v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
      && v10 != (HWND)1
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v10, v70) >= 0
      && (!v95
       || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536), v10))
      && CApplicationManager::_IsMultimon((CApplicationManager *)a1)
      && *(_DWORD *)(a2 + 24) == 1 )
    {
      v11 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v10);
      v76 = v11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v95);
  }
  ppv = 0LL;
  punk = 0LL;
  v108 = 0LL;
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    punk = 0LL;
    v113[3] = 0LL;
    v12 = 0LL;
    v94 = 0LL;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 640) )
    {
      v113[4] = 0LL;
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v13);
        v107 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = -1;
        v96 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
               v14,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v96) >= 0 )
        {
          v109 = v10;
          v110 = 0LL;
          v111 = 0;
          v15 = ((*(unsigned __int8 (__fastcall **)(__int64, HWND *, __int64))(*(_QWORD *)v96 + 296LL))(v96, &v109, 2LL) != 0)
              - 1;
          v16 = v110;
          if ( v110 )
          {
            v110 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
        v17 = v96;
        if ( v96 )
        {
          v96 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v107 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !v15 )
        {
          v12 = v13;
          v18 = 0;
          goto LABEL_22;
        }
        ++v13;
      }
      while ( v13 < *(_QWORD *)(a1 + 640) );
      v12 = v94;
    }
    v18 = -2147319765;
LABEL_22:
    if ( v18 < 0
      || (v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v12),
          v20 = (**v19)(v19, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk),
          v5 = v12,
          v108 = v12,
          v20 < 0) )
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
      v21 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v11 = v76;
  }
  v22 = *(__int64 **)(a1 + 592);
  v23 = *v22;
  if ( *(_DWORD *)(a2 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v23 + 40))(v22, *(_QWORD *)(a2 + 8));
  else
    (*(void (**)(void))(v23 + 48))();
  *(_QWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 504) = v82;
  v24 = punk;
  if ( punk && *(IUnknown **)(a1 + 512) != punk )
  {
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
    v25 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v24;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v24 = punk;
  }
  if ( *(_DWORD *)(a2 + 16) == 2 && !v24 )
  {
    v26 = 2LL;
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
    v26 = *(unsigned int *)(a2 + 16);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *(unsigned int *)(a2 + 24),
    v26,
    *(unsigned __int8 *)(a2 + 28));
  v27 = ppv;
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
      v63 = (const void **)(a1 + 632);
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        a1 + 632,
        v5);
      v64 = *(_QWORD *)(a1 + 640);
      v65 = 1LL;
      if ( v64 )
        v65 = v64 + 1;
      if ( v65 <= *(_QWORD *)(a1 + 656)
        || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  a1 + 632,
                  v65) >= 0 )
      {
        v66 = *(_QWORD *)(a1 + 640);
        if ( v66 )
          memmove_0((char *)*v63 + 8, *v63, 8 * v66);
        *(_QWORD *)(a1 + 640) = v65;
        if ( *v63 )
        {
          v67 = punk;
          *(_QWORD *)*v63 = punk;
          if ( v67 )
            ((void (__fastcall *)(IUnknown *))v67->lpVtbl->AddRef)(v67);
        }
      }
    }
    v27 = ppv;
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
    if ( v11 )
      v68 = *(unsigned int *)(a2 + 24);
    else
      v68 = 0LL;
    v27 = ppv;
LABEL_155:
    (*(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v27 + 40LL))(v27, 4LL, v68);
    goto LABEL_45;
  }
  if ( !punk )
  {
    v68 = 0LL;
    goto LABEL_155;
  }
LABEL_45:
  v81 = 0LL;
  v80 = 0LL;
  v90 = 0xFFFF;
  v77 = 1;
  if ( GetShellWindow() != v10
    && !(unsigned int)GetPropW(v10, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v10 )
  {
    pv = 0LL;
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    v28 = punk;
    if ( punk )
    {
      v29 = v80;
      if ( v80 )
      {
        v80 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        v28 = punk;
      }
      ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v28->lpVtbl->QueryInterface)(
        v28,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v80);
      v92 = 0LL;
      ((void (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[19].AddRef)(punk, &v92);
      v30 = v92;
      v102 = v92;
      if ( v92 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 8LL))(v92);
      v31 = v86;
      if ( v86 == v88 )
      {
        if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                    &pv,
                    v86 + 1) < 0 )
        {
LABEL_59:
          if ( v30 )
          {
            v102 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v33 = v92;
          if ( v92 )
          {
            v92 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          goto LABEL_63;
        }
        v31 = v86;
      }
      v86 = v31 + 1;
      v32 = (__int64 *)((char *)pv + 8 * v31);
      if ( v32 )
      {
        *v32 = 0LL;
        if ( v32 != &v102 )
        {
          *v32 = v30;
          v30 = 0LL;
          v102 = 0LL;
        }
      }
      goto LABEL_59;
    }
    v69 = *(_DWORD *)(a2 + 16);
    if ( v69 == 1 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v10, &pv);
      goto LABEL_63;
    }
    if ( v69 == 2 )
      goto LABEL_217;
    if ( *(_DWORD *)(a2 + 24) == 1 || *(_DWORD *)(a2 + 24) == 8 )
    {
LABEL_63:
      v34 = v81;
      if ( v81 )
      {
        v81 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v34->lpVtbl->Release)(v34);
      }
      v35 = 0;
      v81 = 0LL;
      v89 = 0LL;
      v36 = -2147024882;
      v37 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v38 = v37;
      v106 = v37;
      if ( v37 )
      {
        *v37 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
        v37[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
        v37[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
        *((_DWORD *)v37 + 6) = 1;
        *(_QWORD *)((char *)v37 + 28) = 4LL;
        v37[5] = 0LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        v37[8] = 0LL;
        v36 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v37)(
                v37,
                &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
                &v89);
        (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      }
      if ( v36 >= 0 )
      {
        for ( i = 0LL; i < v86; ++i )
        {
          (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + i) + 48LL))(*((_QWORD *)pv + i), &v99);
          if ( v99 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v89 + 40LL))(v89, *((_QWORD *)pv + i));
        }
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v89 + 24LL))(v89, &v100);
        if ( v100 )
        {
          SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v89)(
                                       v89,
                                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                       &v81);
        }
        else
        {
          v35 = 1;
          SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                       (CApplicationManager *)a1,
                                       0LL,
                                       &v81);
        }
        v36 = SingleMonitorObjectArray;
      }
      v41 = v89;
      if ( v89 )
      {
        v89 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      if ( v36 >= 0 )
      {
        if ( v35 && punk )
          v82 = 8;
        goto LABEL_79;
      }
LABEL_217:
      v77 = 0;
LABEL_79:
      if ( pv )
      {
        for ( j = 0LL; j < v86; ++j )
        {
          v43 = *((_QWORD *)pv + j);
          if ( v43 )
          {
            *((_QWORD *)pv + j) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v86 = 0LL;
      v88 = 0LL;
      goto LABEL_86;
    }
    v91 = 0LL;
    v71 = *(_QWORD *)(a1 + 560);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v91);
    if ( (*(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v71 + 88LL))(
           v71,
           v10,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v91) < 0 )
    {
LABEL_183:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
             *(_QWORD *)(a1 + 568),
             v10) )
      {
        v90 = 65534;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v91);
      goto LABEL_63;
    }
    v72 = v91;
    v97 = v91;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v97);
    v73 = v86;
    if ( v86 == v88 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                  &pv,
                  v86 + 1) < 0 )
      {
LABEL_182:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v97);
        goto LABEL_183;
      }
      v73 = v86;
    }
    v86 = v73 + 1;
    v74 = (__int64 *)((char *)pv + 8 * v73);
    if ( v74 )
    {
      *v74 = 0LL;
      if ( v74 != &v97 )
      {
        *v74 = v72;
        v97 = 0LL;
      }
    }
    goto LABEL_182;
  }
  if ( v10 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) )
    v77 = 0;
LABEL_86:
  v44 = (__int64)v10;
  v94 = (__int64)v10;
  v45 = v80;
  if ( !v80 && v10 )
  {
    v44 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v10);
    v94 = v44;
    v45 = v80;
  }
  v115 = v45;
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
  v116 = v44;
  v46 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v112 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v48 = v45;
    v113[0] = v45;
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
    v113[1] = v44;
    v101 = (unsigned int)v46[15].Ptr;
    v49 = 0LL;
    v113[5] = 0LL;
    v50 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v51 = v50;
    if ( v50 )
    {
      *((_DWORD *)v50 + 3) = 1;
      *v50 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v51[2] = 0LL;
      if ( v51 + 2 != &v112 )
      {
        v51[2] = Ptr;
        Ptr = 0LL;
      }
      v51[3] = 0LL;
      if ( v51 + 3 != v113 )
      {
        v51[3] = v45;
        v48 = 0LL;
      }
      v51[4] = v94;
      *v51 = off_1803C37B0;
      v49 = v51;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v101, 0LL, v49, 0LL);
    if ( v49 )
      (*(void (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v10 = v104;
  }
  if ( v77 )
  {
    v52 = 0LL;
    v106 = 0LL;
    ppvOut = 0LL;
    v93 = 0LL;
    v103 = 2;
    (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL))(
      a1 + 48,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v93);
    v53 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = IUnknown_QueryService(v93, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    v55 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      ((void (__fastcall *)(IUnknown *, struct IUnknownVtbl *))v55->lpVtbl->Release)(v55, v55->lpVtbl);
    }
    v56 = ppvOut;
    if ( v54 >= 0 )
    {
      if ( ppvOut )
      {
        (*(void (**)(void))(*(_QWORD *)ppvOut + 8LL))();
        v56 = ppvOut;
      }
      v52 = v56;
      v106 = v56;
      v54 = 0;
    }
    if ( v56 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v56 + 16LL))(v56);
    }
    if ( v54 >= 0 )
      (*(void (__fastcall **)(void *, struct IObjectArray *, __int64, __int64, _DWORD, int, int))(*(_QWORD *)v52 + 24LL))(
        v52,
        v81,
        a1 + 248,
        v80,
        *(_DWORD *)(a2 + 24),
        v82,
        v90);
    if ( v52 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v52 + 16LL))(v52);
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v57 = *(_QWORD *)(a1 + 512);
  if ( v57 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  *(_DWORD *)(a1 + 504) = 0;
  v58 = *(_QWORD *)(a1 + 488);
  if ( v58 != 1 )
    *(_QWORD *)(a1 + 496) = v58;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(a2 + 24));
  *(_QWORD *)(a1 + 768) = v10;
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  v59 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  }
  v60 = v81;
  if ( v81 )
  {
    v81 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v60->lpVtbl->Release)(v60);
  }
  v61 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v61->lpVtbl->Release)(v61);
  }
  v62 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v62 + 16LL))(v62);
  }
  if ( v83 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
