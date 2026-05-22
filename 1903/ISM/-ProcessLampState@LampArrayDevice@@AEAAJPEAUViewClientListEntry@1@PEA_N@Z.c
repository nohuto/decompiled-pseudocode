/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800AE894
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800AF964 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x1800298B0 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x1800356E4 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingP.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800ADE10 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800ADF40 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800AE1E0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??4?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AE40C (--4-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?reserve@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1800AFCF0 (-reserve@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z @ 0x1800AFD34 (-reserve@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1800AFD78 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvi.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800B35BC (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800B363C (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800B57A4 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800B5F4C (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800B60C0 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x1800B645C (-CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z.c)
 *     ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x1800B6584 (-CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ.c)
 *     ?IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800B659C (-IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800B65D8 (-SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ.c)
 *     ?IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800B6864 (-IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800B6A20 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x1800B6A8C (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LampArrayDevice::ProcessLampState(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2,
        bool *a3)
{
  unsigned int v5; // eax
  const GUID *v6; // rax
  __int32 v7; // eax
  bool v8; // zf
  char v9; // al
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rsi
  double v14; // xmm7_8
  __int64 v15; // r13
  unsigned int *v16; // r8
  _BYTE *v17; // rdx
  int v18; // edi
  struct Windows::UI::Color *v19; // r8
  double v20; // xmm6_8
  bool v21; // al
  signed int i; // r13d
  __int64 v23; // rsi
  unsigned int v24; // eax
  const char *v25; // r9
  int updated; // eax
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  void *v30; // rax
  void *v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  HidLampMultiUpdateReportBuilder *v34; // rdi
  HidLampRangeUpdateReportBuilder *v35; // rbx
  unsigned __int64 v36; // r13
  struct LampUpdateState *v37; // rdx
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // r13d
  const struct std::nothrow_t *v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // edx
  int v44; // r8d
  unsigned __int64 j; // rcx
  int v46; // r10d
  unsigned int v47; // r10d
  int v48; // eax
  unsigned int v49; // r13d
  const struct std::nothrow_t *v50; // rdx
  int v51; // eax
  unsigned int v52; // r13d
  const struct std::nothrow_t *v53; // rdx
  const struct std::nothrow_t *v54; // rdx
  int v55; // eax
  unsigned int v56; // edi
  unsigned int v57; // [rsp+34h] [rbp-1C4h] BYREF
  __int128 v58; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-1B0h]
  int v60; // [rsp+50h] [rbp-1A8h]
  int v61; // [rsp+54h] [rbp-1A4h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-1A0h] BYREF
  HidLampMultiUpdateReportBuilder *v63; // [rsp+60h] [rbp-198h] BYREF
  int v64; // [rsp+68h] [rbp-190h] BYREF
  HidLampRangeUpdateReportBuilder *v65; // [rsp+70h] [rbp-188h] BYREF
  __int128 v66; // [rsp+78h] [rbp-180h] BYREF
  _BYTE *v67; // [rsp+88h] [rbp-170h]
  int v68; // [rsp+90h] [rbp-168h] BYREF
  unsigned __int64 v69; // [rsp+98h] [rbp-160h] BYREF
  bool *v70; // [rsp+A0h] [rbp-158h]
  __int128 v71; // [rsp+A8h] [rbp-150h]
  __int64 v72; // [rsp+B8h] [rbp-140h]
  int v73; // [rsp+C0h] [rbp-138h] BYREF
  char v74; // [rsp+C4h] [rbp-134h]
  GUID pActivityId; // [rsp+C8h] [rbp-130h] BYREF
  GUID ActivityId; // [rsp+D8h] [rbp-120h] BYREF
  EVENT_DATA_DESCRIPTOR v77; // [rsp+F0h] [rbp-108h] BYREF
  const char *v78; // [rsp+110h] [rbp-E8h]
  __int64 v79; // [rsp+118h] [rbp-E0h]
  int *v80; // [rsp+120h] [rbp-D8h]
  __int64 v81; // [rsp+128h] [rbp-D0h]
  EVENT_DATA_DESCRIPTOR v82; // [rsp+130h] [rbp-C8h] BYREF
  const char *v83; // [rsp+150h] [rbp-A8h]
  __int64 v84; // [rsp+158h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v72 = -2LL;
  v70 = a3;
  *a3 = 0;
  v73 = 0;
  v74 = 0;
  _TlgActivityBase<TraceLoggingThreadActivity<&_TlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(&v73);
  v5 = hProvider;
  if ( (unsigned int)hProvider > 5 )
  {
    v6 = (const GUID *)_TlgActivityBase<TraceLoggingThreadActivity<&_TlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId((__int64)&v73);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D3D1, &pActivityId, v6, 2u, &pData);
    v5 = hProvider;
  }
  if ( a2 )
  {
    if ( v5 > 5 )
    {
      v78 = "Updating ViewClient";
      v79 = 20LL;
      v64 = *((_DWORD *)a2 + 6);
      v80 = &v64;
      v81 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D38E, 0LL, 0LL, 4u, &v77);
    }
  }
  else
  {
    if ( v5 <= 5 )
      goto LABEL_167;
    v83 = "Updating ViewClient";
    v84 = 20LL;
    TlgCreateWsz(&pDesc, L"null");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D3FE, 0LL, 0LL, 4u, &v82);
  }
  if ( !a2 || !*(_DWORD *)(*((_QWORD *)a2 + 4) + 4100LL) )
  {
LABEL_167:
    if ( *((_BYTE *)this + 144)
      && (v55 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 1), v56 = v55, v55 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v55);
      if ( v73 == 1 )
      {
        if ( v74 )
          EventActivityIdControl(4u, &ActivityId);
        v73 = 2;
        _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
      }
      return v56;
    }
    else
    {
      *((_BYTE *)this + 144) = 0;
      if ( v73 == 1 )
      {
        if ( v74 )
          EventActivityIdControl(4u, &ActivityId);
        v73 = 2;
        _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
      }
      return 0LL;
    }
  }
  v7 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4096LL), 0);
  v8 = v7 == 0;
  v9 = *((_BYTE *)this + 144);
  if ( v8 )
  {
    if ( v9 )
    {
      if ( v73 == 1 )
      {
        if ( v74 )
          EventActivityIdControl(4u, &ActivityId);
        v73 = 2;
        _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
      }
      return 0LL;
    }
LABEL_18:
    v11 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v11);
      if ( v73 == 1 )
      {
        if ( v74 )
          EventActivityIdControl(4u, &ActivityId);
        v73 = 2;
        _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
      }
      return v12;
    }
    goto LABEL_180;
  }
  if ( !v9 )
    goto LABEL_18;
LABEL_180:
  try
  {
    v64 = *(_DWORD *)(*((_QWORD *)this + 3) + 544LL);
    v13 = *((_QWORD *)a2 + 4);
    v14 = *(double *)(v13 + 4192);
    v66 = 0LL;
    v67 = 0LL;
    v15 = v64;
    std::vector<Windows::UI::Color>::reserve(&v66, v64);
    v18 = 0;
    v17 = (_BYTE *)*((_QWORD *)&v66 + 1);
    while ( v18 < (int)v15 )
    {
      v16 = (unsigned int *)(v13 + 4 * (v18 + 9LL * *(int *)(v13 + 524) + 1306));
      if ( v67 == v17 )
      {
        std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>((void **)&v66, v17, v16);
        v17 = (_BYTE *)*((_QWORD *)&v66 + 1);
      }
      else
      {
        *(_DWORD *)v17 = *v16;
        v17 = (_BYTE *)(*((_QWORD *)&v66 + 1) + 4LL);
        *((_QWORD *)&v66 + 1) += 4LL;
      }
      ++v18;
    }
    v65 = *(HidLampRangeUpdateReportBuilder **)(*((_QWORD *)this + 3) + 568LL);
    v58 = 0LL;
    v59 = 0LL;
    std::vector<LampUpdateState>::reserve(&v58, v15);
    v20 = *((double *)this + 19);
    v21 = v14 != v20;
    for ( i = 0; i < v64; ++i )
    {
      v23 = *((_QWORD *)this + 20);
      if ( !*((_BYTE *)this + 144)
        || v21
        || *(_BYTE *)(v23 + 4LL * i) != *(_BYTE *)(v66 + 4LL * i)
        || *(_BYTE *)(v23 + 4LL * i + 1) != *(_BYTE *)(v66 + 4LL * i + 1)
        || *(_BYTE *)(v23 + 4LL * i + 2) != *(_BYTE *)(v66 + 4LL * i + 2)
        || *(_BYTE *)(v23 + 4LL * i + 3) != *(_BYTE *)(v66 + 4LL * i + 3) )
      {
        LOBYTE(v63) = (int)((double)*(unsigned __int8 *)(v66 + 4LL * i) * v14);
        BYTE1(v63) = (int)((double)*(unsigned __int8 *)(v66 + 4LL * i + 1) * v14);
        BYTE2(v63) = (int)((double)*(unsigned __int8 *)(v66 + 4LL * i + 2) * v14);
        BYTE3(v63) = (int)((double)*(unsigned __int8 *)(v66 + 4LL * i + 3) * v14);
        v68 = (int)v63;
        if ( *((_DWORD *)v65 + 7) )
          NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
            (const struct Windows::UI::Color *)&v68,
            v65,
            v19,
            (struct LampColor *)&v62);
        else
          NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
            (const struct Windows::UI::Color *)&v68,
            v65,
            v19,
            (struct LampColor *)&v62);
        if ( !*((_BYTE *)this + 144) )
        {
          LOBYTE(v60) = (int)((double)*(unsigned __int8 *)(v23 + 4LL * i) * v20);
          BYTE1(v60) = (int)((double)*(unsigned __int8 *)(v23 + 4LL * i + 1) * v20);
          BYTE2(v60) = (int)((double)*(unsigned __int8 *)(v23 + 4LL * i + 2) * v20);
          HIBYTE(v60) = (int)((double)*(unsigned __int8 *)(v23 + 4LL * i + 3) * v20);
          v61 = v60;
          if ( *((_DWORD *)v65 + 7) )
            NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
              (const struct Windows::UI::Color *)&v61,
              v65,
              v19,
              (struct LampColor *)&v57);
          else
            NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
              (const struct Windows::UI::Color *)&v61,
              v65,
              v19,
              (struct LampColor *)&v57);
          if ( !*((_BYTE *)this + 144) )
          {
            v24 = v62;
LABEL_50:
            v69 = __PAIR64__(v24, i);
            if ( v59 == *((_QWORD *)&v58 + 1) )
            {
              std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(
                (void **)&v58,
                *((_BYTE **)&v58 + 1),
                (__int64 *)&v69);
            }
            else
            {
              **((_QWORD **)&v58 + 1) = v69;
              *((_QWORD *)&v58 + 1) += 8LL;
            }
            goto LABEL_53;
          }
        }
        v24 = v62;
        if ( (_BYTE)v62 != (_BYTE)v57
          || *(_WORD *)((char *)&v62 + 1) != *(_WORD *)((char *)&v57 + 1)
          || HIBYTE(v62) != HIBYTE(v57) )
        {
          goto LABEL_50;
        }
      }
