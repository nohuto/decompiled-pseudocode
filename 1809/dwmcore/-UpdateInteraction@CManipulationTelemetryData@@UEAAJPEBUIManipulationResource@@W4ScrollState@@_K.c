/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801F59E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x18019CAF4 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801F524C (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x1801F52AC (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801F5678 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateInteraction(__int64 a1, LONGLONG a2, int a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  std::_Ref_count_base *v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // r8
  std::_Ref_count_base *v19; // rax
  __int64 v20; // rsi
  std::_Ref_count_base *v21; // rcx
  __int64 v22; // rcx
  int inserted; // eax
  LPVOID v24; // rax
  _OWORD *v25; // rdi
  int v26; // r9d
  __int128 v27; // xmm1
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  std::_Ref_count_base *v31; // rcx
  LARGE_INTEGER *v32; // rbx
  __int64 v33; // rdx
  DWORD LowPart; // eax
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  int v37; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  DWORD v39; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v41[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v42[2]; // [rsp+88h] [rbp-80h] BYREF
  int v43; // [rsp+98h] [rbp-70h]
  char v44; // [rsp+9Ch] [rbp-6Ch]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v48[4]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v49[4]; // [rsp+128h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  LARGE_INTEGER *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  LARGE_INTEGER *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  DWORD *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  char *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  LARGE_INTEGER *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  char *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]
  LARGE_INTEGER *v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  LARGE_INTEGER *v65; // [rsp+1F8h] [rbp+F0h]
  __int64 v66; // [rsp+200h] [rbp+F8h]
  LARGE_INTEGER *v67; // [rsp+208h] [rbp+100h]
  int v68; // [rsp+210h] [rbp+108h]
  int v69; // [rsp+214h] [rbp+10Ch]
  LARGE_INTEGER *v70; // [rsp+218h] [rbp+110h]
  int v71; // [rsp+220h] [rbp+118h]
  int v72; // [rsp+224h] [rbp+11Ch]

  v42[1] = v42;
  v5 = 0;
  v43 = 0;
  v42[0] = v42;
  v44 = 0;
  InitializeCriticalSection(&CriticalSection);
  v38 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v11 = 0LL;
    v37 = *(_DWORD *)(a1 + 88);
    if ( v37 )
    {
      while ( 1 )
      {
        v12 = operator new(0x40uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(&v38, (__int64)v12);
        v14 = v38;
        if ( !(_QWORD)v38 )
          break;
        memset_0(v48, 0, sizeof(v48));
        v15 = v48[1];
        *(_OWORD *)v14 = v48[0];
        v16 = v48[2];
        *(_OWORD *)(v14 + 16) = v15;
        v17 = v48[3];
        *(_OWORD *)(v14 + 32) = v16;
        *(_OWORD *)(v14 + 48) = v17;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1 + 72, &v40, v18, &v37);
        v19 = v11;
        v20 = v40;
        v21 = v11;
        v11 = (std::_Ref_count_base *)*((_QWORD *)&v40 + 1);
        v40 = 0LL;
        if ( v19 )
          std::_Ref_count_base::_Decref(v21);
        v22 = *((_QWORD *)&v38 + 1);
        *(_DWORD *)(v14 + 32) = *(_DWORD *)v20;
        *(_WORD *)(v14 + 36) = *(_WORD *)(v20 + 44);
        *(_DWORD *)(v14 + 44) = *(_DWORD *)(v20 + 4);
        *(_DWORD *)(v14 + 40) = *(_DWORD *)(v20 + 8);
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(v20 + 16);
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(v20 + 24);
        *(_DWORD *)(v14 + 56) = *(_DWORD *)(v20 + 40);
        if ( v22 )
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
        v46 = v38;
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v42, (__int64 *)&v46);
        v5 = inserted;
        if ( inserted < 0 )
        {
          cData = 231;
          goto LABEL_14;
        }
        if ( !v37 )
          goto LABEL_10;
      }
      cData = 217;
      goto LABEL_16;
    }
LABEL_10:
    if ( a3 == 2 )
    {
      v24 = operator new(0x40uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(&v38, (__int64)v24);
      v25 = (_OWORD *)v38;
      if ( !(_QWORD)v38 )
      {
        cData = 237;
LABEL_16:
        v26 = -2147024882;
        v5 = -2147024882;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v26, cData);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        goto LABEL_32;
      }
      memset_0(v49, 0, sizeof(v49));
      v27 = v49[1];
      v28 = *((_QWORD *)&v38 + 1);
      *v25 = v49[0];
      v29 = v49[2];
      v25[1] = v27;
      v30 = v49[3];
      v25[2] = v29;
      v25[3] = v30;
      *((_QWORD *)v25 + 2) = a4;
      if ( v28 )
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
      v47 = v38;
      inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v42, (__int64 *)&v47);
      v5 = inserted;
      if ( inserted < 0 )
      {
        cData = 241;
LABEL_14:
        v26 = inserted;
        goto LABEL_17;
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v37 = v43;
  while ( v37 )
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((__int64)v42, v41, v10, &v37);
    v31 = (std::_Ref_count_base *)*((_QWORD *)&v38 + 1);
    *((std::_Ref_count_base **)&v38 + 1) = v41[1];
    v32 = (LARGE_INTEGER *)v41[0];
    *(_OWORD *)v41 = 0LL;
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v32->QuadPart = a2;
    v32[6].LowPart = 1;
    QueryPerformanceCounter(v32 + 3);
    if ( dword_180305E40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v51 = v32;
      v53 = v32 + 4;
      v52 = 8LL;
      v54 = 4LL;
      LowPart = v32[6].LowPart;
      v69 = 0;
      v72 = 0;
      v39 = LowPart;
      v55 = &v39;
      v57 = (char *)&v32[4].QuadPart + 4;
      v59 = v32 + 5;
      v61 = (char *)&v32[5].QuadPart + 4;
      v63 = v32 + 1;
      v65 = v32 + 2;
      v70 = v32 + 7;
      v56 = 4LL;
      v58 = v33;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 8LL;
      v66 = 8LL;
      v67 = v32 + 3;
      v68 = 8;
      v71 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B842F, 0LL, 0LL, 0xCu, &pData);
    }
    (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 536LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 536LL),
      v32);
  }
LABEL_32:
  if ( *((_QWORD *)&v38 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v38 + 1));
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v42,
    v9,
    v10);
  return v5;
}
