/*
 * XREFs of ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800059E0 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18000C384 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800232EC (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@Z@std@@@Z @ 0x18008C920 (-Initialize@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x18008CB18 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ??$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMagnifierProcessor@@@WRL@Microsoft@@@012@@Z @ 0x18008CEC8 (--$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPt.c)
 *     ??$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVActivationProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x18008CFDC (--$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18008EC0C (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z @ 0x1800C2248 (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800C5430 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800C8E64 (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800CA674 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800D0C70 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2650 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2D40 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800D3E48 (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180105C8C (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180106064 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     IsPreloadKeyboardLayoutsPresent @ 0x18012D720 (IsPreloadKeyboardLayoutsPresent.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall DWMInputRouter::Initialize(DWMInputRouter *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r15
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  const char *v20; // r9
  __int64 v21; // r12
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  struct IContextualProcessor *v33; // rax
  struct IContextualProcessor *v34; // rbx
  DWMCursorBroker *v35; // rbx
  int v36; // r12d
  int v37; // edi
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rbx
  _QWORD *v45; // r15
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdi
  int v49; // eax
  int v50; // eax
  __int64 v51; // r8
  const char *v52; // r9
  __int64 v53; // rcx
  int v54; // eax
  const char *v55; // r9
  _QWORD *v56; // rdi
  __int64 v57; // rcx
  int v58; // eax
  wil::details::in1diag3 *v59; // rcx
  int v60; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  void (__fastcall ***v62)(_QWORD); // rax
  void (__fastcall ***v63)(_QWORD); // rsi
  void (__fastcall ***v64)(_QWORD); // rbx
  void (__fastcall ***v65)(_QWORD); // rcx
  void (__fastcall **v66)(_QWORD); // rcx
  void (__fastcall **v67)(_QWORD); // rdi
  ContextualProcessorManager *v68; // rbx
  _DWORD *v69; // rax
  _DWORD *v70; // rdi
  __int64 v71; // r9
  wil::details::in1diag3 *v72; // rcx
  char v73; // cl
  int v74; // esi
  int v75; // eax
  wil::details::in1diag3 *v76; // rcx
  struct IContextualProcessor *v77; // rcx
  struct TapProcessor *v78; // rdi
  int v79; // eax
  int v80; // eax
  struct IContextualProcessor *v81; // rcx
  int v82; // eax
  wil::details::in1diag3 *v83; // rcx
  struct IContextualProcessor *v84; // rcx
  struct EdgyProcessor *v85; // rdi
  int v86; // eax
  int v87; // eax
  struct IContextualProcessor *v88; // rcx
  int v89; // eax
  wil::details::in1diag3 *v90; // rcx
  int v91; // eax
  int v92; // eax
  struct IContextualProcessor *v93; // rcx
  __int64 (__fastcall ***v94)(_QWORD, GUID *, struct IContextualProcessor **); // rcx
  void *v95; // r15
  void *v96; // rax
  void *v97; // rdi
  int v98; // eax
  wil::details::in1diag3 *v99; // rcx
  struct IContextualProcessor *v100; // rcx
  int v101; // eax
  int v102; // eax
  struct IContextualProcessor *v103; // rcx
  char v104; // cl
  int v105; // eax
  wil::details::in1diag3 *v106; // rcx
  struct IContextualProcessor *v107; // rcx
  __int64 (__fastcall ***v108)(_QWORD, GUID *, struct IContextualProcessor **); // rdi
  int v109; // eax
  int v110; // eax
  struct IContextualProcessor *v111; // rcx
  char *v112; // rdi
  int v113; // eax
  wil::details::in1diag3 *v114; // rcx
  struct IContextualProcessor *v115; // rcx
  __int64 (__fastcall ***v116)(_QWORD, GUID *, struct IContextualProcessor **); // rdi
  int v117; // eax
  wil::details::in1diag3 *v118; // rcx
  int v119; // eax
  struct IContextualProcessor *v120; // rcx
  char *v121; // rdi
  int v122; // eax
  wil::details::in1diag3 *v123; // rcx
  struct IContextualProcessor *v124; // rcx
  LARGE_INTEGER *v125; // rdi
  int v126; // eax
  wil::details::in1diag3 *v127; // rcx
  int v128; // eax
  struct IContextualProcessor *v129; // rcx
  int v130; // eax
  wil::details::in1diag3 *v131; // rcx
  struct IContextualProcessor *v132; // rcx
  struct ComboButtonProcessor *v133; // rdi
  int v134; // eax
  int v135; // eax
  struct IContextualProcessor *v136; // rcx
  int v137; // eax
  wil::details::in1diag3 *v138; // rcx
  struct IContextualProcessor *v139; // rcx
  struct RawButtonProcessor *v140; // rdi
  int v141; // eax
  int v142; // eax
  struct IContextualProcessor *v143; // rcx
  _QWORD *v144; // rdi
  _QWORD *v145; // rax
  _QWORD *v146; // rsi
  wil::details::in1diag3 *v147; // rcx
  struct IContextualProcessor *v148; // rcx
  int v149; // eax
  int v150; // eax
  struct IContextualProcessor *v151; // rcx
  ContextualProcessorManager *v152; // rcx
  struct InputSystemServerConnection *v153; // rdi
  char *v154; // rsi
  __int64 v155; // rcx
  struct IContextualProcessor *v157; // [rsp+40h] [rbp-C0h] BYREF
  struct IContextualProcessor *v158; // [rsp+48h] [rbp-B8h] BYREF
  struct IContextualProcessor *v159; // [rsp+50h] [rbp-B0h] BYREF
  struct IContextualProcessor *v160; // [rsp+58h] [rbp-A8h] BYREF
  struct IContextualProcessor *v161; // [rsp+60h] [rbp-A0h] BYREF
  struct IContextualProcessor *v162; // [rsp+68h] [rbp-98h] BYREF
  struct IContextualProcessor *v163; // [rsp+70h] [rbp-90h] BYREF
  struct IContextualProcessor *v164; // [rsp+78h] [rbp-88h] BYREF
  __int64 v165; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall ***v166)(_QWORD, GUID *, struct IContextualProcessor **); // [rsp+88h] [rbp-78h] BYREF
  DWMCursorBroker *v167; // [rsp+90h] [rbp-70h]
  struct TapProcessor *v168; // [rsp+98h] [rbp-68h] BYREF
  struct EdgyProcessor *v169; // [rsp+A0h] [rbp-60h] BYREF
  void *v170; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall ***v171)(_QWORD, GUID *, struct IContextualProcessor **); // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall ***v172)(_QWORD, GUID *, struct IContextualProcessor **); // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER *v173; // [rsp+C0h] [rbp-40h] BYREF
  struct ComboButtonProcessor *v174; // [rsp+C8h] [rbp-38h] BYREF
  struct RawButtonProcessor *v175; // [rsp+D0h] [rbp-30h] BYREF
  void *v176; // [rsp+D8h] [rbp-28h]
  char *v177; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v178; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v179; // [rsp+F0h] [rbp-10h] BYREF
  char v180; // [rsp+F8h] [rbp-8h]
  __int64 v181; // [rsp+100h] [rbp+0h] BYREF
  char v182; // [rsp+108h] [rbp+8h]
  __int64 v183; // [rsp+110h] [rbp+10h] BYREF
  char v184; // [rsp+118h] [rbp+18h]
  _DWORD *v185; // [rsp+120h] [rbp+20h]
  DWMInputRouter *v186; // [rsp+128h] [rbp+28h] BYREF
  _QWORD *v187; // [rsp+130h] [rbp+30h]
  __int64 v188; // [rsp+138h] [rbp+38h]
  DWMInputRouter *v189; // [rsp+140h] [rbp+40h]
  DWMInputRouter *v190; // [rsp+148h] [rbp+48h]
  DWMInputRouter *v191; // [rsp+158h] [rbp+58h]
  _QWORD v192[8]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v193[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]
  unsigned int v195; // [rsp+230h] [rbp+130h] BYREF
  int v196; // [rsp+238h] [rbp+138h]
  struct IContextualProcessor *v197; // [rsp+240h] [rbp+140h] BYREF
  struct IContextualProcessor *v198; // [rsp+248h] [rbp+148h] BYREF

  v188 = -2LL;
  v196 = 0;
  v183 = 0LL;
  v184 = 0;
  v181 = 0LL;
  v182 = 0;
  v179 = 0LL;
  v180 = 0;
  v195 = 0;
  v165 = 0LL;
  v2 = (__int64 *)((char *)this + 152);
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (_QWORD *)((char *)this + 160);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = CoreUIFactoryCreate((char *)this + 160);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v9 = InputSecurityDescriptor::QueryDescriptor(&v183, v8, c_wszMessagePortNames);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *v2;
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v10 + 56LL))(v10, v183, (char *)this + 168);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v14 = InputSecurityDescriptor::QueryDescriptor(&v181, v13, c_wszMessagePortNames);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = *v2;
  v16 = (_QWORD *)((char *)this + 176);
  v17 = *((_QWORD *)this + 22);
  if ( v17 )
  {
    *v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v15 + 56LL))(v15, v181, (char *)this + 176);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v5 + 24LL))(
          *v5,
          &GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300,
          &v195);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v20);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v21 = *v5;
    v22 = *((_QWORD *)this + 24);
    if ( v22 )
    {
      *((_QWORD *)this + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const char *, _QWORD, char *))(*(_QWORD *)v21 + 32LL))(
            v21,
            (char *)this + 16,
            0LL,
            v195,
            L"IInputDisplayDeviceBindingApi",
            *v16,
            (char *)this + 192);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v5 + 24LL))(
          *v5,
          &GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062,
          &v195);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  v25 = *v5;
  v26 = *((_QWORD *)this + 44);
  if ( v26 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const char *, _QWORD, char *))(*(_QWORD *)v25 + 32LL))(
          v25,
          (char *)this + 24,
          0LL,
          v195,
          L"IRemoteViewHitTestApi",
          *v16,
          (char *)this + 352);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v5 + 24LL))(
          *v5,
          &GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc,
          &v195);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v29 = *v5;
  v30 = *((_QWORD *)this + 45);
  if ( v30 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const char *, _QWORD, char *))(*(_QWORD *)v29 + 32LL))(
          v29,
          (char *)this + 32,
          0LL,
          v195,
          L"IRemoteViewHitTestRequestApi",
          *v16,
          (char *)this + 360);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v31);
    __debugbreak();
  }
  v32 = *((_QWORD *)this + 39);
  if ( v32 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v167 = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  v33 = (struct IContextualProcessor *)malloc(0x1A0uLL);
  v34 = v33;
  if ( v33 )
    memset_0(v33, 0, 0x1A0uLL);
  v197 = v34;
  if ( v34 )
    v35 = DWMCursorBroker::DWMCursorBroker(v34, this);
  else
    v35 = 0LL;
  v167 = v35;
  v36 = -2147024882;
  if ( v35 )
  {
    v38 = DWMCursorBroker::Initialize(v35);
    v37 = v38;
    if ( v38 >= 0 )
    {
      v167 = 0LL;
      *((_QWORD *)this + 39) = v35;
      v37 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v38);
      v167 = 0LL;
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8007000ELL);
    v37 = -2147024882;
  }
  if ( v37 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v37);
    __debugbreak();
  }
  v39 = *v2;
  v40 = v165;
  if ( v165 )
  {
    v165 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 24LL))(v39, &v165);
  if ( v41 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v41);
    __debugbreak();
  }
  v43 = InputSecurityDescriptor::QueryDescriptor(&v179, v42, L"Input\\Service.AlpcPort\\Server");
  if ( v43 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v43);
    __debugbreak();
  }
  v44 = *v2;
  v45 = (_QWORD *)((char *)this + 184);
  v46 = *((_QWORD *)this + 23);
  if ( v46 )
  {
    *v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v44 + 56LL))(v44, v179, (char *)this + 184);
  if ( v47 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v47);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 66,
    *v2);
  v48 = *v2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 66,
    *((_QWORD *)this + 66));
  v49 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), DWMInputRouter *, _QWORD, char *))(*(_QWORD *)v48 + 80LL))(
          v48,
          DWMInputRouter::OnFocusedThreadChangedStatic,
          this,
          *v45,
          (char *)this + 536);
  if ( v49 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v49);
    __debugbreak();
  }
  v50 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v165 + 40LL))(
          v165,
          L"System\\Input\\InputFocusEndpoint",
          *((_QWORD *)this + 67),
          1LL);
  if ( v50 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v50);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v52);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      v189 = this;
      v192[0] = off_18013CC98;
      v192[1] = this;
      v192[7] = v192;
      KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize((char *)this + 400, v2, v51, v192);
    }
    v190 = this;
    v193[0] = off_18013CD58;
    v193[1] = this;
    v193[7] = v193;
    KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::Initialize((char *)this + 544, v2, v51, v193);
  }
  v53 = *((_QWORD *)this + 28);
  if ( v53 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
  v54 = DWMInputDisplay::Create(0LL, (struct IInputDisplay **)this + 28);
  if ( v54 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v54);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v55);
    __debugbreak();
  }
  v56 = (_QWORD *)((char *)this + 384);
  v57 = *((_QWORD *)this + 48);
  if ( *(_BYTE *)ISMTestMode::s_instance )
  {
    if ( v57 )
    {
      *v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v58 = NonBamoInputDeliveryServer::Create((char *)this + 56, L"InputDeliveryTest", 1LL, (char *)this + 384);
    v59 = retaddr;
    if ( v58 < 0 )
    {
LABEL_207:
      wil::details::in1diag3::FailFast_Hr(
        v59,
        (void *)0x13F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v58);
      __debugbreak();
    }
  }
  else
  {
    if ( v57 )
    {
      *v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v60 = NonBamoInputDeliveryServer::Create((char *)this + 56, L"System\\InputDelivery", 0LL, (char *)this + 384);
    if ( v60 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v60);
LABEL_231:
      wil::details::in1diag3::FailFast_Hr(
        v72,
        (void *)0x155,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)v71);
      goto LABEL_232;
    }
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v62 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                        + 19)
                                                                                      + 8LL)
                                                                          + 88LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  v63 = v62;
  v64 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 49);
  if ( v64 != v62 )
  {
    if ( v62 )
    {
      (**v62)(v62);
      v64 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 49);
    }
    v65 = v64;
    *((_QWORD *)this + 49) = v63;
    v64 = v63;
    if ( v65 )
    {
      (*v65)[1](v65);
      v64 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 49);
    }
  }
  v66 = v64[29];
  v67 = (void (__fastcall **)(_QWORD))*v56;
  if ( v66 != v67 )
  {
    if ( v67 )
    {
      (*((void (__fastcall **)(_QWORD))*v67 + 1))(v67);
      v66 = v64[29];
    }
    v64[29] = v67;
    if ( v66 )
      (*((void (__fastcall **)(_QWORD))*v66 + 2))(v66);
  }
  v68 = 0LL;
  v185 = 0LL;
  v69 = malloc(0x28uLL);
  v70 = v69;
  if ( v69 )
  {
    memset_0(v69, 0, 0x28uLL);
    *(_QWORD *)v70 = &RefCountedObject::`vftable';
    v70[2] = 1;
    *(_QWORD *)v70 = &ContextualProcessorManager::`vftable';
    *((_QWORD *)v70 + 2) = 0LL;
    *((_QWORD *)v70 + 3) = 0LL;
    *((_QWORD *)v70 + 4) = 0LL;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v70 )
  {
    v68 = (ContextualProcessorManager *)v70;
    v185 = v70;
    v71 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x8007000ELL);
    v71 = 2147942414LL;
  }
  v72 = retaddr;
  if ( (int)v71 < 0 )
    goto LABEL_231;
  v73 = gdwDeviceFamily;
  v74 = 114688;
  if ( ((1LL << gdwDeviceFamily) & 0x1C000) == 0 )
    goto LABEL_94;
  v168 = 0LL;
  v197 = 0LL;
  v75 = TapProcessor::Create(&v168);
  v76 = retaddr;
  if ( v75 < 0 )
  {
LABEL_232:
    wil::details::in1diag3::FailFast_Hr(
      v76,
      (void *)0x15E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v75);
    __debugbreak();
  }
  v77 = v197;
  if ( v197 )
  {
    v197 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v77 + 16LL))(v77);
  }
  v78 = v168;
  v79 = (**(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, struct IContextualProcessor **))v168)(
          v168,
          &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
          &v197);
  if ( v79 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x15F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v79);
    __debugbreak();
  }
  v80 = ContextualProcessorManager::RegisterProcessor(v68, v197);
  if ( v80 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v80);
    goto LABEL_235;
  }
  v81 = v197;
  if ( v197 )
  {
    v197 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v81 + 16LL))(v81);
  }
  v168 = 0LL;
  (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v78 + 16LL))(v78);
  v73 = gdwDeviceFamily;
LABEL_94:
  if ( ((1LL << v73) & 0x1C000) == 0 )
    goto LABEL_103;
  v169 = 0LL;
  v198 = 0LL;
  v82 = EdgyProcessor::Create(&v169);
  v83 = retaddr;
  if ( v82 < 0 )
  {
LABEL_235:
    wil::details::in1diag3::FailFast_Hr(
      v83,
      (void *)0x16C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v82);
    __debugbreak();
  }
  v84 = v198;
  if ( v198 )
  {
    v198 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v84 + 16LL))(v84);
  }
  v85 = v169;
  v86 = (**(__int64 (__fastcall ***)(struct EdgyProcessor *, GUID *, struct IContextualProcessor **))v169)(
          v169,
          &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
          &v198);
  if ( v86 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x16D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v86);
    __debugbreak();
  }
  v87 = ContextualProcessorManager::RegisterProcessor(v68, v198);
  if ( v87 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x16E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v87);
    goto LABEL_238;
  }
  v88 = v198;
  if ( v198 )
  {
    v198 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v88 + 16LL))(v88);
  }
  v169 = 0LL;
  (*(void (__fastcall **)(struct EdgyProcessor *))(*(_QWORD *)v85 + 16LL))(v85);
  v73 = gdwDeviceFamily;
LABEL_103:
  if ( ((1LL << v73) & 0x1DDA1) == 0 )
    goto LABEL_111;
  v166 = 0LL;
  v157 = 0LL;
  v89 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,MagnifierProcessor,>(&v166);
  v90 = retaddr;
  if ( v89 < 0 )
  {
LABEL_238:
    wil::details::in1diag3::FailFast_Hr(
      v90,
      (void *)0x17A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v89);
    __debugbreak();
  }
  v91 = (**v166)(v166, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v157);
  if ( v91 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v91);
    __debugbreak();
  }
  v92 = ContextualProcessorManager::RegisterProcessor(v68, v157);
  if ( v92 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v92);
    goto LABEL_241;
  }
  v93 = v157;
  if ( v157 )
  {
    v157 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v93 + 16LL))(v93);
  }
  v94 = v166;
  if ( v166 )
  {
    v166 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IContextualProcessor **)))(*v94)[2])(v94);
  }
LABEL_111:
  v95 = 0LL;
  v176 = 0LL;
  v158 = 0LL;
  v170 = 0LL;
  v96 = malloc(0x68uLL);
  v97 = v96;
  if ( v96 )
    memset_0(v96, 0, 0x68uLL);
  if ( v97 )
  {
    memset_0(v97, 0, 0x68uLL);
    *((_QWORD *)v97 + 3) = &RefCountedObject::`vftable';
    *((_DWORD *)v97 + 8) = 1;
    *(_QWORD *)v97 = &InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
    *((_QWORD *)v97 + 1) = &InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
    *((_QWORD *)v97 + 2) = &InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
    *((_QWORD *)v97 + 3) = &InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v97 + 5) = 0LL;
    *((_QWORD *)v97 + 6) = 0LL;
    *((_QWORD *)v97 + 7) = 0LL;
    *((_QWORD *)v97 + 8) = 0LL;
    *((_QWORD *)v97 + 10) = 0LL;
    *((_QWORD *)v97 + 11) = 0LL;
    *((_QWORD *)v97 + 12) = 0LL;
  }
  else
  {
    v97 = 0LL;
  }
  v170 = v97;
  if ( v97 )
  {
    v98 = InputRedirectionProcessor::Initialize((InputRedirectionProcessor *)v97, (DWMInputRouter *)((char *)this + 48));
    v74 = v98;
    if ( v98 >= 0 )
    {
      v170 = 0LL;
      v95 = v97;
      v176 = v97;
      v74 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\l"
                 "ib\\inputredirectionprocessor.cpp",
        (const char *)(unsigned int)v98);
      v170 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v97 + 16LL))(v97);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)0x8007000ELL);
    v74 = -2147024882;
  }
  v99 = retaddr;
  if ( v74 < 0 )
  {
LABEL_241:
    wil::details::in1diag3::FailFast_Hr(
      v99,
      (void *)0x187,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v74);
    __debugbreak();
  }
  v100 = v158;
  if ( v158 )
  {
    v158 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v100 + 16LL))(v100);
  }
  v101 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IContextualProcessor **))v95)(
           v95,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           &v158);
  if ( v101 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x188,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v101);
    __debugbreak();
  }
  v102 = ContextualProcessorManager::RegisterProcessor(v68, v158);
  if ( v102 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x189,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v102);
    goto LABEL_244;
  }
  v103 = v158;
  if ( v158 )
  {
    v158 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v103 + 16LL))(v103);
  }
  v176 = 0LL;
  (*(void (__fastcall **)(void *))(*(_QWORD *)v95 + 16LL))(v95);
  v104 = gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x1DDA1) == 0 )
    goto LABEL_137;
  v171 = 0LL;
  v159 = 0LL;
  v186 = this;
  v105 = Microsoft::WRL::Details::MakeAndInitialize<ActivationProcessor,ActivationProcessor,DWMInputRouter *>(
           &v171,
           &v186);
  v106 = retaddr;
  if ( v105 < 0 )
  {
LABEL_244:
    wil::details::in1diag3::FailFast_Hr(
      v106,
      (void *)0x196,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v105);
    __debugbreak();
  }
  v107 = v159;
  if ( v159 )
  {
    v159 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v107 + 16LL))(v107);
  }
  v108 = v171;
  v109 = (**v171)(v171, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v159);
  if ( v109 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x197,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v109);
    __debugbreak();
  }
  v110 = ContextualProcessorManager::RegisterProcessor(v68, v159);
  if ( v110 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x198,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v110);
LABEL_247:
    wil::details::in1diag3::FailFast_Hr(
      v114,
      (void *)0x1A4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v113);
    goto LABEL_248;
  }
  v111 = v159;
  if ( v159 )
  {
    v159 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v111 + 16LL))(v111);
  }
  v171 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IContextualProcessor **)))(*v108)[2])(v108);
  v104 = gdwDeviceFamily;
LABEL_137:
  if ( ((1LL << v104) & 0x1C000) == 0 )
    goto LABEL_150;
  v172 = 0LL;
  v160 = 0LL;
  v112 = (char *)this + 8;
  v177 = (char *)this + 8;
  if ( this != (DWMInputRouter *)-8LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v112 + 8LL))((char *)this + 8);
  v113 = DragNDropProcessorLegacy::Create(&v177, &v172);
  v114 = retaddr;
  if ( v113 < 0 )
    goto LABEL_247;
  if ( this != (DWMInputRouter *)-8LL )
  {
    v177 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v112 + 16LL))((char *)this + 8);
  }
  v115 = v160;
  if ( v160 )
  {
    v160 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v115 + 16LL))(v115);
  }
  v116 = v172;
  v117 = (**v172)(v172, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v160);
  v118 = retaddr;
  if ( v117 < 0 )
  {
LABEL_248:
    wil::details::in1diag3::FailFast_Hr(
      v118,
      (void *)0x1A5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v117);
    __debugbreak();
  }
  v119 = ContextualProcessorManager::RegisterProcessor(v68, v160);
  if ( v119 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v119);
LABEL_250:
    wil::details::in1diag3::FailFast_Hr(
      v123,
      (void *)0x1B2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v122);
    goto LABEL_251;
  }
  v120 = v160;
  if ( v160 )
  {
    v160 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v120 + 16LL))(v120);
  }
  v172 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IContextualProcessor **)))(*v116)[2])(v116);
  v104 = gdwDeviceFamily;
LABEL_150:
  if ( ((1LL << v104) & 0x1C000) == 0 )
    goto LABEL_163;
  v173 = 0LL;
  v161 = 0LL;
  v121 = (char *)this + 8;
  v178 = (__int64)this + 8;
  if ( this != (DWMInputRouter *)-8LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v121 + 8LL))((char *)this + 8);
  v122 = DragNDropProcessor::Create(&v178, &v173);
  v123 = retaddr;
  if ( v122 < 0 )
    goto LABEL_250;
  if ( this != (DWMInputRouter *)-8LL )
  {
    v178 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v121 + 16LL))((char *)this + 8);
  }
  v124 = v161;
  if ( v161 )
  {
    v161 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v124 + 16LL))(v124);
  }
  v125 = v173;
  v126 = (*(__int64 (__fastcall **)(LARGE_INTEGER *, GUID *, struct IContextualProcessor **))v173->QuadPart)(
           v173,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           &v161);
  v127 = retaddr;
  if ( v126 < 0 )
  {
LABEL_251:
    wil::details::in1diag3::FailFast_Hr(
      v127,
      (void *)0x1B3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v126);
    __debugbreak();
  }
  v128 = ContextualProcessorManager::RegisterProcessor(v68, v161);
  if ( v128 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v128);
    goto LABEL_253;
  }
  v129 = v161;
  if ( v161 )
  {
    v161 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v129 + 16LL))(v129);
  }
  v173 = 0LL;
  (*(void (__fastcall **)(LARGE_INTEGER *))(v125->QuadPart + 16))(v125);
  v104 = gdwDeviceFamily;
LABEL_163:
  if ( ((1LL << v104) & 0x1C000) == 0 )
    goto LABEL_172;
  v174 = 0LL;
  v162 = 0LL;
  v130 = ComboButtonProcessor::Create(&v174);
  v131 = retaddr;
  if ( v130 < 0 )
  {
LABEL_253:
    wil::details::in1diag3::FailFast_Hr(
      v131,
      (void *)0x1C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v130);
    __debugbreak();
  }
  v132 = v162;
  if ( v162 )
  {
    v162 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v132 + 16LL))(v132);
  }
  v133 = v174;
  v134 = (**(__int64 (__fastcall ***)(struct ComboButtonProcessor *, GUID *, struct IContextualProcessor **))v174)(
           v174,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           &v162);
  if ( v134 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v134);
    __debugbreak();
  }
  v135 = ContextualProcessorManager::RegisterProcessor(v68, v162);
  if ( v135 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v135);
    goto LABEL_256;
  }
  v136 = v162;
  if ( v162 )
  {
    v162 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v136 + 16LL))(v136);
  }
  v174 = 0LL;
  (*(void (__fastcall **)(struct ComboButtonProcessor *))(*(_QWORD *)v133 + 16LL))(v133);
  v104 = gdwDeviceFamily;
LABEL_172:
  if ( ((1LL << v104) & 0x1DDA1) == 0 )
    goto LABEL_181;
  v175 = 0LL;
  v163 = 0LL;
  v137 = RawButtonProcessor::Create(&v175);
  v138 = retaddr;
  if ( v137 < 0 )
  {
LABEL_256:
    wil::details::in1diag3::FailFast_Hr(
      v138,
      (void *)0x1CE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v137);
    __debugbreak();
  }
  v139 = v163;
  if ( v163 )
  {
    v163 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v139 + 16LL))(v139);
  }
  v140 = v175;
  v141 = (**(__int64 (__fastcall ***)(struct RawButtonProcessor *, GUID *, struct IContextualProcessor **))v175)(
           v175,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           &v163);
  if ( v141 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v141);
    __debugbreak();
  }
  v142 = ContextualProcessorManager::RegisterProcessor(v68, v163);
  if ( v142 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v142);
    goto LABEL_259;
  }
  v143 = v163;
  if ( v163 )
  {
    v163 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v143 + 16LL))(v143);
  }
  v175 = 0LL;
  (*(void (__fastcall **)(struct RawButtonProcessor *))(*(_QWORD *)v140 + 16LL))(v140);
LABEL_181:
  v144 = 0LL;
  v187 = 0LL;
  v164 = 0LL;
  v145 = malloc(0x18uLL);
  v146 = v145;
  if ( v145 )
  {
    *v145 = 0LL;
    v145[2] = 0LL;
    v145[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v145 + 4) = 1;
    *v145 = &InputServiceProcessor::`vftable'{for `IContextualProcessor'};
    v145[1] = &InputServiceProcessor::`vftable'{for `RefCountedObject'};
  }
  else
  {
    v146 = 0LL;
  }
  if ( v146 )
  {
    if ( (unsigned __int8)IsPreloadKeyboardLayoutsPresent() )
      PreloadKeyboardLayouts();
    v144 = v146;
    v187 = v146;
    v36 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib\\in"
               "putserviceprocessor.cpp",
      (const char *)0x8007000ELL);
  }
  v147 = retaddr;
  if ( v36 < 0 )
  {
LABEL_259:
    wil::details::in1diag3::FailFast_Hr(
      v147,
      (void *)0x1DB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v36);
    __debugbreak();
  }
  v148 = v164;
  if ( v164 )
  {
    v164 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v148 + 16LL))(v148);
  }
  v149 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IContextualProcessor **))*v144)(
           v144,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           &v164);
  if ( v149 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v149);
    JUMPOUT(0x180088E72LL);
  }
  v150 = ContextualProcessorManager::RegisterProcessor(v68, v164);
  if ( v150 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v150);
    goto LABEL_207;
  }
  v151 = v164;
  if ( v164 )
  {
    v164 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v151 + 16LL))(v151);
  }
  (*(void (__fastcall **)(_QWORD *))(*v144 + 16LL))(v144);
  v152 = (ContextualProcessorManager *)*((_QWORD *)this + 38);
  if ( v152 != v68 )
  {
    if ( v68 )
    {
      (*(void (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)v68 + 8LL))(v68);
      v152 = (ContextualProcessorManager *)*((_QWORD *)this + 38);
    }
    *((_QWORD *)this + 38) = v68;
    if ( v152 )
      (*(void (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)v152 + 16LL))(v152);
  }
  if ( v68 )
    (*(void (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)v68 + 16LL))(v68);
  v153 = ISMStatics::GetBamoServerConnection();
  v154 = (char *)operator new(0x40uLL);
  v197 = (struct IContextualProcessor *)v154;
  v191 = this;
  (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
  v196 = 1;
  *(_QWORD *)v154 = &BamoTestCommandsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v154 + 1) = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  v198 = (struct IContextualProcessor *)(v154 + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v154 + 16), v153);
  *((_QWORD *)v154 + 2) = &BamoImpl::BamoTestCommandsPrincipalImpl::`vftable';
  *(_QWORD *)v154 = &TestCommands::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v154 + 1) = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  *((_QWORD *)v154 + 7) = this;
  (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)v153 + 19) + 8LL) + 144LL))(
    *((_QWORD *)v153 + 19) + 8LL,
    v154);
  (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 16LL))(this);
  v155 = v165;
  if ( v165 )
  {
    v165 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v155 + 16LL))(v155);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v179);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v181);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v183);
  return 0LL;
}