LABEL_53:
      v21 = v14 != v20;
    }
    if ( *((_QWORD *)&v58 + 1) - (_QWORD)v58 >= 8uLL )
    {
      v57 = 0;
      v63 = 0LL;
      updated = HidLampArrayDevice::CreateMultiUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v63);
      v27 = updated;
      if ( updated >= 0 )
      {
        v65 = 0LL;
        v28 = HidLampArrayDevice::CreateRangeUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v65);
        v29 = v28;
        if ( v28 >= 0 )
        {
          v30 = operator new[](
                  (__int64)(*((_QWORD *)&v58 + 1) - v58) >> 3,
                  (const struct std::nothrow_t *)&std::nothrow);
          v31 = v30;
          if ( v30 )
          {
            memset_0(v30, 0, (__int64)(*((_QWORD *)&v58 + 1) - v58) >> 3);
            v32 = 0LL;
            v33 = v58;
            v34 = v63;
            v35 = v65;
            while ( 1 )
            {
              v60 = v32;
              v36 = (*((_QWORD *)&v58 + 1) - v33) >> 3;
              v69 = v32;
              if ( v32 >= v36 )
                break;
              if ( !HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(
                      v35,
                      (struct LampUpdateState *)(v33 + 8 * v32))
                || (HidLampRangeUpdateReportBuilder::IncludeInNextUpdate(v35, v37),
                    v33 = v58,
                    v36 = (__int64)(*((_QWORD *)&v58 + 1) - v58) >> 3,
                    v69 == v36 - 1) )
              {
                v38 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v35);
                if ( v38 >= *((_DWORD *)v34 + 4) )
                {
                  v57 += v38;
                  if ( v57 >= v36 )
                    *((_DWORD *)v35 + 5) |= 1u;
                  *v70 = 1;
                  v39 = HidLampRangeUpdateReportBuilder::SendLampStateUpdate(v35);
                  v40 = v39;
                  if ( v39 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1F8,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                      (const char *)(unsigned int)v39);
                    if ( v31 )
                      operator delete(v31, v41);
                    if ( v35 )
                      RefCountedObject::Release(v35);
                    RefCountedObject::Release(v34);
                    if ( (_QWORD)v58 )
                    {
                      std::_Deallocate<16,0>(
                        (void *)v58,
                        (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
                      v58 = 0LL;
                      v59 = 0LL;
                    }
                    std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
                    if ( v73 == 1 )
                    {
                      if ( v74 )
                        EventActivityIdControl(4u, &ActivityId);
                      v73 = 2;
                      _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
                    }
                    return v40;
                  }
                  while ( 1 )
                  {
                    v42 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v35);
                    if ( v43 <= v44 - v42 )
                      break;
                    *((_BYTE *)v31 + v43) = 1;
                  }
                }
                v71 = 0uLL;
                *(_OWORD *)((char *)v35 + 20) = 0uLL;
                *((_BYTE *)v35 + 16) = 0;
                v33 = v58;
              }
              v32 = (unsigned int)(v60 + 1);
            }
            if ( v57 >= (unsigned __int64)((*((_QWORD *)&v58 + 1) - v33) >> 3) )
            {
LABEL_154:
              *((double *)this + 19) = v14;
              std::vector<Windows::UI::Color>::operator=((_QWORD *)this + 20, &v66);
              *((_BYTE *)this + 144) = 1;
              if ( v31 )
                operator delete(v31, v54);
              if ( v35 )
                RefCountedObject::Release(v35);
              if ( v34 )
                RefCountedObject::Release(v34);
              if ( (_QWORD)v58 )
              {
                std::_Deallocate<16,0>(
                  (void *)v58,
                  (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
                v58 = 0LL;
                v59 = 0LL;
              }
              std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
              if ( v73 == 1 )
              {
                if ( v74 )
                  EventActivityIdControl(4u, &ActivityId);
                v73 = 2;
                _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
              }
              result = 0LL;
            }
            else
            {
              for ( j = 0LL; ; j = (unsigned int)(v61 + 1) )
              {
                v61 = j;
                if ( j >= (*((_QWORD *)&v58 + 1) - v33) >> 3 )
                  break;
                if ( !*((_BYTE *)v31 + j) )
                {
                  HidLampMultiUpdateReportBuilder::IncludeInNextUpdate(v34, (struct LampUpdateState *)(v33 + 8 * j));
                  v47 = v46 + 1;
                  v57 = v47;
                  if ( *((_DWORD *)v34 + 6) >= *((_DWORD *)v34 + 4) )
                  {
                    if ( v47 >= (unsigned __int64)((__int64)(*((_QWORD *)&v58 + 1) - v58) >> 3) )
                      *((_DWORD *)v34 + 7) |= 1u;
                    *v70 = 1;
                    v48 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v34);
                    v49 = v48;
                    if ( v48 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x21C,
                        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                        (const char *)(unsigned int)v48);
                      if ( v31 )
                        operator delete(v31, v50);
                      if ( v35 )
                        RefCountedObject::Release(v35);
                      RefCountedObject::Release(v34);
                      if ( (_QWORD)v58 )
                      {
                        std::_Deallocate<16,0>(
                          (void *)v58,
                          (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
                        v58 = 0LL;
                        v59 = 0LL;
                      }
                      std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
                      if ( v73 == 1 )
                      {
                        if ( v74 )
                          EventActivityIdControl(4u, &ActivityId);
                        v73 = 2;
                        _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
                      }
                      return v49;
                    }
                    HidLampMultiUpdateReportBuilder::Reset(v34);
                  }
                  v33 = v58;
                }
              }
              if ( !*((_DWORD *)v34 + 6) )
                goto LABEL_154;
              *((_DWORD *)v34 + 7) |= 1u;
              *v70 = 1;
              v51 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v34);
              v52 = v51;
              if ( v51 >= 0 )
                goto LABEL_154;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x22A,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                (const char *)(unsigned int)v51);
              if ( v31 )
                operator delete(v31, v53);
              if ( v35 )
                RefCountedObject::Release(v35);
              RefCountedObject::Release(v34);
              if ( (_QWORD)v58 )
              {
                std::_Deallocate<16,0>(
                  (void *)v58,
                  (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
                v58 = 0LL;
                v59 = 0LL;
              }
              std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
              if ( v73 == 1 )
              {
                if ( v74 )
                  EventActivityIdControl(4u, &ActivityId);
                v73 = 2;
                _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
              }
              result = v52;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1DC,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)0x8007000ELL);
            if ( v65 )
              RefCountedObject::Release(v65);
            if ( v63 )
              RefCountedObject::Release(v63);
            if ( (_QWORD)v58 )
            {
              std::_Deallocate<16,0>((void *)v58, (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
              v58 = 0LL;
              v59 = 0LL;
            }
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
            if ( v73 == 1 )
            {
              if ( v74 )
                EventActivityIdControl(4u, &ActivityId);
              v73 = 2;
              _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
            }
            result = 2147942414LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D8,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)(unsigned int)v28);
          if ( v65 )
            RefCountedObject::Release(v65);
          if ( v63 )
            RefCountedObject::Release(v63);
          if ( (_QWORD)v58 )
          {
            std::_Deallocate<16,0>((void *)v58, (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
            v58 = 0LL;
            v59 = 0LL;
          }
          std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
          if ( v73 == 1 )
          {
            if ( v74 )
              EventActivityIdControl(4u, &ActivityId);
            v73 = 2;
            _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
          }
          result = v29;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          (const char *)(unsigned int)updated);
        if ( v63 )
          RefCountedObject::Release(v63);
        if ( (_QWORD)v58 )
        {
          std::_Deallocate<16,0>((void *)v58, (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
          v58 = 0LL;
          v59 = 0LL;
        }
        std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
        if ( v73 == 1 )
        {
          if ( v74 )
            EventActivityIdControl(4u, &ActivityId);
          v73 = 2;
          _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
        }
        result = v27;
      }
    }
    else
    {
      if ( (_QWORD)v58 )
      {
        std::_Deallocate<16,0>((void *)v58, (const struct std::nothrow_t *)((v59 - v58) & 0xFFFFFFFFFFFFFFF8uLL));
        v58 = 0LL;
        v59 = 0LL;
      }
      std::vector<Windows::UI::Color>::_Tidy((__int64)&v66);
      if ( v73 == 1 )
      {
        if ( v74 )
          EventActivityIdControl(4u, &ActivityId);
        v73 = 2;
        _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x234,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                           v25);
  }
  return result;
}
