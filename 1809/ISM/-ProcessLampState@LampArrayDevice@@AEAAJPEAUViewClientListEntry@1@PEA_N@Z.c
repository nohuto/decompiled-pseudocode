/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180074688 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180008808 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@QEAAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180008B78 (-deallocate@-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@W4_.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18001E60C (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??1?$ComPtr@VHidLampMultiUpdateReportBuilder@@@WRL@Microsoft@@QEAA@XZ @ 0x180075FE4 (--1-$ComPtr@VHidLampMultiUpdateReportBuilder@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Reallocate_exactly@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAX_K@Z @ 0x180076040 (-_Reallocate_exactly@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAX.c)
 *     ?_Reallocate_exactly@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18007614C (-_Reallocate_exactly@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800762A4 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180076570 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18007A63C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x18007AD50 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x18007C160 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x18007D928 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x18007E084 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x18007E0F0 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     sqrt @ 0x18012BF30 (sqrt.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LampArrayDevice::ProcessLampState(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2,
        struct Windows::UI::Color *a3,
        char *a4)
{
  HidLampMultiUpdateReportBuilder *v5; // rbx
  unsigned int v6; // eax
  GUID *v7; // r9
  char v8; // dl
  char v9; // al
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // r12d
  int v13; // edx
  __int64 v14; // r12
  double v15; // xmm9_8
  unsigned __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // r13
  double v19; // xmm7_8
  bool v20; // al
  char *v21; // r14
  _BYTE *v22; // r12
  char *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // ebx
  double v27; // xmm1_8
  unsigned __int8 v28; // dl
  int v29; // r14d
  int v30; // esi
  int v31; // edi
  double v32; // xmm0_8
  double v33; // xmm1_8
  double v34; // xmm4_8
  double *v35; // rax
  int v36; // eax
  unsigned int v37; // ebx
  double v38; // xmm1_8
  unsigned __int8 v39; // r12
  int v40; // esi
  int v41; // edi
  double v42; // xmm0_8
  double v43; // xmm1_8
  double v44; // xmm4_8
  double *v45; // rax
  void *v46; // r8
  char *v47; // rcx
  const struct std::nothrow_t *v48; // rdx
  _BYTE *v49; // rax
  unsigned int v50; // r12d
  int updated; // eax
  unsigned int v52; // edi
  __int64 v53; // rsi
  char *v54; // rax
  char *v55; // rdi
  volatile signed __int32 *v56; // rbx
  int v57; // esi
  void *v58; // rax
  void *v59; // rsi
  unsigned int v60; // r13d
  const struct std::nothrow_t *v61; // rdx
  __int64 v62; // r8
  HidLampMultiUpdateReportBuilder *v63; // rdi
  unsigned __int64 v64; // r9
  char v65; // cl
  unsigned int v66; // eax
  int v67; // eax
  int v68; // eax
  const struct std::nothrow_t *v69; // rdx
  unsigned int v70; // r8d
  unsigned int i; // edx
  int v72; // ecx
  __int64 v73; // rax
  int v74; // ecx
  int v75; // eax
  const struct std::nothrow_t *v76; // rdx
  int v77; // eax
  const struct std::nothrow_t *v78; // rdx
  LampArrayDevice *v79; // rdi
  __int64 v80; // rcx
  int v81; // eax
  unsigned int v82; // edi
  char v83; // [rsp+30h] [rbp-1C8h]
  char v84; // [rsp+31h] [rbp-1C7h]
  _DWORD v85[5]; // [rsp+34h] [rbp-1C4h] BYREF
  char *v86; // [rsp+48h] [rbp-1B0h]
  unsigned __int8 v87; // [rsp+50h] [rbp-1A8h] BYREF
  char v88; // [rsp+51h] [rbp-1A7h]
  char v89; // [rsp+52h] [rbp-1A6h]
  char v90; // [rsp+53h] [rbp-1A5h]
  unsigned __int8 v91; // [rsp+54h] [rbp-1A4h]
  HidLampMultiUpdateReportBuilder *v92; // [rsp+58h] [rbp-1A0h] BYREF
  int v93; // [rsp+60h] [rbp-198h]
  int v94; // [rsp+64h] [rbp-194h]
  void *v95[2]; // [rsp+68h] [rbp-190h] BYREF
  char *v96; // [rsp+78h] [rbp-180h]
  unsigned int v97; // [rsp+80h] [rbp-178h]
  int v98; // [rsp+84h] [rbp-174h] BYREF
  char *v99; // [rsp+88h] [rbp-170h] BYREF
  char *v100; // [rsp+90h] [rbp-168h]
  LampArrayDevice *v101; // [rsp+98h] [rbp-160h]
  unsigned int v102; // [rsp+A0h] [rbp-158h] BYREF
  unsigned __int64 v103; // [rsp+A4h] [rbp-154h] BYREF
  char *v104; // [rsp+B0h] [rbp-148h] BYREF
  struct Windows::UI::Color *v105; // [rsp+B8h] [rbp-140h]
  __int64 v106; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-130h]
  __int64 v108; // [rsp+D0h] [rbp-128h]
  double v109; // [rsp+D8h] [rbp-120h] BYREF
  double v110; // [rsp+E0h] [rbp-118h] BYREF
  double v111; // [rsp+E8h] [rbp-110h] BYREF
  double v112; // [rsp+F0h] [rbp-108h] BYREF
  __int128 v113; // [rsp+F8h] [rbp-100h]
  __int128 v114; // [rsp+108h] [rbp-F0h]
  __int128 v115; // [rsp+118h] [rbp-E0h]
  __int64 v116; // [rsp+128h] [rbp-D0h]
  __int64 v117; // [rsp+130h] [rbp-C8h]
  __int64 v118; // [rsp+138h] [rbp-C0h]
  __int64 v119; // [rsp+140h] [rbp-B8h]
  __int64 v120; // [rsp+148h] [rbp-B0h]
  int v121; // [rsp+150h] [rbp-A8h]
  char v122; // [rsp+154h] [rbp-A4h]
  GUID ActivityId; // [rsp+158h] [rbp-A0h] BYREF
  GUID v124; // [rsp+168h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+178h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v119 = -2LL;
  v105 = a3;
  v5 = this;
  v101 = this;
  *(_BYTE *)a3 = 0;
  v121 = 0;
  v122 = 0;
  v6 = hProvider;
  if ( (unsigned int)hProvider <= 5 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, &ActivityId);
    v124 = ActivityId;
    EventActivityIdControl(4u, &v124);
    v122 = 1;
    v6 = hProvider;
  }
  v121 = 1;
  if ( v6 > 5 )
  {
    if ( v122 && (v124.Data1 || *(_DWORD *)&v124.Data2 || *(_DWORD *)v124.Data4 || *(_DWORD *)&v124.Data4[4]) )
      v7 = &v124;
    else
      v7 = 0LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180168653, &ActivityId, v7, 2u, &pData);
  }
  try
  {
    v8 = *((_BYTE *)v5 + 144);
    v84 = v8;
    if ( !a2 || !*(_DWORD *)(*((_QWORD *)a2 + 4) + 548LL) )
    {
      if ( v8 && (v81 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)v5 + 3), 1), v82 = v81, v81 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          (const char *)(unsigned int)v81);
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
        return v82;
      }
      else
      {
        *((_BYTE *)v5 + 144) = 0;
        if ( v121 == 1 )
        {
          if ( v122 )
            EventActivityIdControl(4u, &v124);
          v121 = 2;
          _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
        }
        return 0LL;
      }
    }
    v9 = *(_BYTE *)(*((_QWORD *)a2 + 4) + 544LL);
    *(_BYTE *)(*((_QWORD *)a2 + 4) + 544LL) = 0;
    if ( v9 )
    {
      if ( v8 )
        goto LABEL_29;
    }
    else if ( v8 )
    {
      if ( v121 == 1 )
      {
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
      }
      return 0LL;
    }
    v11 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)v5 + 3), 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v11);
      if ( v121 == 1 )
      {
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
      }
      return v12;
    }
