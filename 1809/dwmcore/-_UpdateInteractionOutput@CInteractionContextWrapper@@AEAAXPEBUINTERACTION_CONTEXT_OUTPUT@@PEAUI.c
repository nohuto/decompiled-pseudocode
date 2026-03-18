/*
 * XREFs of ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801F4E30
 * Callers:
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x1801F39B0 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801F40A4 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x180220C58 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 */

void __fastcall CInteractionContextWrapper::_UpdateInteractionOutput(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        struct InteractionOutput *a3)
{
  char *v3; // r13
  int v5; // ecx
  float v8; // xmm0_4
  float *v9; // rsi
  float *v10; // r14
  const struct MANIPULATION_TRANSFORM *v11; // r12
  float v12; // xmm1_4
  __int64 v13; // rcx
  int PointerDeviceRects; // eax
  struct tagRECT *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  const struct MANIPULATION_TRANSFORM *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r11
  float v22; // xmm1_4
  float v23; // [rsp+50h] [rbp-B0h] BYREF
  float v24; // [rsp+54h] [rbp-ACh] BYREF
  struct tagRECT *v25; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+70h] [rbp-90h]
  _QWORD v28[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v30[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT **v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  float *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  float *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  char *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  char *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  _QWORD *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  char *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  float *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  float *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  char *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  char *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  char *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  char *v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  char *v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]
  char *v64; // [rsp+1D0h] [rbp+D0h]
  __int64 v65; // [rsp+1D8h] [rbp+D8h]
  __int64 v66; // [rsp+1E0h] [rbp+E0h]
  __int64 v67; // [rsp+1E8h] [rbp+E8h]

  v3 = (char *)a3 + 40;
  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a3 + 11) = *((_DWORD *)a2 + 4);
  v5 = *(_DWORD *)a2;
  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) == 0 && v5 != 3 )
  {
    *(_DWORD *)a3 = v5;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *((_DWORD *)a2 + 19) == 2 )
      {
        if ( *((float *)a2 + 10) == 0.0 )
        {
          if ( *((float *)a2 + 11) != 0.0 )
            *((_DWORD *)a3 + 5) = 2;
        }
        else
        {
          *((_DWORD *)a3 + 5) = 1;
        }
      }
      else if ( *((_DWORD *)a2 + 19) == 1 )
      {
        *((_DWORD *)a3 + 5) = 0;
      }
      *((float *)a3 + 2) = *((float *)a2 + 5) + *((float *)a3 + 2);
      *((float *)a3 + 3) = *((float *)a2 + 6) + *((float *)a3 + 3);
      v8 = *((float *)a2 + 7);
      if ( v8 != 0.0 )
        *((float *)a3 + 4) = v8 * *((float *)a3 + 4);
      *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 15);
      *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 16);
      *((_DWORD *)a3 + 8) = *((_DWORD *)a2 + 17);
      *((_DWORD *)a3 + 9) = 0;
      *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 12);
      *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 13);
    }
  }
  v9 = (float *)((char *)a3 + 8);
  v10 = (float *)((char *)a3 + 12);
  v11 = 0LL;
  v12 = *((float *)a3 + 3);
  v23 = *((float *)a3 + 2);
  v24 = v12;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v27 = 0;
  if ( !CCommonRegistryData::m_fDisableInteractionOutputPrediction
    && !CCommonRegistryData::m_cForceDisableInteractionOutputPrediction
    && (*((_DWORD *)this + 60) & 0x180000) == 0 )
  {
    v13 = *((_QWORD *)this + 31);
    v28[0] = 0LL;
    v28[1] = 0LL;
    v29[0] = 0LL;
    v29[1] = 0LL;
    PointerDeviceRects = GetPointerDeviceRects(v13, v28, v29);
    v15 = (struct tagRECT *)v28;
    if ( !PointerDeviceRects )
      v15 = 0LL;
    v25 = v15;
    NtDCompositionGetFrameStatistics(v30);
    v16 = 1000LL * v30[2] / v31;
    v17 = 1000LL * v30[0] / v31;
    if ( *(_DWORD *)a2 == 1 && (v16 || v17 || 1000 * v32 / v31) )
    {
      v18 = OutputPredictionInteractionContext(*((_QWORD *)this + 3), 1000LL, v16, v17, 1000 * v32 / v31, v26);
      v19 = (const struct MANIPULATION_TRANSFORM *)v26;
      if ( v18 < 0 )
        v19 = 0LL;
      v11 = v19;
    }
    CInteractionContextTransformHelper::CalculatePrediction(
      (CInteractionContextWrapper *)((char *)this + 336),
      a2,
      v11,
      v25,
      *((_DWORD *)this + 81),
      *v9,
      *v10,
      &v23,
      &v24);
  }
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v25 = (struct tagRECT *)this;
    v34 = &v25;
    v35 = 8LL;
    v42 = (char *)a2 + 40;
    v44 = (char *)a2 + 44;
    v46 = v26;
    v48 = (char *)v26 + 4;
    v50 = &v23;
    v52 = &v24;
    v56 = (char *)a3 + 24;
    v58 = (char *)a3 + 28;
    v60 = (char *)a3 + 32;
    v62 = (char *)a3 + 36;
    v36 = v9;
    v37 = v21;
    v38 = v10;
    v39 = v21;
    v40 = (char *)a3 + 16;
    v41 = v21;
    v43 = v21;
    v45 = v21;
    v47 = v21;
    v49 = v21;
    v51 = v21;
    v53 = v21;
    v54 = (char *)a3 + 16;
    v55 = v21;
    v57 = v21;
    v59 = v21;
    v61 = v21;
    v63 = v21;
    v64 = v3;
    v65 = v21;
    v66 = v20;
    v67 = v21;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B7E80, 0LL, 0LL, 0x13u, &pData);
  }
  v22 = v24;
  *v9 = v23;
  *v10 = v22;
}
