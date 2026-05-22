/*
 * XREFs of ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800030C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180003CA0 (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180003E60 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180004020 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800041E0 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800043A0 (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 *     ?UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180004560 (-UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002EF50 (-UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18004E5A0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180065750 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  int v5; // eax
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // eax
  void (__fastcall ***v14)(_QWORD); // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r14
  int v26; // eax
  void (__fastcall ***v27)(_QWORD); // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rbx
  _QWORD *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  int v39; // eax
  void (__fastcall ***v40)(_QWORD); // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // r14
  int v52; // eax
  void (__fastcall ***v53)(_QWORD); // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // r15
  __int64 v59; // rcx
  __int64 v60; // rbx
  _QWORD *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // r14
  int v65; // eax
  void (__fastcall ***v66)(_QWORD); // rcx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rbx
  struct Microsoft::Bamo::BamoPrincipal *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // eax
  int v76; // eax
  int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // eax
  int v84; // [rsp+20h] [rbp-E0h]
  __int64 v85; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+50h] [rbp-B0h]
  _QWORD v88[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v89[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v90[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v91[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v92[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v93[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v94[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v95[4]; // [rsp+C8h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]
  __int64 v97; // [rsp+130h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v98; // [rsp+138h] [rbp+38h]
  __int64 v99; // [rsp+140h] [rbp+40h] BYREF
  __int64 v100; // [rsp+148h] [rbp+48h] BYREF

  v98 = a2;
  v87 = *((_QWORD *)a3 + 5);
  v88[0] = *(unsigned int *)(v87 + 36);
  v88[1] = *(unsigned int *)(v87 + 40);
  LOWORD(v84) = 24;
  v5 = CoreUICallSend(a2, v88, 2LL, 57LL);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1952,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v5,
      v84);
    __debugbreak();
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v6 + 40) )
  {
    v7 = *((_QWORD *)this + 5);
    if ( v7 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v11 = v9[4];
      v12 = v10;
      if ( !v11 )
        goto LABEL_8;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 36LL) == *(_DWORD *)(v10 + 36) )
          break;
        v11 = *(_QWORD *)(v11 + 48);
      }
      while ( v11 );
      if ( !v11 )
      {
LABEL_8:
        v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v9 + 64LL))(v9, v10, &v97);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v13,
            v84);
          __debugbreak();
        }
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v97 + 32LL))(v97);
        *(_QWORD *)(v11 + 24) = v9;
        v14 = *(void (__fastcall ****)(_QWORD))(v11 + 40);
        *(_QWORD *)(v11 + 40) = v12;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        if ( v14 )
          (**v14)(v14);
        *(_QWORD *)(v11 + 48) = v9[4];
        v9[4] = v11;
        *(_QWORD *)(v11 + 56) = *(_QWORD *)(v12 + 48);
        *(_QWORD *)(v12 + 48) = v11;
      }
      if ( !*(_BYTE *)(v11 + 32) )
      {
        *(_BYTE *)(v11 + 32) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v9 + 56LL))(
          v9,
          *(_QWORD *)(*(_QWORD *)(v9[2] + 24LL) + 48LL),
          v11);
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v15,
            v84);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 16));
    }
    v16 = *(_QWORD *)(v6 + 48);
    v17 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v89[1] = *((unsigned int *)this + 6);
    v89[0] = v17;
    LOWORD(v84) = 0;
    v18 = CoreUICallSend(v16, v89, 2LL, 32LL);
    if ( ((v18 + 0x80000000) & 0x80000000) == 0 && v18 != -2018375675 )
    {
      v78 = wil::verify_hresult<long>(v18);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19C5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v78,
        v84);
      __debugbreak();
    }
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(this, a3);
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v19 + 40) )
  {
    v20 = *((_QWORD *)this + 7);
    if ( v20 )
    {
      v21 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      v24 = v22[4];
      v25 = v23;
      if ( !v24 )
        goto LABEL_23;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v24 + 40) + 36LL) == *(_DWORD *)(v23 + 36) )
          break;
        v24 = *(_QWORD *)(v24 + 48);
      }
      while ( v24 );
      if ( !v24 )
      {
LABEL_23:
        v26 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v22 + 64LL))(v22, v23, &v99);
        if ( v26 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v26,
            v84);
          __debugbreak();
        }
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
        *(_QWORD *)(v24 + 24) = v22;
        v27 = *(void (__fastcall ****)(_QWORD))(v24 + 40);
        *(_QWORD *)(v24 + 40) = v25;
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
        if ( v27 )
          (**v27)(v27);
        *(_QWORD *)(v24 + 48) = v22[4];
        v22[4] = v24;
        *(_QWORD *)(v24 + 56) = *(_QWORD *)(v25 + 48);
        *(_QWORD *)(v25 + 48) = v24;
      }
      if ( !*(_BYTE *)(v24 + 32) )
      {
        *(_BYTE *)(v24 + 32) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v22 + 56LL))(
          v22,
          *(_QWORD *)(*(_QWORD *)(v22[2] + 24LL) + 48LL),
          v24);
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
        if ( v28 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v28,
            v84);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 16));
    }
    v29 = *(_QWORD *)(v19 + 48);
    v30 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v90[1] = *((unsigned int *)this + 6);
    v90[0] = v30;
    LOWORD(v84) = 2;
    v31 = CoreUICallSend(v29, v90, 2LL, 32LL);
    if ( ((v31 + 0x80000000) & 0x80000000) == 0 && v31 != -2018375675 )
    {
      v79 = wil::verify_hresult<long>(v31);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A15,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v79,
        v84);
      __debugbreak();
    }
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCache(this, a3);
  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v32 + 40) )
  {
    v33 = *((_QWORD *)this + 13);
    if ( v33 )
    {
      v34 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v35 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
      v37 = v35[4];
      v38 = v36;
      if ( !v37 )
        goto LABEL_38;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v37 + 40) + 36LL) == *(_DWORD *)(v36 + 36) )
          break;
        v37 = *(_QWORD *)(v37 + 48);
      }
      while ( v37 );
      if ( !v37 )
      {
LABEL_38:
        v39 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v35 + 64LL))(v35, v36, &v100);
        if ( v39 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v39,
            v84);
          __debugbreak();
        }
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 32LL))(v100);
        *(_QWORD *)(v37 + 24) = v35;
        v40 = *(void (__fastcall ****)(_QWORD))(v37 + 40);
        *(_QWORD *)(v37 + 40) = v38;
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
        if ( v40 )
          (**v40)(v40);
        *(_QWORD *)(v37 + 48) = v35[4];
        v35[4] = v37;
        *(_QWORD *)(v37 + 56) = *(_QWORD *)(v38 + 48);
        *(_QWORD *)(v38 + 48) = v37;
      }
      if ( !*(_BYTE *)(v37 + 32) )
      {
        *(_BYTE *)(v37 + 32) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v35 + 56LL))(
          v35,
          *(_QWORD *)(*(_QWORD *)(v35[2] + 24LL) + 48LL),
          v37);
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 40LL))(v37);
        if ( v41 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v41,
            v84);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 16));
    }
    v42 = *(_QWORD *)(v32 + 48);
    v43 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v91[1] = *((unsigned int *)this + 6);
    LOWORD(v84) = 8;
    v91[0] = v43;
    v44 = CoreUICallSend(v42, v91, 2LL, 32LL);
    if ( ((v44 + 0x80000000) & 0x80000000) == 0 && v44 != -2018375675 )
    {
      v80 = wil::verify_hresult<long>(v44);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B05,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v80,
        v84);
      __debugbreak();
    }
  }
  v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v45 + 40) )
  {
    v46 = *((_QWORD *)this + 14);
    if ( v46 )
    {
      v47 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v48 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
      v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
      v50 = v48[4];
      v51 = v49;
      if ( !v50 )
        goto LABEL_53;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v50 + 40) + 36LL) == *(_DWORD *)(v49 + 36) )
          break;
        v50 = *(_QWORD *)(v50 + 48);
      }
      while ( v50 );
      if ( !v50 )
      {
LABEL_53:
        v52 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v48 + 64LL))(v48, v49, &v85);
        if ( v52 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v52,
            v84);
          __debugbreak();
        }
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 32LL))(v85);
        *(_QWORD *)(v50 + 24) = v48;
        v53 = *(void (__fastcall ****)(_QWORD))(v50 + 40);
        *(_QWORD *)(v50 + 40) = v51;
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 8));
        if ( v53 )
          (**v53)(v53);
        *(_QWORD *)(v50 + 48) = v48[4];
        v48[4] = v50;
        *(_QWORD *)(v50 + 56) = *(_QWORD *)(v51 + 48);
        *(_QWORD *)(v51 + 48) = v50;
      }
      if ( !*(_BYTE *)(v50 + 32) )
      {
        *(_BYTE *)(v50 + 32) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v48 + 56LL))(
          v48,
          *(_QWORD *)(*(_QWORD *)(v48[2] + 24LL) + 48LL),
          v50);
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 40LL))(v50);
        if ( v54 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v54,
            v84);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v50 + 16));
    }
    v55 = *(_QWORD *)(v45 + 48);
    v56 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v92[1] = *((unsigned int *)this + 6);
    LOWORD(v84) = 9;
    v92[0] = v56;
    v57 = CoreUICallSend(v55, v92, 2LL, 32LL);
    if ( ((v57 + 0x80000000) & 0x80000000) == 0 && v57 != -2018375675 )
    {
      v81 = wil::verify_hresult<long>(v57);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B2D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v81,
        v84);
      __debugbreak();
    }
  }
  v58 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v58 + 40) )
  {
    v59 = *((_QWORD *)this + 15);
    if ( v59 )
    {
      v60 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v61 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
      v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
      v63 = v61[4];
      v64 = v62;
      if ( !v63 )
        goto LABEL_68;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v63 + 40) + 36LL) == *(_DWORD *)(v62 + 36) )
          break;
        v63 = *(_QWORD *)(v63 + 48);
      }
      while ( v63 );
      if ( !v63 )
      {
LABEL_68:
        v65 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v61 + 64LL))(v61, v62, &v86);
        if ( v65 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v65,
            v84);
          __debugbreak();
        }
        v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 32LL))(v86);
        *(_QWORD *)(v63 + 24) = v61;
        v66 = *(void (__fastcall ****)(_QWORD))(v63 + 40);
        *(_QWORD *)(v63 + 40) = v64;
        _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
        if ( v66 )
          (**v66)(v66);
        *(_QWORD *)(v63 + 48) = v61[4];
        v61[4] = v63;
        *(_QWORD *)(v63 + 56) = *(_QWORD *)(v64 + 48);
        *(_QWORD *)(v64 + 48) = v63;
      }
      if ( !*(_BYTE *)(v63 + 32) )
      {
        *(_BYTE *)(v63 + 32) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v61 + 56LL))(
          v61,
          *(_QWORD *)(*(_QWORD *)(v61[2] + 24LL) + 48LL),
          v63);
        v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 40LL))(v63);
        if ( v67 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v67,
            v84);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v63 + 16));
    }
    v68 = *(_QWORD *)(v58 + 48);
    v69 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v93[1] = *((unsigned int *)this + 6);
    LOWORD(v84) = 10;
    v93[0] = v69;
    v70 = CoreUICallSend(v68, v93, 2LL, 32LL);
    if ( ((v70 + 0x80000000) & 0x80000000) == 0 && v70 != -2018375675 )
    {
      v82 = wil::verify_hresult<long>(v70);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B55,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v82,
        v84);
      __debugbreak();
    }
  }
  v71 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v71 + 40) )
  {
    v72 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 16);
    if ( v72 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v72,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 5) + 16LL));
    v73 = *(_QWORD *)(v71 + 48);
    v74 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    LOWORD(v84) = 11;
    v94[1] = *((unsigned int *)this + 6);
    v94[0] = v74;
    v75 = CoreUICallSend(v73, v94, 2LL, 32LL);
    if ( ((v75 + 0x80000000) & 0x80000000) == 0 && v75 != -2018375675 )
    {
      v83 = wil::verify_hresult<long>(v75);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B7D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v83,
        v84);
      __debugbreak();
    }
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(this, a3);
  v76 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v76 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1978,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v76,
      v84);
    __debugbreak();
  }
  v95[0] = *(unsigned int *)(v87 + 36);
  v95[1] = *(unsigned int *)(v87 + 40);
  LOWORD(v84) = 41;
  v77 = CoreUICallSend(v98, v95, 2LL, 57LL);
  if ( v77 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1983,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v77,
      v84);
    JUMPOUT(0x180003C92LL);
  }
}
