/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800846F0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180029B24 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180084014 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180084A50 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D6FF0 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015BB94 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801C1408 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801C1528 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801C1AF8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180203C50 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021F8C4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3)
{
  __int64 v3; // rax
  _DWORD *v7; // r12
  unsigned int v8; // ecx
  int v9; // esi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct SubchannelMaskInfo *v12; // rbx
  struct CExpressionValue *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int *v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // r14d
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  int ObjectPropertyValue; // eax
  CExpressionValueStack *v30; // rcx
  unsigned int v31; // esi
  __int64 result; // rax
  int v33; // r9d
  __int64 v34; // r15
  int v35; // eax
  unsigned int v36; // ecx
  CVisual *v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 Elapsed; // rax
  int v41; // eax
  unsigned int v42; // ecx
  CVisual *v43; // r14
  __int64 v44; // rax
  CVisual *v45; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v47; // r10
  __int64 v48; // r10
  __int64 v49; // rbx
  __int64 v50; // rax
  CVisual *v51; // rcx
  unsigned __int64 v52; // r9
  unsigned int cData; // [rsp+20h] [rbp-99h]
  bool v54; // [rsp+30h] [rbp-89h] BYREF
  CVisual *v55; // [rsp+38h] [rbp-81h] BYREF
  __int64 v56; // [rsp+40h] [rbp-79h] BYREF
  __int64 v57; // [rsp+48h] [rbp-71h] BYREF
  __int64 v58; // [rsp+50h] [rbp-69h] BYREF
  __int64 v59; // [rsp+58h] [rbp-61h] BYREF
  struct SubchannelMaskInfo *v60; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  CVisual *v62; // [rsp+90h] [rbp-29h]
  __int64 v63; // [rsp+98h] [rbp-21h]
  struct SubchannelMaskInfo **v64; // [rsp+A0h] [rbp-19h]
  __int64 v65; // [rsp+A8h] [rbp-11h]
  __int64 *v66; // [rsp+B0h] [rbp-9h]
  __int64 v67; // [rsp+B8h] [rbp-1h]
  __int64 *v68; // [rsp+C0h] [rbp+7h]
  __int64 v69; // [rsp+C8h] [rbp+Fh]

  v3 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v3 >= *((_DWORD *)a2 + 104) )
    v7 = 0LL;
  else
    v7 = (_DWORD *)(*((_QWORD *)a2 + 51) + 24 * v3);
  v8 = *((_DWORD *)this + 4);
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v9 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v8,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
    v10 = -2147418113;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180283148, 1u, v9, 0x138u, 0LL);
    return v10;
  }
  if ( *((_DWORD *)this + 12) != v8 )
    goto LABEL_5;
  memset_0(&pData, 0, 0x40uLL);
  LODWORD(v67) = 18;
  v34 = 5LL;
  v66 = 0LL;
  BYTE4(v67) = 0;
  v35 = DynArrayImpl<1>::AddMultiple((__int64)this + 24, 80, 5, &v55);
  v9 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xE8u, 0LL);
  }
  else
  {
    v37 = v55;
    do
    {
      CExpressionValue::operator=(v37, &pData);
      v37 = (CVisual *)((char *)v37 + 80);
      --v34;
    }
    while ( v34 );
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(
      v8,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v9,
      0x5Bu,
      0LL);
  else
LABEL_5:
    v9 = 0;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_50;
  v11 = *((unsigned int *)this + 4);
  v12 = 0LL;
  v60 = 0LL;
  *((_DWORD *)this + 4) = v11 + 1;
  v13 = (struct CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v11);
  if ( v7[4] == 1 )
  {
    v12 = (struct SubchannelMaskInfo *)*((_QWORD *)a2 + 24);
    v60 = v12;
  }
  if ( v7[2] == 1 )
  {
    ObjectPropertyValue = CExpression::ReadValueFromCache(a2, v7[3], v13, &v54);
    v31 = ObjectPropertyValue;
    if ( ObjectPropertyValue < 0 )
    {
      cData = 383;
    }
    else
    {
      if ( v54 )
        return 0LL;
      ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(v30, a2, a3, v52, v13, v12);
      v31 = ObjectPropertyValue;
      if ( ObjectPropertyValue < 0 )
      {
        cData = 393;
      }
      else
      {
        ObjectPropertyValue = CExpression::StoreValueToCache(a2, v7[3], v13);
        v31 = ObjectPropertyValue;
        if ( ObjectPropertyValue >= 0 )
          return 0LL;
        cData = 399;
      }
    }
    goto LABEL_83;
  }
  if ( v7[2] == 2 )
  {
    v14 = *((unsigned int *)a3 + 1);
    v15 = 0LL;
    v57 = 0LL;
    v56 = 0LL;
    if ( (unsigned int)v14 >= *((_DWORD *)a2 + 104) )
      v16 = 0LL;
    else
      v16 = (unsigned int *)(*((_QWORD *)a2 + 51) + 24 * v14);
    v17 = *((_QWORD *)a2 + 38);
    v55 = (CVisual *)v16;
    if ( *(int *)(v17 + 4) < 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
    {
      v38 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 240LL);
      QpcStopwatch::Start((QpcStopwatch *)&v56);
      v58 = v38 + 100;
      v39 = v38 + 136;
      v15 = v56;
      v59 = v39;
    }
    else
    {
      v58 = 12LL;
      v59 = 48LL;
    }
    v18 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, __int64 *))(*(_QWORD *)a2 + 272LL))(a2, v16[5], &v57);
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180283148, 1u, v18, 0xF4u, 0LL);
    }
    else
    {
      if ( v15 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v56);
        ++*(_DWORD *)v58;
        *(_QWORD *)v59 += Elapsed;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v57 + 136LL))(
              v57,
              *v16,
              v13);
      v20 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180283148, 1u, v21, 0xFBu, 0LL);
      }
      else if ( v60 && *((_BYTE *)v60 + 4) && (v41 = CExpressionValue::ApplyMaskToValue(v13, v60), v20 = v41, v41 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, &dword_180283148, 1u, v41, 0x10Bu, 0LL);
      }
      else
      {
        v23 = *((_QWORD *)a2 + 22);
        if ( v23 )
          v24 = *(_QWORD *)(v23 + 16);
        else
          v24 = 0LL;
        v25 = v57;
        if ( dword_18033A240 > 4u && (byte_18033A250 & 2) != 0 && (qword_18033A258 & 2) == qword_18033A258 )
        {
          if ( v24 )
          {
            if ( v57 )
            {
              v43 = v55;
              if ( (unsigned int)(*(_DWORD *)v55 - 1) <= 1
                && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 189LL)
                && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 48LL))(v25, 88LL) )
              {
                wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
                  &v55,
                  v24);
                v44 = *(_QWORD *)v25;
                v56 = v25;
                (*(void (__fastcall **)(__int64))(v44 + 8))(v25);
                v45 = v55;
                *((_BYTE *)v55 + 272) |= 4u;
                if ( InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v25 + 192)) )
                {
                  if ( CVisual::GetInteractionInternal(v45) )
                  {
                    InteractionInternal = CVisual::GetInteractionInternal(v45);
                    if ( InteractionInternal == v47
                      && dword_18033A240 > 4u
                      && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
                    {
                      v62 = v43;
                      v64 = &v60;
                      v66 = &v59;
                      v68 = &v58;
                      v63 = 4LL;
                      v60 = v45;
                      v65 = 8LL;
                      v59 = v25;
                      v67 = 8LL;
                      v58 = v48;
                      v69 = 8LL;
                      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC463, 0LL, 0LL, 6u, &pData);
                    }
                  }
                }
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v56);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v55);
              }
            }
          }
        }
        v20 = 0;
      }
    }
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v20 >= 0 )
    {
      v26 = *((_QWORD *)a2 + 38);
      v27 = 0LL;
      v56 = 0LL;
      if ( *(int *)(v26 + 4) < 0 )
      {
        v49 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 240LL);
        QpcStopwatch::Start((QpcStopwatch *)&v56);
        v28 = v49 + 104;
        v55 = (CVisual *)(v49 + 144);
        v27 = v56;
      }
      else
      {
        v28 = 16LL;
        v55 = (CVisual *)56;
      }
      ObjectPropertyValue = CExpression::StoreValueToCache(a2, v7[3], v13);
      v31 = ObjectPropertyValue;
      if ( ObjectPropertyValue >= 0 )
      {
        if ( v27 )
        {
          v50 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v56);
          v51 = v55;
          ++*(_DWORD *)v28;
          *(_QWORD *)v51 += v50;
        }
        return 0LL;
      }
      cData = 349;
      goto LABEL_83;
    }
    ObjectPropertyValue = CExpression::ReadValueFromCache(a2, v7[3], v13, &v54);
    v31 = ObjectPropertyValue;
    if ( ObjectPropertyValue >= 0 )
    {
      if ( !v54 )
      {
        v31 = v20;
        cData = 370;
        v33 = v20;
LABEL_40:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v30, &dword_180283148, 1u, v33, cData, 0LL);
        goto LABEL_41;
      }
      return 0LL;
    }
    cData = 366;
LABEL_83:
    v33 = ObjectPropertyValue;
    goto LABEL_40;
  }
  v31 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(v7[2] - 1, &dword_180283148, 1u, -2147418113, 0x195u, 0LL);
LABEL_41:
  result = v31;
  if ( v13 )
    --*((_DWORD *)this + 4);
  return result;
}
