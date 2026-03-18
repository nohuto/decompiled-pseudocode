/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x18023247C
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x180231CF0 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x180231ADC (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        __int64 (__fastcall ***a2)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *),
        unsigned __int8 a3,
        __int64 a4,
        struct IManipulationTelemetryData *a5,
        struct InteractionOutput *a6)
{
  char RailsEnabled; // r13
  char v10; // cl
  char v11; // dl
  __m128 v12; // xmm0
  char *v13; // r14
  int v14; // eax
  __m128 v15; // xmm2
  unsigned __int64 v16; // xmm0_8
  __m128 v17; // xmm0
  ULONG v18; // eax
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  __int64 (__fastcall **v21)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  __int64 (__fastcall *v22)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  int v23; // eax
  __int64 (__fastcall **v24)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  __int64 v25; // r9
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  struct IManipulationTelemetryData *v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  CInteractionProcessor *v30; // [rsp+48h] [rbp-B8h] BYREF
  struct IManipulationResource *v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+5Ch] [rbp-A4h]
  int v34; // [rsp+60h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+80h] [rbp-80h]
  unsigned __int64 v37; // [rsp+84h] [rbp-7Ch]
  int v38; // [rsp+8Ch] [rbp-74h]
  CInteractionProcessor **v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  struct IManipulationResource **v41; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+A8h] [rbp-58h]
  __int128 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  struct IManipulationTelemetryData **v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  int *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]

  v28 = a5;
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v10 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( a3 )
  {
    v11 = *((_BYTE *)this + 808);
    v12 = 0LL;
    if ( (v11 & 1) != 0 )
    {
      v12 = (__m128)*((unsigned int *)a6 + 2);
    }
    else
    {
      *((_DWORD *)a6 + 2) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 2) == 0 )
    {
      *((_DWORD *)a6 + 3) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 4) == 0 )
      *((_DWORD *)a6 + 4) = 1065353216;
    v13 = (char *)this + 792;
    v36 = 0;
    v14 = 3;
    LODWORD(pData.Ptr) = 3;
    if ( *((_DWORD *)this + 198) )
    {
      if ( *(_DWORD *)a6 )
        v14 = 2;
      LODWORD(pData.Ptr) = v14;
    }
    v32 = 0;
    v15 = (__m128)*((unsigned int *)a6 + 4);
    v16 = _mm_unpacklo_ps(v12, (__m128)*((unsigned int *)a6 + 3)).m128_u64[0];
    v38 = 0;
    v37 = v16;
    v32 = 0;
    v17 = (__m128)*((unsigned int *)a6 + 6);
    LODWORD(v40) = (_DWORD)FLOAT_1_0;
    LODWORD(v42) = 0;
    v32 = 0;
    HIDWORD(v42) = 0;
    HIDWORD(v43) = 0;
    LODWORD(v44) = *((_DWORD *)a6 + 5);
    HIDWORD(v44) = *((_DWORD *)this + 197);
    HIDWORD(pData.Ptr) = *((_DWORD *)this + 203);
    pData.Size = *((_DWORD *)this + 204);
    v18 = *((_DWORD *)this + 205);
    v39 = (CInteractionProcessor **)_mm_unpacklo_ps(v15, v15).m128_u64[0];
    v19 = (__m128)*((unsigned int *)a6 + 9);
    v41 = (struct IManipulationResource **)_mm_unpacklo_ps(v17, (__m128)*((unsigned int *)a6 + 7)).m128_u64[0];
    v17.m128_u64[0] = _mm_unpacklo_ps(v19, v19).m128_u64[0];
    v20 = (__m128)*((unsigned int *)a6 + 11);
    pData.Reserved = v18;
    *(_QWORD *)((char *)&v42 + 4) = v17.m128_u64[0];
    v21 = *a2;
    v17.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)a6 + 10), v20).m128_u64[0];
    v20.m128_i32[0] = *((_DWORD *)a6 + 8);
    *(_QWORD *)((char *)&v43 + 4) = v17.m128_u64[0];
    v17.m128_i32[0] = *((_DWORD *)a6 + 13);
    v22 = *v21;
    LOBYTE(v36) = RailsEnabled | v36 & 0xFC | (2 * (v10 | 2));
    HIDWORD(v40) = v17.m128_i32[0];
    LODWORD(v43) = v20.m128_i32[0];
    v23 = v22((struct IManipulationResource *)a2, &pData, v28);
  }
  else
  {
    v13 = (char *)this + 792;
    v34 = 0;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a6 + 4) & 2) == 0 && *(_DWORD *)a6 )
      LODWORD(v31) = 3;
    else
      LODWORD(v31) = 0;
    HIDWORD(v31) = *((_DWORD *)this + 203);
    v32 = *((_DWORD *)this + 204);
    v33 = *((_DWORD *)this + 205);
    v24 = *a2;
    LOBYTE(v34) = RailsEnabled | v34 & 0xFC | (2 * (v10 | 2));
    v23 = v24[1]((struct IManipulationResource *)a2, (EVENT_DATA_DESCRIPTOR *)&v31, 0LL);
  }
  v29 = v23;
  if ( dword_18033A240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v30 = this;
      v39 = &v30;
      v41 = &v31;
      v26 = a3;
      *((_QWORD *)&v42 + 1) = &v26;
      *((_QWORD *)&v43 + 1) = &v27;
      LODWORD(v28) = *((_DWORD *)a6 + 1);
      v47 = &v28;
      v49 = &v29;
      v40 = 8LL;
      v31 = (struct IManipulationResource *)a2;
      *(_QWORD *)&v42 = 8LL;
      *(_QWORD *)&v43 = v25;
      v27 = 1;
      v44 = v25;
      v45 = v13;
      v46 = v25;
      v48 = v25;
      v50 = v25;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DE551, 0LL, 0LL, 9u, &pData);
    }
  }
}
