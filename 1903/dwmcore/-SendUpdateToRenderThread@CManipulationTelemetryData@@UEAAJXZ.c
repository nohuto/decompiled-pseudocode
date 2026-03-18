/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x180235E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801D6F90 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulationTelemetryData::SendUpdateToRenderThread(CManipulationTelemetryData *this)
{
  LARGE_INTEGER v2; // rbx
  CComposition *v3; // rbx
  signed int ManipulationManager; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  CManipulationManager *v7; // rbx
  __int64 v8; // rbx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int cData; // [rsp+28h] [rbp-E0h]
  unsigned int cDataa; // [rsp+28h] [rbp-E0h]
  struct CManipulationManager *v15; // [rsp+48h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+5Ch] [rbp-ACh] BYREF
  int v19; // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  CManipulationTelemetryData *QuadPart; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-88h] BYREF
  CManipulationTelemetryData *v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v29[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v30[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v31; // [rsp+108h] [rbp+0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  CManipulationTelemetryData **v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  int *v35; // [rsp+148h] [rbp+40h]
  __int64 v36; // [rsp+150h] [rbp+48h]
  int *v37; // [rsp+158h] [rbp+50h]
  __int64 v38; // [rsp+160h] [rbp+58h]
  int *v39; // [rsp+168h] [rbp+60h]
  __int64 v40; // [rsp+170h] [rbp+68h]
  __int64 *v41; // [rsp+178h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+78h]
  __int64 *v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+190h] [rbp+88h]
  __int64 *v45; // [rsp+198h] [rbp+90h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  __int64 *v47; // [rsp+1A8h] [rbp+A0h]
  __int64 v48; // [rsp+1B0h] [rbp+A8h]
  CManipulationTelemetryData **v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  int *v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  __int64 *v53; // [rsp+1D8h] [rbp+D0h]
  __int64 v54; // [rsp+1E0h] [rbp+D8h]

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v2 = PerformanceCount;
  *((LARGE_INTEGER *)this + 10) = PerformanceCount;
  memset_0(v29, 0, sizeof(v29));
  if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v25 = this;
    v33 = &v25;
    v17 = *((_DWORD *)this + 6);
    v35 = &v17;
    v18 = *((_DWORD *)this + 7);
    v37 = &v18;
    v19 = *((_DWORD *)this + 8);
    v39 = &v19;
    v26 = v29[0];
    v41 = &v26;
    v27 = v29[1];
    v43 = &v27;
    v28 = v29[2];
    v45 = &v28;
    v22 = *((_QWORD *)this + 9);
    v47 = &v22;
    v49 = &QuadPart;
    v20 = *((_DWORD *)this + 22);
    v51 = &v20;
    LODWORD(v21) = *((_DWORD *)this + 23);
    v53 = &v21;
    v34 = 8LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 8LL;
    v44 = 8LL;
    v46 = 8LL;
    v48 = 8LL;
    QuadPart = (CManipulationTelemetryData *)v2.QuadPart;
    v50 = 8LL;
    v52 = 4LL;
    v54 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DF718, 0LL, 0LL, 0xDu, &pData);
  }
  v3 = (CComposition *)*((_QWORD *)this + 21);
  v15 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v15);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v15);
  v6 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cDataa = 51;
    goto LABEL_13;
  }
  v7 = v15;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v7, &v16);
  v6 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cDataa = 53;
    goto LABEL_13;
  }
  v8 = *((_QWORD *)v15 + 10);
  if ( v8 )
  {
    (**(void (__fastcall ***)(CManipulationTelemetryData *))this)(this);
    v9 = *(_OWORD *)((char *)this + 40);
    v30[0] = *(_OWORD *)((char *)this + 24);
    v10 = *(_OWORD *)((char *)this + 56);
    v30[1] = v9;
    v11 = *(_OWORD *)((char *)this + 72);
    v30[2] = v10;
    v31 = *((_QWORD *)this + 11);
    v30[3] = v11;
    QuadPart = this;
    v22 = v8;
    LOWORD(cData) = 0;
    ManipulationManager = CoreUICallSend(v16, &v22, 1LL, 11LL, cData, &unk_1802B2E8A, (unsigned int)&QuadPart, v30);
    v6 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 21) + 552LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 21) + 552LL),
        0LL,
        0x4000LL);
      goto LABEL_14;
    }
    cDataa = 65;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ManipulationManager, cDataa, 0LL);
    goto LABEL_14;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80004005, 0x38u, 0LL);
LABEL_14:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v15);
  return v6;
}
