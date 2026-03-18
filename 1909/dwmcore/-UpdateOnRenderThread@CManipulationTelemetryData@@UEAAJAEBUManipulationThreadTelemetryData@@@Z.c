/*
 * XREFs of ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180234FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180186038 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802345C8 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateOnRenderThread(
        LARGE_INTEGER *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __m128i v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD *v9; // rax
  _OWORD *v10; // rdi
  volatile signed __int32 *v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  signed int v14; // edi
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h] BYREF
  __int128 v29; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int64 *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  __int64 *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  __int64 *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  __int64 *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]

  QueryPerformanceCounter(this + 20);
  if ( dword_180337240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v4 = (*(__int64 (__fastcall **)(LARGE_INTEGER *))(this->QuadPart + 64))(this);
    v5 = *((_OWORD *)a2 + 2);
    v22 = v4;
    v6 = *((__m128i *)a2 + 1);
    v31 = &v22;
    v17 = *(_DWORD *)a2;
    v33 = &v17;
    v18 = *((_DWORD *)a2 + 1);
    v35 = &v18;
    v19 = *((_DWORD *)a2 + 2);
    v37 = &v19;
    v39 = &v23;
    v41 = &v24;
    v43 = &v25;
    v26 = *((_QWORD *)a2 + 6);
    v45 = &v26;
    v27 = *((_QWORD *)a2 + 7);
    v47 = &v27;
    v20 = *((_DWORD *)a2 + 16);
    v23 = v6.m128i_i64[0];
    v29 = v5;
    v49 = &v20;
    LODWORD(v4) = *((_DWORD *)a2 + 17);
    v29 = v5;
    v21 = v4;
    v7 = *((_OWORD *)a2 + 1);
    v51 = &v21;
    v24 = _mm_srli_si128(v6, 8).m128i_u64[0];
    v8 = *((_OWORD *)a2 + 2);
    v32 = 8LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 8LL;
    v42 = 8LL;
    v28 = v7;
    v44 = 8LL;
    v25 = v8;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 4LL;
    v52 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DD5FD, 0LL, 0LL, 0xDu, &pData);
  }
  v9 = operator new(0x48uLL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = *(_OWORD *)a2;
    v9[1] = *((_OWORD *)a2 + 1);
    v9[2] = *((_OWORD *)a2 + 2);
    v9[3] = *((_OWORD *)a2 + 3);
    *((_QWORD *)v9 + 8) = *((_QWORD *)a2 + 8);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (volatile signed __int32 *)operator new(0x18uLL);
  v13 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 2) = 1;
    *((_DWORD *)v11 + 3) = 1;
    *(_QWORD *)v11 = &std::_Ref_count<ManipulationThreadTelemetryData>::`vftable';
    *((_QWORD *)v11 + 2) = v10;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v10 )
  {
    if ( v13 )
    {
      _InterlockedAdd(v13 + 2, 1u);
      _InterlockedAdd(v13 + 2, 1u);
    }
    *(_QWORD *)&v28 = v10;
    *((_QWORD *)&v28 + 1) = v13;
    v14 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert((__int64)&this[12], 1LL, &v28);
    if ( v13 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x13Eu, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x13Du, 0LL);
  }
  if ( v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  return (unsigned int)v14;
}