LABEL_29:
    v93 = *(_DWORD *)(*((_QWORD *)v5 + 3) + 544LL);
    v13 = v93;
    v14 = *((_QWORD *)a2 + 4);
    v15 = *(double *)(v14 + 640);
    *(_OWORD *)v95 = 0LL;
    v96 = 0LL;
    v16 = v93;
    if ( v93 )
    {
      v120 = 0x3FFFFFFFFFFFFFFFLL;
      v116 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v93 > 0x3FFFFFFFFFFFFFFFLL )
        std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
      std::vector<Windows::UI::Color>::_Reallocate_exactly(v95);
      v13 = v93;
    }
    v17 = 0;
    a4 = (char *)v95[1];
    while ( v17 < v13 )
    {
      a3 = (struct Windows::UI::Color *)(v14 + 36 * (*(int *)(v14 + 520) + 18LL) + 4LL * v17);
      if ( v96 == a4 )
      {
        std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(v95, a4, a3);
        a4 = (char *)v95[1];
      }
      else
      {
        *(_DWORD *)a4 = *(_DWORD *)a3;
        a4 = (char *)v95[1] + 4;
        v95[1] = (char *)v95[1] + 4;
      }
      ++v17;
      v13 = v16;
    }
    v18 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 568LL);
    *(_OWORD *)&v85[1] = 0LL;
    v86 = 0LL;
    if ( v16 )
    {
      v117 = 0x1FFFFFFFFFFFFFFFLL;
      v118 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
      std::vector<LampUpdateState>::_Reallocate_exactly(&v85[1], v16, a3, a4);
      v13 = v93;
    }
    v19 = *((double *)v5 + 19);
    v20 = v15 != v19;
    v21 = 0LL;
    v22 = v95[0];
    v23 = *(char **)&v85[3];
    v100 = *(char **)&v85[3];
    while ( 1 )
    {
      v94 = (int)v21;
      if ( (int)v21 >= v13 )
        break;
      v24 = (int)v21;
      v107 = (int)v21;
      v25 = *((_QWORD *)v5 + 20);
      v108 = v25;
      if ( !v84
        || v20
        || *(_BYTE *)(v25 + 4LL * (int)v21) != v22[4 * (int)v21]
        || *(_BYTE *)(v25 + 4LL * (int)v21 + 1) != v22[4 * (int)v21 + 1]
        || *(_BYTE *)(v25 + 4LL * (int)v21 + 2) != v22[4 * (int)v21 + 2]
        || *(_BYTE *)(v25 + 4LL * (int)v21 + 3) != v22[4 * (int)v21 + 3] )
      {
        LOBYTE(v97) = (int)((double)(unsigned __int8)v22[4 * (int)v21] * v15);
        BYTE1(v97) = (int)((double)(unsigned __int8)v22[4 * (int)v21 + 1] * v15);
        BYTE2(v97) = (int)((double)(unsigned __int8)v22[4 * (int)v21 + 2] * v15);
        HIBYTE(v97) = (int)((double)(unsigned __int8)v22[4 * (int)v21 + 3] * v15);
        v26 = v97;
        v102 = v97;
        if ( *(_DWORD *)(v18 + 28) )
        {
          NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
            (const struct Windows::UI::Color *)&v102,
            (const struct LampAttributes *)v18,
            a3,
            (struct LampColor *)v85);
          v22 = v95[0];
          v23 = *(char **)&v85[3];
          v100 = *(char **)&v85[3];
          LOBYTE(v36) = HIBYTE(v85[0]);
          LOBYTE(a4) = BYTE2(v85[0]);
          LOBYTE(a3) = BYTE1(v85[0]);
          v28 = v85[0];
        }
        else
        {
          v27 = 0.0;
          v28 = *(_BYTE *)(v18 + 24);
          v91 = v28;
          if ( (v28 || *(_BYTE *)(v18 + 25) || *(_BYTE *)(v18 + 26)) && *(_BYTE *)(v18 + 27) )
          {
            v29 = v28;
            v30 = *(unsigned __int8 *)(v18 + 25);
            v31 = *(unsigned __int8 *)(v18 + 26);
            v32 = sqrt((double)(v30 * v30) + (double)(v29 * v29) + (double)(v31 * v31));
            v111 = v32;
            v33 = 1.0 / (double)*(unsigned __int8 *)(v18 + 27) * v32;
            if ( v33 <= 0.0 )
              v34 = 0.0;
            else
              v34 = ((double)BYTE2(v26) * ((double)v30 / v32)
                   + (double)BYTE1(v26) * ((double)v29 / v32)
                   + (double)HIBYTE(v26) * ((double)v31 / v32))
                  / v33;
            v112 = (double)(int)(v34 + 0.5) * v33;
            v35 = &v111;
            if ( v112 <= v32 )
              v35 = &v112;
            v27 = *v35 / v32;
            v24 = v107;
            v23 = v100;
            v25 = v108;
            v28 = v91;
            LODWORD(v21) = v94;
          }
          LOBYTE(v85[0]) = v28;
          LOBYTE(a3) = *(_BYTE *)(v18 + 25);
          BYTE1(v85[0]) = (_BYTE)a3;
          LOBYTE(a4) = *(_BYTE *)(v18 + 26);
          BYTE2(v85[0]) = (_BYTE)a4;
          v36 = (int)((double)*(unsigned __int8 *)(v18 + 27) * v27);
          HIBYTE(v85[0]) = v36;
        }
        if ( v84 )
        {
          if ( v28 != v87 || (_BYTE)a3 != v88 || (_BYTE)a4 != v89 || (_BYTE)v36 != v90 )
            goto LABEL_80;
        }
        else
        {
          LOBYTE(v92) = (int)((double)*(unsigned __int8 *)(v25 + 4 * v24) * v19);
          BYTE1(v92) = (int)((double)*(unsigned __int8 *)(v25 + 4 * v24 + 1) * v19);
          BYTE2(v92) = (int)((double)*(unsigned __int8 *)(v25 + 4 * v24 + 2) * v19);
          BYTE3(v92) = (int)((double)*(unsigned __int8 *)(v25 + 4 * v24 + 3) * v19);
          v37 = (unsigned int)v92;
          v98 = (int)v92;
          if ( *(_DWORD *)(v18 + 28) )
          {
            NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
              (const struct Windows::UI::Color *)&v98,
              (const struct LampAttributes *)v18,
              a3,
              (struct LampColor *)&v87);
            v23 = *(char **)&v85[3];
          }
          else
          {
            v38 = 0.0;
            v39 = *(_BYTE *)(v18 + 24);
            if ( (v39 || *(_BYTE *)(v18 + 25) || *(_BYTE *)(v18 + 26)) && *(_BYTE *)(v18 + 27) )
            {
              v40 = *(unsigned __int8 *)(v18 + 25);
              v41 = *(unsigned __int8 *)(v18 + 26);
              v42 = sqrt((double)(v40 * v40) + (double)(v39 * v39) + (double)(v41 * v41));
              v109 = v42;
              v43 = 1.0 / (double)*(unsigned __int8 *)(v18 + 27) * v42;
              if ( v43 <= 0.0 )
                v44 = 0.0;
              else
                v44 = ((double)BYTE2(v37) * ((double)v40 / v42)
                     + (double)BYTE1(v37) * ((double)v39 / v42)
                     + (double)HIBYTE(v37) * ((double)v41 / v42))
                    / v43;
              v110 = (double)(int)(v44 + 0.5) * v43;
              v45 = &v109;
              if ( v110 <= v42 )
                v45 = &v110;
              v38 = *v45 / v42;
              v23 = v100;
            }
            v87 = v39;
            v88 = *(_BYTE *)(v18 + 25);
            v89 = *(_BYTE *)(v18 + 26);
            v90 = (int)((double)*(unsigned __int8 *)(v18 + 27) * v38);
            LODWORD(v21) = v94;
          }
LABEL_80:
          v103 = __PAIR64__(v85[0], (unsigned int)v21);
          if ( v86 == v23 )
          {
            std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(&v85[1], v23, &v103);
            v23 = *(char **)&v85[3];
          }
          else
          {
            *(_QWORD *)v23 = v103;
            v23 = (char *)(*(_QWORD *)&v85[3] + 8LL);
            *(_QWORD *)&v85[3] += 8LL;
          }
          v100 = v23;
          v22 = v95[0];
        }
        v5 = v101;
        v13 = v93;
      }
      v21 = (char *)(unsigned int)((_DWORD)v21 + 1);
      v20 = v15 != v19;
    }
    v46 = *(void **)&v85[1];
    v47 = &v23[-*(_QWORD *)&v85[1]];
    if ( (unsigned __int64)v47 < 8 )
    {
      if ( !*(_QWORD *)&v85[1] )
        goto LABEL_91;
      v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (unsigned __int64)v48 < 0x1000
        || (v48 = (const struct std::nothrow_t *)((char *)v48 + 39),
            v46 = *(void **)(*(_QWORD *)&v85[1] - 8LL),
            (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v46 - 8LL) <= 0x1F) )
      {
        operator delete(v46, v48);
        *(_OWORD *)&v85[1] = 0LL;
        v86 = 0LL;
        v22 = v95[0];
LABEL_91:
        if ( !v22 )
        {
LABEL_95:
          if ( v121 == 1 )
          {
            if ( v122 )
              EventActivityIdControl(4u, &v124);
            v121 = 2;
            _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
          }
          return 0LL;
        }
        v48 = (const struct std::nothrow_t *)((v96 - v22) & 0xFFFFFFFFFFFFFFFCuLL);
        v49 = v22;
        if ( (unsigned __int64)v48 < 0x1000
          || (v48 = (const struct std::nothrow_t *)((char *)v48 + 39),
              v22 = (_BYTE *)*((_QWORD *)v22 - 1),
              (unsigned __int64)(v49 - v22 - 8) <= 0x1F) )
        {
          operator delete(v22, v48);
          *(_OWORD *)v95 = 0LL;
          v96 = 0LL;
          goto LABEL_95;
        }
      }
