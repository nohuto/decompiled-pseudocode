/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x1801F206C
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801F18E8 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801F16D4 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        __int64 (__fastcall ***a2)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *),
        unsigned __int8 a3,
        __int64 a4,
        struct IManipulationTelemetryData *a5,
        struct InteractionOutput *a6)
{
  char v9; // si
  char v10; // cl
  __m128 v11; // xmm6
  char *v12; // r15
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // xmm0_8
  __m128 v16; // xmm1
  unsigned __int64 v17; // xmm0_8
  __m128 v18; // xmm1
  int v19; // eax
  unsigned __int64 v20; // xmm0_8
  __m128 v21; // xmm1
  ULONG v22; // eax
  unsigned __int64 v23; // xmm0_8
  __m128 v24; // xmm1
  unsigned __int64 v25; // xmm0_8
  __int64 (__fastcall *v26)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  int v27; // eax
  __int64 (__fastcall **v28)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  __int64 v29; // r9
  char RailsEnabled; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  struct IManipulationTelemetryData *v34; // [rsp+48h] [rbp-C0h] BYREF
  CInteractionProcessor *v35; // [rsp+50h] [rbp-B8h] BYREF
  struct IManipulationResource *v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h]
  int v38; // [rsp+68h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  char v40; // [rsp+88h] [rbp-80h]
  unsigned __int64 v41; // [rsp+8Ch] [rbp-7Ch]
  int v42; // [rsp+94h] [rbp-74h]
  CInteractionProcessor **v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  struct IManipulationResource **v45; // [rsp+A8h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-58h]
  __int128 v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  char *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  struct IManipulationTelemetryData **v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  int *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]

  v31 = 0;
  v34 = a5;
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v9 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( a3 )
  {
    v10 = *((_BYTE *)this + 808);
    v11 = 0LL;
    if ( (v10 & 1) != 0 )
    {
      v11 = (__m128)*((unsigned int *)a6 + 2);
    }
    else
    {
      *((_DWORD *)a6 + 2) = 0;
      v10 = *((_BYTE *)this + 808);
    }
    if ( (v10 & 2) == 0 )
    {
      *((_DWORD *)a6 + 3) = 0;
      v10 = *((_BYTE *)this + 808);
    }
    if ( (v10 & 4) == 0 )
      *((_DWORD *)a6 + 4) = 1065353216;
    memset_0(&pData, 0, 0x60uLL);
    v12 = (char *)this + 792;
    v13 = 3;
    v14 = *((_DWORD *)this + 198) == 0;
    LODWORD(pData.Ptr) = 3;
    if ( !v14 )
    {
      if ( *(_DWORD *)a6 )
        v13 = 2;
      LODWORD(pData.Ptr) = v13;
    }
    LODWORD(v37) = 0;
    v15 = _mm_unpacklo_ps(v11, (__m128)*((unsigned int *)a6 + 3)).m128_u64[0];
    v16 = (__m128)*((unsigned int *)a6 + 4);
    v42 = 0;
    v41 = v15;
    *(float *)&v44 = FLOAT_1_0;
    LODWORD(v37) = 0;
    v17 = _mm_unpacklo_ps(v16, v16).m128_u64[0];
    v18 = (__m128)*((unsigned int *)a6 + 7);
    LODWORD(v46) = 0;
    LODWORD(v37) = 0;
    HIDWORD(v46) = 0;
    HIDWORD(v47) = 0;
    LODWORD(v48) = *((_DWORD *)a6 + 5);
    HIDWORD(v48) = *((_DWORD *)this + 197);
    v19 = *((_DWORD *)this + 203);
    v43 = (CInteractionProcessor **)v17;
    v20 = _mm_unpacklo_ps((__m128)*((unsigned int *)a6 + 6), v18).m128_u64[0];
    v21 = (__m128)*((unsigned int *)a6 + 9);
    HIDWORD(pData.Ptr) = v19;
    pData.Size = *((_DWORD *)this + 204);
    v22 = *((_DWORD *)this + 205);
    v45 = (struct IManipulationResource **)v20;
    v23 = _mm_unpacklo_ps(v21, v21).m128_u64[0];
    v24 = (__m128)*((unsigned int *)a6 + 11);
    pData.Reserved = v22;
    *(_QWORD *)((char *)&v46 + 4) = v23;
    v25 = _mm_unpacklo_ps((__m128)*((unsigned int *)a6 + 10), v24).m128_u64[0];
    v24.m128_i32[0] = *((_DWORD *)a6 + 8);
    v26 = **a2;
    *(_QWORD *)((char *)&v47 + 4) = v25;
    HIDWORD(v44) = *((_DWORD *)a6 + 13);
    LODWORD(v47) = v24.m128_i32[0];
    v40 = RailsEnabled | v40 & 0xFC | (2 * (v9 | 2));
    v27 = v26((struct IManipulationResource *)a2, &pData, v34);
  }
  else
  {
    v12 = (char *)this + 792;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a6 + 4) & 2) == 0 && *(_DWORD *)a6 )
      LODWORD(v36) = 3;
    else
      LODWORD(v36) = 0;
    HIDWORD(v36) = *((_DWORD *)this + 203);
    v37 = *((_QWORD *)this + 102);
    v28 = *a2;
    LOBYTE(v38) = RailsEnabled | v38 & 0xFC | (2 * (v9 | 2));
    v27 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *), struct IManipulationResource **))v28[1])(
            a2,
            &v36);
  }
  v31 = v27;
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v35 = this;
      v43 = &v35;
      v45 = &v36;
      v32 = a3;
      *((_QWORD *)&v46 + 1) = &v32;
      *((_QWORD *)&v47 + 1) = &v33;
      LODWORD(v34) = *((_DWORD *)a6 + 1);
      v51 = &v34;
      v53 = &v31;
      v44 = 8LL;
      v36 = (struct IManipulationResource *)a2;
      *(_QWORD *)&v46 = 8LL;
      *(_QWORD *)&v47 = v29;
      v33 = 1;
      v48 = v29;
      v49 = v12;
      v50 = v29;
      v52 = v29;
      v54 = v29;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B7516, 0LL, 0LL, 9u, &pData);
    }
  }
}
