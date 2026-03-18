/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180234AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180186038 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801D6284 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1802341FC (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x18023425C (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802346C8 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateInteraction(__int64 a1, LONGLONG a2, int a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  std::_Ref_count_base *v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // r8
  std::_Ref_count_base *v20; // rax
  __m128i *v21; // r15
  std::_Ref_count_base *v22; // rcx
  __int64 v23; // rcx
  int inserted; // eax
  LPVOID v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // r9d
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  std::_Ref_count_base *v33; // rcx
  LARGE_INTEGER *v34; // rbx
  __int64 v35; // rdx
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  int v38; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v39; // [rsp+48h] [rbp-C0h] BYREF
  DWORD LowPart; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v42[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v43[2]; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+98h] [rbp-70h]
  char v45; // [rsp+9Ch] [rbp-6Ch]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v47; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v48[3]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v49[5]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v50; // [rsp+158h] [rbp+50h]
  _OWORD v51[5]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v52; // [rsp+1B8h] [rbp+B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  LARGE_INTEGER *v54; // [rsp+1E8h] [rbp+E0h]
  __int64 v55; // [rsp+1F0h] [rbp+E8h]
  LARGE_INTEGER *v56; // [rsp+1F8h] [rbp+F0h]
  __int64 v57; // [rsp+200h] [rbp+F8h]
  DWORD *p_LowPart; // [rsp+208h] [rbp+100h]
  __int64 v59; // [rsp+210h] [rbp+108h]
  char *v60; // [rsp+218h] [rbp+110h]
  __int64 v61; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v62; // [rsp+228h] [rbp+120h]
  __int64 v63; // [rsp+230h] [rbp+128h]
  char *v64; // [rsp+238h] [rbp+130h]
  __int64 v65; // [rsp+240h] [rbp+138h]
  LARGE_INTEGER *v66; // [rsp+248h] [rbp+140h]
  __int64 v67; // [rsp+250h] [rbp+148h]
  LARGE_INTEGER *v68; // [rsp+258h] [rbp+150h]
  __int64 v69; // [rsp+260h] [rbp+158h]
  LARGE_INTEGER *v70; // [rsp+268h] [rbp+160h]
  __int64 v71; // [rsp+270h] [rbp+168h]
  LARGE_INTEGER *v72; // [rsp+278h] [rbp+170h]
  __int64 v73; // [rsp+280h] [rbp+178h]
  LARGE_INTEGER *v74; // [rsp+288h] [rbp+180h]
  __int64 v75; // [rsp+290h] [rbp+188h]
  LARGE_INTEGER *v76; // [rsp+298h] [rbp+190h]
  __int64 v77; // [rsp+2A0h] [rbp+198h]
  LARGE_INTEGER *v78; // [rsp+2A8h] [rbp+1A0h]
  __int64 v79; // [rsp+2B0h] [rbp+1A8h]

  v43[1] = v43;
  v44 = 0;
  v43[0] = v43;
  v45 = 0;
  v8 = 0;
  InitializeCriticalSection(&CriticalSection);
  v39 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v11 = 0LL;
    v38 = *(_DWORD *)(a1 + 112);
    if ( v38 )
    {
      while ( 1 )
      {
        v12 = operator new(0x58uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(&v39, (__int64)v12);
        v14 = v39;
        if ( !(_QWORD)v39 )
          break;
        memset_0(v49, 0, 0x58uLL);
        v15 = v49[1];
        *(_OWORD *)v14 = v49[0];
        v16 = v49[2];
        *(_OWORD *)(v14 + 16) = v15;
        v17 = v49[3];
        *(_OWORD *)(v14 + 32) = v16;
        v18 = v49[4];
        *(_OWORD *)(v14 + 48) = v17;
        *(_QWORD *)&v17 = v50;
        *(_OWORD *)(v14 + 64) = v18;
        *(_QWORD *)(v14 + 80) = v17;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1 + 96, &v41, v19, &v38);
        v20 = v11;
        v21 = (__m128i *)v41;
        v22 = v11;
        v11 = (std::_Ref_count_base *)*((_QWORD *)&v41 + 1);
        v41 = 0LL;
        if ( v20 )
          std::_Ref_count_base::_Decref(v22);
        v23 = *((_QWORD *)&v39 + 1);
        *(_DWORD *)(v14 + 56) = v21->m128i_i32[0];
        *(_WORD *)(v14 + 60) = v21[4].m128i_i16[2];
        *(_DWORD *)(v14 + 68) = v21->m128i_i32[1];
        *(_DWORD *)(v14 + 64) = v21->m128i_i32[2];
        *(_QWORD *)(v14 + 8) = v21[1].m128i_i64[0];
        *(_QWORD *)(v14 + 16) = _mm_srli_si128(v21[1], 8).m128i_u64[0];
        *(_QWORD *)(v14 + 24) = v21[2].m128i_i64[0];
        *(_QWORD *)(v14 + 40) = v21[3].m128i_i64[0];
        *(_QWORD *)(v14 + 32) = _mm_srli_si128(v21[2], 8).m128i_u64[0];
        *(_DWORD *)(v14 + 80) = v21[4].m128i_i32[0];
        if ( v23 )
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
        v47 = v39;
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v43, (__int64 *)&v47);
        v8 = inserted;
        if ( inserted < 0 )
        {
          cData = 199;
          goto LABEL_14;
        }
        if ( !v38 )
          goto LABEL_10;
      }
      cData = 182;
      goto LABEL_16;
    }
LABEL_10:
    if ( a3 == 2 )
    {
      v25 = operator new(0x58uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(&v39, (__int64)v25);
      v26 = v39;
      if ( !(_QWORD)v39 )
      {
        cData = 205;
LABEL_16:
        v27 = -2147024882;
        v8 = -2147024882;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v27, cData, 0LL);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        goto LABEL_32;
      }
      memset_0(v51, 0, 0x58uLL);
      v28 = v51[1];
      v29 = *((_QWORD *)&v39 + 1);
      *(_OWORD *)v26 = v51[0];
      v30 = v51[2];
      *(_OWORD *)(v26 + 16) = v28;
      v31 = v51[3];
      *(_OWORD *)(v26 + 32) = v30;
      v32 = v51[4];
      *(_OWORD *)(v26 + 48) = v31;
      *(_QWORD *)&v31 = v52;
      *(_OWORD *)(v26 + 64) = v32;
      *(_QWORD *)(v26 + 80) = v31;
      *(_QWORD *)(v26 + 40) = a4;
      if ( v29 )
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
      v48[0] = v39;
      inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v43, (__int64 *)v48);
      v8 = inserted;
      if ( inserted < 0 )
      {
        cData = 209;
LABEL_14:
        v27 = inserted;
        goto LABEL_17;
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v38 = v44;
  while ( v38 )
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((__int64)v43, v42, v10, &v38);
    v33 = (std::_Ref_count_base *)*((_QWORD *)&v39 + 1);
    *((std::_Ref_count_base **)&v39 + 1) = v42[1];
    v34 = (LARGE_INTEGER *)v42[0];
    *(_OWORD *)v42 = 0LL;
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    v34->QuadPart = a2;
    v34[9].LowPart = 1;
    QueryPerformanceCounter(v34 + 6);
    if ( dword_180337240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
    {
      v54 = v34;
      v56 = v34 + 7;
      v55 = 8LL;
      v57 = 4LL;
      LowPart = v34[9].LowPart;
      p_LowPart = &LowPart;
      v60 = (char *)&v34[7].QuadPart + 4;
      v62 = v34 + 8;
      v64 = (char *)&v34[8].QuadPart + 4;
      v66 = v34 + 1;
      v68 = v34 + 2;
      v70 = v34 + 3;
      v72 = v34 + 5;
      v76 = v34 + 4;
      v78 = v34 + 10;
      v59 = 4LL;
      v61 = v35;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 8LL;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 8LL;
      v74 = v34 + 6;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DD39C, 0LL, 0LL, 0xFu, &pData);
    }
    (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 552LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 552LL),
      v34);
  }
LABEL_32:
  if ( *((_QWORD *)&v39 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v39 + 1));
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v43,
    v9,
    v10);
  return v8;
}