LABEL_219:
      _o__invalid_parameter_noinfo_noreturn(v47, v48);
LABEL_220:
      operator delete(v47, v48);
      *(_OWORD *)&v85[1] = 0LL;
      v86 = v21;
      goto LABEL_221;
    }
    v21 = 0LL;
    v50 = 0;
    v92 = 0LL;
    updated = HidLampArrayDevice::CreateMultiUpdateReportBuilder(*((HidLampArrayDevice **)v5 + 3), &v92);
    v52 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)updated);
      v5 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
        {
          *((_DWORD *)v5 + 2) = 1;
          (*(void (__fastcall **)(HidLampMultiUpdateReportBuilder *))(*(_QWORD *)v5 + 32LL))(v5);
          *((_DWORD *)v5 + 2) = 0;
          (*(void (__fastcall **)(HidLampMultiUpdateReportBuilder *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
        }
      }
      v47 = *(char **)&v85[1];
      if ( *(_QWORD *)&v85[1] )
      {
        v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (unsigned __int64)v48 >= 0x1000 )
        {
          v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
          v47 = *(char **)(*(_QWORD *)&v85[1] - 8LL);
          if ( (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v47 - 8LL) > 0x1F )
            goto LABEL_219;
        }
        operator delete(v47, v48);
        *(_OWORD *)&v85[1] = 0LL;
        v86 = 0LL;
      }
      v47 = (char *)v95[0];
      if ( v95[0] )
      {
        v48 = (const struct std::nothrow_t *)((v96 - (char *)v95[0]) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (unsigned __int64)v48 >= 0x1000 )
        {
          v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
          v47 = (char *)*((_QWORD *)v95[0] - 1);
          if ( (unsigned __int64)((char *)v95[0] - (char *)v47 - 8) > 0x1F )
            goto LABEL_219;
        }
        operator delete(v47, v48);
        *(_OWORD *)v95 = 0LL;
        v96 = 0LL;
      }
      if ( v121 == 1 )
      {
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
      }
      return v52;
    }
    v5 = 0LL;
    v99 = 0LL;
    v53 = *((_QWORD *)v101 + 3);
    v106 = 0LL;
    v104 = 0LL;
    v54 = (char *)malloc(0x30uLL);
    v55 = v54;
    if ( v54 )
    {
      memset_0(v54, 0, 0x30uLL);
      *(_QWORD *)v55 = &RefCountedObject::`vftable';
      *((_DWORD *)v55 + 2) = 1;
      *(_QWORD *)v55 = &HidLampRangeUpdateReportBuilder::`vftable';
      v55[16] = 0;
      v113 = 0uLL;
      *(_OWORD *)(v55 + 20) = 0uLL;
      *((_QWORD *)v55 + 5) = 0LL;
      v104 = v55;
      if ( v53 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v53 + 8), 1u);
        v56 = (volatile signed __int32 *)*((_QWORD *)v55 + 5);
        *((_QWORD *)v55 + 5) = v53;
        if ( v56 )
        {
          if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          {
            *((_DWORD *)v56 + 2) = 1;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 32LL))(v56);
            *((_DWORD *)v56 + 2) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v56 + 24LL))(v56, 1LL);
          }
        }
      }
      v114 = 0uLL;
      *(_OWORD *)(v55 + 20) = 0uLL;
      v55[16] = 0;
      v104 = 0LL;
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v104);
      v106 = 0LL;
      v5 = (HidLampMultiUpdateReportBuilder *)v55;
      v99 = v55;
      v57 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportbuilder.cpp",
        (const char *)0x8007000ELL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL);
      v57 = -2147024882;
    }
    Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v106);
    if ( v57 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v57);
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v99);
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v92);
      v47 = *(char **)&v85[1];
      if ( *(_QWORD *)&v85[1] )
      {
        v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (unsigned __int64)v48 >= 0x1000 )
        {
          v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
          v47 = *(char **)(*(_QWORD *)&v85[1] - 8LL);
          if ( (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v47 - 8LL) > 0x1F )
            goto LABEL_219;
        }
        operator delete(v47, v48);
        *(_OWORD *)&v85[1] = 0LL;
        v86 = 0LL;
      }
      std::vector<Windows::UI::Color>::_Tidy((__int64)v95);
      if ( v121 == 1 )
      {
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
      }
      return (unsigned int)v57;
    }
    v58 = operator new[](
            (__int64)(*(_QWORD *)&v85[3] - *(_QWORD *)&v85[1]) >> 3,
            (const struct std::nothrow_t *)&std::nothrow);
    v59 = v58;
    if ( !v58 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)0x8007000ELL);
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v99);
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v92);
      v47 = *(char **)&v85[1];
      if ( *(_QWORD *)&v85[1] )
      {
        v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (unsigned __int64)v48 >= 0x1000 )
        {
          v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
          v47 = *(char **)(*(_QWORD *)&v85[1] - 8LL);
          if ( (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v47 - 8LL) > 0x1F )
            goto LABEL_219;
        }
        operator delete(v47, v48);
        *(_OWORD *)&v85[1] = 0LL;
        v86 = 0LL;
      }
      std::vector<Windows::UI::Color>::_Tidy((__int64)v95);
      if ( v121 == 1 )
      {
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
      }
      return 2147942414LL;
    }
    memset_0(v58, 0, (__int64)(*(_QWORD *)&v85[3] - *(_QWORD *)&v85[1]) >> 3);
    v60 = 0;
    v61 = *(const struct std::nothrow_t **)&v85[3];
    v62 = *(_QWORD *)&v85[1];
    v63 = v92;
    while ( 2 )
    {
      v64 = ((__int64)v61 - v62) >> 3;
      if ( v60 < v64 )
      {
        if ( *((_BYTE *)v5 + 16) )
        {
          if ( *(_DWORD *)(v62 + 8LL * v60) != *((_DWORD *)v5 + 7) + 1
            || *(_BYTE *)(v62 + 8LL * v60 + 4) != *((_BYTE *)v5 + 32)
            || *(_BYTE *)(v62 + 8LL * v60 + 5) != *((_BYTE *)v5 + 33)
            || *(_BYTE *)(v62 + 8LL * v60 + 6) != *((_BYTE *)v5 + 34)
            || *(_BYTE *)(v62 + 8LL * v60 + 7) != *((_BYTE *)v5 + 35) )
          {
            v21 = 0LL;
            v83 = 0;
            goto LABEL_156;
          }
          v21 = 0LL;
          ++*((_DWORD *)v5 + 7);
        }
        else
        {
          *((_BYTE *)v5 + 32) = *(_BYTE *)(v62 + 8LL * v60 + 4);
          *((_BYTE *)v5 + 33) = *(_BYTE *)(v62 + 8LL * v60 + 5);
          *((_BYTE *)v5 + 34) = *(_BYTE *)(v62 + 8LL * v60 + 6);
          *((_BYTE *)v5 + 35) = *(_BYTE *)(v62 + 8LL * v60 + 7);
          *((_DWORD *)v5 + 6) = *(_DWORD *)(v62 + 8LL * v60);
          *((_DWORD *)v5 + 7) = *(_DWORD *)(v62 + 8LL * v60);
          *((_BYTE *)v5 + 16) = 1;
        }
        v61 = *(const struct std::nothrow_t **)&v85[3];
        v62 = *(_QWORD *)&v85[1];
        v64 = (__int64)(*(_QWORD *)&v85[3] - *(_QWORD *)&v85[1]) >> 3;
        v83 = 1;
        if ( v60 == v64 - 1 )
        {
LABEL_156:
          v65 = *((_BYTE *)v5 + 16);
          if ( v65 )
            v66 = *((_DWORD *)v5 + 7) - *((_DWORD *)v5 + 6) + 1;
          else
            v66 = 0;
          if ( v66 >= *((_DWORD *)v63 + 4) )
          {
            if ( v65 )
              v67 = *((_DWORD *)v5 + 7) - *((_DWORD *)v5 + 6) + 1;
            else
              v67 = 0;
            v50 += v67;
            if ( v50 >= v64 )
              *((_DWORD *)v5 + 5) |= 1u;
            *(_BYTE *)v105 = 1;
            v68 = HidLampArrayDevice::SendLampRangeUpdateReport(
                    *((HidLampArrayDevice **)v5 + 5),
                    (HidLampMultiUpdateReportBuilder *)((char *)v5 + 20));
            v21 = (char *)(unsigned int)v68;
            if ( v68 >= 0 )
              v21 = 0LL;
            else
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x77,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdate"
                         "reportbuilder.cpp",
                (const char *)(unsigned int)v68);
            if ( (int)v21 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1E8,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                (const char *)(unsigned int)v21);
              if ( v59 )
                operator delete(v59, v69);
              Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v99);
              Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v92);
              v47 = *(char **)&v85[1];
              if ( *(_QWORD *)&v85[1] )
              {
                v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
                if ( (unsigned __int64)v48 >= 0x1000 )
                {
                  v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
                  v47 = *(char **)(*(_QWORD *)&v85[1] - 8LL);
                  if ( (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v47 - 8LL) > 0x1F )
                    goto LABEL_219;
                }
                operator delete(v47, v48);
                *(_OWORD *)&v85[1] = 0LL;
                v86 = 0LL;
              }
              std::vector<Windows::UI::Color>::_Tidy((__int64)v95);
              if ( v121 == 1 )
              {
                if ( v122 )
                  EventActivityIdControl(4u, &v124);
                v121 = 2;
                _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
              }
              return (unsigned int)v21;
            }
            v70 = v60;
            v21 = 0LL;
            if ( !v83 )
              v70 = v60 - 1;
            for ( i = v70; ; --i )
            {
              v72 = *((_BYTE *)v5 + 16) ? *((_DWORD *)v5 + 7) - *((_DWORD *)v5 + 6) + 1 : 0;
              if ( i <= v70 - v72 )
                break;
              *((_BYTE *)v59 + i) = 1;
            }
          }
          v115 = 0uLL;
          *(_OWORD *)((char *)v5 + 20) = 0uLL;
          *((_BYTE *)v5 + 16) = 0;
          v61 = *(const struct std::nothrow_t **)&v85[3];
          v62 = *(_QWORD *)&v85[1];
        }
        ++v60;
        continue;
      }
      break;
    }
    if ( v50 >= (unsigned __int64)(((__int64)v61 - v62) >> 3) )
    {
LABEL_226:
      v79 = v101;
      *((double *)v101 + 19) = v15;
      if ( (void **)((char *)v79 + 160) != v95 )
      {
        std::vector<Windows::UI::Color>::_Tidy((__int64)v79 + 160);
        *((void **)v79 + 20) = v95[0];
        *((void **)v79 + 21) = v95[1];
        *((_QWORD *)v79 + 22) = v96;
        *(_OWORD *)v95 = 0LL;
        v96 = 0LL;
      }
      *((_BYTE *)v79 + 144) = 1;
      if ( v59 )
        operator delete(v59, v61);
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v99);
      Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v92);
      if ( *(_QWORD *)&v85[1] )
      {
        std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
          v80,
          *(_QWORD **)&v85[1],
          (__int64)&v86[-*(_QWORD *)&v85[1]] >> 3);
        *(_OWORD *)&v85[1] = 0LL;
        v86 = 0LL;
      }
      std::vector<Windows::UI::Color>::_Tidy((__int64)v95);
      if ( v121 == 1 )
      {
        if ( v122 )
          EventActivityIdControl(4u, &v124);
        v121 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
      }
      return 0LL;
    }
    while ( (unsigned int)v21 < (unsigned __int64)(((__int64)v61 - v62) >> 3) )
    {
      if ( !*((_BYTE *)v59 + (unsigned int)v21) )
      {
        v73 = *((int *)v63 + 6);
        v74 = *((_DWORD *)v63 + 4);
        if ( (int)v73 < v74 )
        {
          *(_DWORD *)(*((_QWORD *)v63 + 4) + 4 * v73) = *(_DWORD *)(v62 + 8LL * (unsigned int)v21);
          *(_BYTE *)(*((int *)v63 + 6) + *((_QWORD *)v63 + 5)) = *(_BYTE *)(v62 + 8LL * (unsigned int)v21 + 4);
          *(_BYTE *)(*((int *)v63 + 6) + *((_QWORD *)v63 + 6)) = *(_BYTE *)(v62 + 8LL * (unsigned int)v21 + 5);
          *(_BYTE *)(*((int *)v63 + 6) + *((_QWORD *)v63 + 7)) = *(_BYTE *)(v62 + 8LL * (unsigned int)v21 + 6);
          *(_BYTE *)((int)(*((_DWORD *)v63 + 6))++ + *((_QWORD *)v63 + 8)) = *(_BYTE *)(v62 + 8LL * (unsigned int)v21 + 7);
          LODWORD(v73) = *((_DWORD *)v63 + 6);
          v74 = *((_DWORD *)v63 + 4);
          v61 = *(const struct std::nothrow_t **)&v85[3];
          v62 = *(_QWORD *)&v85[1];
        }
        ++v50;
        if ( (int)v73 >= v74 )
        {
          if ( v50 >= (unsigned __int64)(((__int64)v61 - v62) >> 3) )
            *((_DWORD *)v63 + 7) |= 1u;
          *(_BYTE *)v105 = 1;
          v75 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v63);
          LODWORD(v5) = v75;
          if ( v75 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x20C,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)(unsigned int)v75);
            if ( v59 )
              operator delete(v59, v76);
            Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v99);
            Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v92);
            v47 = *(char **)&v85[1];
            if ( *(_QWORD *)&v85[1] )
            {
              v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
              if ( (unsigned __int64)v48 >= 0x1000 )
              {
                v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
                v47 = *(char **)(*(_QWORD *)&v85[1] - 8LL);
                if ( (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v47 - 8LL) > 0x1F )
                  goto LABEL_219;
              }
              operator delete(v47, v48);
              *(_OWORD *)&v85[1] = 0LL;
              v86 = 0LL;
            }
            std::vector<Windows::UI::Color>::_Tidy((__int64)v95);
            if ( v121 == 1 )
            {
              if ( v122 )
                EventActivityIdControl(4u, &v124);
              v121 = 2;
              _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
            }
            return (unsigned int)v5;
          }
          HidLampMultiUpdateReportBuilder::Reset(v63);
          v61 = *(const struct std::nothrow_t **)&v85[3];
          v62 = *(_QWORD *)&v85[1];
        }
      }
      v21 = (char *)(unsigned int)((_DWORD)v21 + 1);
    }
    v21 = 0LL;
    if ( !*((_DWORD *)v63 + 6) )
      goto LABEL_226;
    *((_DWORD *)v63 + 7) |= 1u;
    *(_BYTE *)v105 = 1;
    v77 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v63);
    LODWORD(v5) = v77;
    if ( v77 >= 0 )
      goto LABEL_226;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v77);
    if ( v59 )
      operator delete(v59, v78);
    Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v99);
    Microsoft::WRL::ComPtr<HidLampMultiUpdateReportBuilder>::~ComPtr<HidLampMultiUpdateReportBuilder>(&v92);
    v47 = *(char **)&v85[1];
    if ( *(_QWORD *)&v85[1] )
    {
      v48 = (const struct std::nothrow_t *)((unsigned __int64)&v86[-*(_QWORD *)&v85[1]] & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (unsigned __int64)v48 < 0x1000 )
        goto LABEL_220;
      v48 = (const struct std::nothrow_t *)((char *)v48 + 39);
      v47 = *(char **)(*(_QWORD *)&v85[1] - 8LL);
      if ( (unsigned __int64)(*(_QWORD *)&v85[1] - (_QWORD)v47 - 8LL) <= 0x1F )
        goto LABEL_220;
      goto LABEL_219;
    }
LABEL_221:
    std::vector<Windows::UI::Color>::_Tidy((__int64)v95);
    if ( v121 == 1 )
    {
      if ( v122 != (_BYTE)v21 )
        EventActivityIdControl(4u, &v124);
      v121 = 2;
      _TlgWriteActivityAutoStop<0,5>(&hProvider, &ActivityId);
    }
    result = (unsigned int)v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x224,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                           a4);
  }
  return result;
}
