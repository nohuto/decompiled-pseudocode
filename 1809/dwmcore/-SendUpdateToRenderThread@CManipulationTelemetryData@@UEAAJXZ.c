/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1801F56E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x18019C030 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulationTelemetryData::SendUpdateToRenderThread(CManipulationTelemetryData *this)
{
  CManipulationTelemetryData *v2; // r9
  int ManipulationManager; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct CManipulationManager *v6; // rbx
  __int64 v7; // rbx
  __int128 v8; // xmm1
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  struct CManipulationManager *v11; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  CManipulationTelemetryData *v17; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  CManipulationTelemetryData *v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int128 v21; // [rsp+90h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  CManipulationTelemetryData **v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  int *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  __int64 *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  __int64 *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  CManipulationTelemetryData **v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  struct CManipulationManager **v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  struct IMessageCallSendHost **v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 7) = PerformanceCount;
  if ( dword_180305E40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v19 = this;
    v25 = &v19;
    v13 = *((_DWORD *)this + 6);
    v27 = &v13;
    v14 = *((_DWORD *)this + 7);
    v29 = &v14;
    v15 = *((_DWORD *)this + 8);
    v31 = &v15;
    v20 = *((_QWORD *)this + 5);
    v33 = &v20;
    v16 = *((_QWORD *)this + 6);
    v35 = &v16;
    v37 = &v17;
    LODWORD(v11) = *((_DWORD *)this + 16);
    v39 = &v11;
    LODWORD(v12) = *((_DWORD *)this + 17);
    v41 = &v12;
    v26 = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 8LL;
    v36 = 8LL;
    v17 = v2;
    v38 = 8LL;
    v40 = 4LL;
    v42 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B8617, 0LL, 0LL, 0xBu, &pData);
  }
  v11 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 18), &v11);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 46;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v12);
  v6 = v11;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v11, &v12);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 48;
    goto LABEL_13;
  }
  v7 = *((_QWORD *)v6 + 47);
  v5 = v7 == 0 ? 0x80004005 : 0;
  if ( !v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5, 0x33u);
    goto LABEL_14;
  }
  (**(void (__fastcall ***)(CManipulationTelemetryData *))this)(this);
  v8 = *(_OWORD *)((char *)this + 40);
  v21 = *(_OWORD *)((char *)this + 24);
  v23 = *(_OWORD *)((char *)this + 56);
  v22 = v8;
  v17 = this;
  v16 = v7;
  ManipulationManager = CoreUICallSend(v12, &v16, 1LL, 10LL, 0, &unk_180276424);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 60;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, ManipulationManager, cData);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 18) + 536LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 18) + 536LL),
    0LL,
    0x4000LL);
LABEL_14:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  return v5;
}
