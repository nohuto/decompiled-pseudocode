/*
 * XREFs of ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x18019D310
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x18019C488 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateOnRenderThread(
        LARGE_INTEGER *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  _OWORD *v6; // rdi
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  int v10; // edi
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  int *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  int *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  __int64 *v42; // [rsp+108h] [rbp+0h]
  int v43; // [rsp+110h] [rbp+8h]
  int v44; // [rsp+114h] [rbp+Ch]
  int *v45; // [rsp+118h] [rbp+10h]
  int v46; // [rsp+120h] [rbp+18h]
  int v47; // [rsp+124h] [rbp+1Ch]
  __int64 *v48; // [rsp+128h] [rbp+20h]
  int v49; // [rsp+130h] [rbp+28h]
  int v50; // [rsp+134h] [rbp+2Ch]

  QueryPerformanceCounter(this + 17);
  if ( dword_180305E40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v4 = (*(__int64 (__fastcall **)(LARGE_INTEGER *))(this->QuadPart + 64))(this);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v18 = v4;
    v24 = &v18;
    v13 = *(_DWORD *)a2;
    v27 = &v13;
    v14 = *((_DWORD *)a2 + 1);
    v30 = &v14;
    v15 = *((_DWORD *)a2 + 2);
    v33 = &v15;
    v19 = *((_QWORD *)a2 + 2);
    v36 = &v19;
    v20 = *((_QWORD *)a2 + 3);
    v39 = &v20;
    v21 = *((_QWORD *)a2 + 4);
    v42 = &v21;
    v16 = *((_DWORD *)a2 + 10);
    v45 = &v16;
    LODWORD(v17) = *((_DWORD *)a2 + 11);
    v48 = &v17;
    v25 = 8;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 8;
    v40 = 8;
    v43 = 8;
    v46 = 4;
    v49 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B4D67, 0LL, 0LL, 0xBu, &pData);
  }
  v5 = operator new(0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v5[2] = *((_OWORD *)a2 + 2);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (volatile signed __int32 *)operator new(0x18uLL);
  v9 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count<ManipulationThreadTelemetryData>::`vftable';
    *((_QWORD *)v7 + 2) = v6;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v6 )
  {
    if ( v9 )
    {
      _InterlockedAdd(v9 + 2, 1u);
      _InterlockedAdd(v9 + 2, 1u);
    }
    v22[0] = v6;
    v22[1] = v9;
    v10 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert((__int64)&this[9], v8, v22);
    if ( v9 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x66u);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, -2147024882, 0x65u);
  }
  if ( v9 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
  return (unsigned int)v10;
}
