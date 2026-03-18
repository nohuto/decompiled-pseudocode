/*
 * XREFs of ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180235520
 * Callers:
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180234100 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18023473C (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180236F28 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18025E534 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 */

void __fastcall CInteractionContextWrapper::_UpdateInteractionOutput(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        struct InteractionOutput *a3)
{
  int v4; // edx
  float v7; // xmm0_4
  float *v8; // rsi
  float *v9; // r14
  const struct MANIPULATION_TRANSFORM *v10; // r12
  float v11; // xmm1_4
  const struct DEVICE_INFO *v12; // rax
  const struct tagRECT *v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  const struct MANIPULATION_TRANSFORM *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  float v20; // xmm1_4
  float v21; // [rsp+50h] [rbp-B0h] BYREF
  float v22; // [rsp+54h] [rbp-ACh] BYREF
  CInteractionContextWrapper *v23; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+70h] [rbp-90h]
  _QWORD v26[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  CInteractionContextWrapper **v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  float *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  float *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  _QWORD *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  char *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  float *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  float *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  char *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  char *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  char *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  char *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  char *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  __int64 v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  __int64 v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]

  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a3 + 11) = *((_DWORD *)a2 + 4);
  v4 = *(_DWORD *)a2;
  if ( ((v4 - 1) & 0xFFFFFFFC) == 0 && v4 != 3 )
  {
    *(_DWORD *)a3 = v4;
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
      v7 = *((float *)a2 + 7);
      if ( v7 != 0.0 )
        *((float *)a3 + 4) = v7 * *((float *)a3 + 4);
      *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 15);
      *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 16);
      *((_DWORD *)a3 + 8) = *((_DWORD *)a2 + 17);
      *((_DWORD *)a3 + 9) = 0;
      *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 12);
      *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 13);
    }
  }
  v8 = (float *)((char *)a3 + 8);
  v9 = (float *)((char *)a3 + 12);
  v10 = 0LL;
  v11 = *((float *)a3 + 3);
  v21 = *((float *)a3 + 2);
  v22 = v11;
  v24[0] = 0LL;
  v24[1] = 0LL;
  v25 = 0;
  if ( !CCommonRegistryData::m_fDisableInteractionOutputPrediction
    && !CCommonRegistryData::m_cForceDisableInteractionOutputPrediction
    && (*((_DWORD *)this + 60) & 0x180000) == 0 )
  {
    v12 = CPointerDeviceCache::Query(*((void **)this + 31));
    v13 = (const struct tagRECT *)(((unsigned __int64)v12 + 16) & -(__int64)(*((_BYTE *)v12 + 48) != 0));
    NtDCompositionGetFrameStatistics(v26, 0LL);
    v14 = 1000LL * v26[2] / v27;
    v15 = 1000LL * v26[0] / v27;
    if ( *(_DWORD *)a2 == 1 && (v14 || v15 || 1000 * v28 / v27) )
    {
      v16 = OutputPredictionInteractionContext(*((_QWORD *)this + 3), 1000LL, v14, v15, 1000 * v28 / v27, v24);
      v17 = (const struct MANIPULATION_TRANSFORM *)v24;
      if ( v16 < 0 )
        v17 = 0LL;
      v10 = v17;
    }
    CInteractionContextTransformHelper::CalculatePrediction(
      (CInteractionContextWrapper *)((char *)this + 336),
      a2,
      v10,
      v13,
      *((_DWORD *)this + 81),
      *v8,
      *v9,
      &v21,
      &v22);
  }
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v23 = this;
    v30 = &v23;
    v31 = 8LL;
    v38 = (char *)a2 + 40;
    v40 = (char *)a2 + 44;
    v42 = v24;
    v44 = (char *)v24 + 4;
    v46 = &v21;
    v48 = &v22;
    v52 = (char *)a3 + 24;
    v54 = (char *)a3 + 28;
    v56 = (char *)a3 + 32;
    v58 = (char *)a3 + 36;
    v32 = v8;
    v33 = 4LL;
    v34 = v9;
    v35 = 4LL;
    v36 = (char *)a3 + 16;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v50 = (char *)a3 + 16;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v60 = v18;
    v61 = 4LL;
    v62 = v19;
    v63 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DEDC1, 0LL, 0LL, 0x13u, &pData);
  }
  v20 = v22;
  *v8 = v21;
  *v9 = v20;
}
