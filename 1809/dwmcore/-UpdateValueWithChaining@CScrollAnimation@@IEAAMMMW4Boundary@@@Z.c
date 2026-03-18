/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801D67D0
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801D7B30 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801D8290 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18019F0D8 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18019FDDC (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801A2AE8 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801A2BA8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1801D63AC (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1801D671C (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801E5E88 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1801E5F44 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x1801E71E0 (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x1801E732C (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

float __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, float a2, float a3, unsigned int a4)
{
  __int64 v4; // rax
  bool v5; // bl
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct CChainingHelper *ActiveChainingHelper; // r14
  InteractionSourceManager *v11; // rsi
  int v12; // r13d
  unsigned __int8 ShouldChainForAxis; // r12
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rax
  unsigned int v17; // edx
  int v18; // ecx
  __int64 v19; // r10
  char v20; // cl
  __int64 v21; // r9
  struct CManipulation *v22; // rax
  __int64 v23; // rcx
  bool ShouldChainAllForAxis; // al
  __int64 v25; // rcx
  int v26; // edx
  int v27; // edx
  __int64 v28; // r9
  struct CManipulation *v29; // rax
  __int64 v30; // rcx
  bool v31; // al
  int v32; // eax
  int v33; // edx
  __int64 v34; // r9
  struct CManipulation *v35; // rax
  __int64 v36; // rcx
  bool v37; // al
  __int64 v38; // r9
  struct CManipulation *v39; // rax
  __int64 v40; // rcx
  bool v41; // al
  __int64 v42; // r9
  struct CManipulation *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r9
  struct CManipulation *v46; // rax
  __int64 v47; // rcx
  bool v48; // al
  float v49; // xmm0_4
  float v50; // xmm3_4
  __int64 v51; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+34h] [rbp-CCh] BYREF
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  int v56; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v57; // [rsp+40h] [rbp-C0h] BYREF
  int v58; // [rsp+44h] [rbp-BCh] BYREF
  int v59; // [rsp+48h] [rbp-B8h] BYREF
  struct CManipulation *ActiveManipulation; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  int *v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  int *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  int *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  float *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  float *v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  int *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  int *v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  struct CManipulation **p_ActiveManipulation; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  float v91; // [rsp+1D8h] [rbp+D8h] BYREF
  float v92; // [rsp+1E0h] [rbp+E0h] BYREF

  v92 = a3;
  v91 = a2;
  v4 = *(_QWORD *)(a1 + 304);
  v5 = 0;
  if ( v4 )
    v8 = *(_QWORD *)(v4 + 16);
  else
    v8 = 0LL;
  v61 = v8;
  if ( v4 )
    v9 = *(_QWORD *)(v4 + 16);
  else
    v9 = 0LL;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v9 + 192));
  if ( ActiveChainingHelper )
  {
    v11 = (InteractionSourceManager *)(v8 + 192);
    v12 = 0;
    if ( InteractionSourceManager::HasActiveManipulation(v11) )
      v12 = *((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v11) + 103);
    ShouldChainForAxis = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v11);
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v11) && ActiveManipulation )
      ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                             v14,
                             *(_DWORD *)(a1 + 292),
                             (__int64)ActiveManipulation,
                             0);
    if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v15 = *(_DWORD *)(a1 + 292);
      v64 = &v62;
      v62 = a1;
      v65 = 8LL;
      v16 = ScrollAxisToString(v15);
      TlgCreateWsz(&pDesc, v16);
      v17 = *(unsigned __int8 *)(a1 + 404);
      v18 = *(_DWORD *)(a1 + 384);
      v67 = &v54;
      v69 = &v55;
      v56 = *(_DWORD *)(a1 + 388);
      v71 = &v56;
      v73 = (int *)&v57;
      v75 = &v92;
      v77 = a1 + 396;
      v79 = a1 + 392;
      v81 = a1 + 400;
      v83 = &v91;
      v58 = ShouldChainForAxis;
      v85 = &v58;
      v54 = v18;
      v59 = (v17 >> 1) & 1;
      v68 = v19;
      v87 = &v59;
      p_ActiveManipulation = &ActiveManipulation;
      v55 = v12;
      v70 = v19;
      v72 = v19;
      v57 = a4;
      v74 = v19;
      v76 = v19;
      v78 = v19;
      v80 = v19;
      v82 = v19;
      v84 = v19;
      v86 = v19;
      v88 = v19;
      LODWORD(ActiveManipulation) = v17 & 1;
      v90 = v19;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B5E9F, 0LL, 0LL, 0x10u, &pData);
    }
    v20 = *(_BYTE *)(a1 + 404);
    if ( (v20 & 2) == 0 && v12 == 2 )
    {
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v11)
        && InteractionSourceManager::HasActiveManipulation(v11) )
      {
        v22 = InteractionSourceManager::TryGetActiveManipulation(v11);
        ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v23, *(_DWORD *)(a1 + 292), (__int64)v22);
      }
      else
      {
        ShouldChainAllForAxis = 0;
      }
      LOBYTE(v21) = ShouldChainForAxis;
      LOBYTE(cData) = ShouldChainAllForAxis;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        ActiveChainingHelper,
        *(unsigned int *)(a1 + 292),
        a4,
        v21,
        cData);
      v25 = 3LL * *(int *)(a1 + 292);
      *((_BYTE *)ActiveChainingHelper + 4 * v25) &= 0xFAu;
      *((_DWORD *)ActiveChainingHelper + v25 + 2) = 0;
      *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
      *(_BYTE *)(a1 + 404) |= 2u;
      v20 = *(_BYTE *)(a1 + 404);
    }
    v26 = *(_DWORD *)(a1 + 384);
    if ( v26 )
    {
      v27 = v26 - 2;
      if ( !v27 )
      {
        CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v92);
        v32 = *(_DWORD *)(a1 + 388);
        if ( v32 && ShouldChainForAxis )
        {
          if ( v32 == 1 || (v33 = *(_DWORD *)(a1 + 388), v32 == 3) )
          {
            v33 = *(_DWORD *)(a1 + 388);
            if ( a4 == v32 && (float)((float)(v92 - *(float *)(a1 + 392)) > 0.0) < 0.0 )
            {
              if ( InteractionSourceManager::TryGetActiveChainingHelper(v11)
                && InteractionSourceManager::HasActiveManipulation(v11) )
              {
                v35 = InteractionSourceManager::TryGetActiveManipulation(v11);
                v37 = CInteractionTracker::ShouldChainAllForAxis(v36, *(_DWORD *)(a1 + 292), (__int64)v35);
              }
              else
              {
                v37 = 0;
              }
              LOBYTE(v34) = v37;
              CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 292), a4, v34);
              v33 = *(_DWORD *)(a1 + 388);
            }
          }
          if ( (unsigned int)(v33 - 2) <= 1 && a4 == v33 && (float)((float)(v92 - *(float *)(a1 + 392)) > 0.0) > 0.0 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v11)
              && InteractionSourceManager::HasActiveManipulation(v11) )
            {
              v39 = InteractionSourceManager::TryGetActiveManipulation(v11);
              v41 = CInteractionTracker::ShouldChainAllForAxis(v40, *(_DWORD *)(a1 + 292), (__int64)v39);
            }
            else
            {
              v41 = 0;
            }
            LOBYTE(v38) = v41;
            CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 292), a4, v38);
          }
          if ( !a4 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v11)
              && InteractionSourceManager::HasActiveManipulation(v11) )
            {
              v43 = InteractionSourceManager::TryGetActiveManipulation(v11);
              v5 = CInteractionTracker::ShouldChainAllForAxis(v44, *(_DWORD *)(a1 + 292), (__int64)v43);
            }
            LOBYTE(v42) = ShouldChainForAxis;
            LOBYTE(cData) = v5;
            CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
              ActiveChainingHelper,
              *(unsigned int *)(a1 + 292),
              0LL,
              v42,
              cData);
            goto LABEL_78;
          }
          goto LABEL_76;
        }
        if ( a4 && ShouldChainForAxis )
        {
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v11)
            && InteractionSourceManager::HasActiveManipulation(v11) )
          {
            v46 = InteractionSourceManager::TryGetActiveManipulation(v11);
            v48 = CInteractionTracker::ShouldChainAllForAxis(v47, *(_DWORD *)(a1 + 292), (__int64)v46);
          }
          else
          {
            v48 = 0;
          }
          LOBYTE(v45) = v48;
          CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 292), a4, v45);
        }
        else if ( (*(_BYTE *)(a1 + 404) & 1) == 0 )
        {
          v49 = *(float *)(a1 + 400);
          if ( v49 != 0.0 )
          {
            v50 = v92 - *(float *)(a1 + 392);
            if ( (float)(v50 > 0.0) != (float)(v49 > 0.0) && v50 != 0.0 )
            {
              v51 = 3LL * *(int *)(a1 + 292);
              *((_BYTE *)ActiveChainingHelper + 4 * v51) &= 0xFAu;
              *((_DWORD *)ActiveChainingHelper + v51 + 2) = 0;
              *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
              *(_DWORD *)(a1 + 400) = 0;
            }
          }
        }
LABEL_75:
        if ( !a4 )
        {
LABEL_78:
          *(float *)(a1 + 396) = v92;
          *(_DWORD *)(a1 + 388) = a4;
          *(_DWORD *)(a1 + 384) = v12;
          return v91;
        }
LABEL_76:
        if ( ShouldChainForAxis )
          LODWORD(v91) = CInteractionTracker::ClampValueToBoundary(
                           v61,
                           *(unsigned int *)(a1 + 292),
                           COERCE_DOUBLE((unsigned __int64)LODWORD(v91))).m128_u32[0];
        goto LABEL_78;
      }
      if ( v27 != 1 )
        goto LABEL_75;
      if ( *(_DWORD *)(a1 + 388) && ShouldChainForAxis )
      {
        if ( v12 != 2 )
          goto LABEL_75;
        if ( InteractionSourceManager::TryGetActiveChainingHelper(v11)
          && InteractionSourceManager::HasActiveManipulation(v11) )
        {
          v29 = InteractionSourceManager::TryGetActiveManipulation(v11);
          v31 = CInteractionTracker::ShouldChainAllForAxis(v30, *(_DWORD *)(a1 + 292), (__int64)v29);
        }
        else
        {
          v31 = 0;
        }
        LOBYTE(v28) = ShouldChainForAxis;
        LOBYTE(cData) = v31;
        CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
          ActiveChainingHelper,
          *(unsigned int *)(a1 + 292),
          a4,
          v28,
          cData);
        goto LABEL_74;
      }
      if ( v12 != 2 )
        goto LABEL_75;
      *(_BYTE *)(a1 + 404) = v20 | 1;
    }
    else
    {
      *(_BYTE *)(a1 + 404) = v20 | 1;
      if ( v12 != 2 )
        goto LABEL_75;
    }
    *(_DWORD *)(a1 + 392) = *(_DWORD *)(a1 + 396);
LABEL_74:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v92);
    goto LABEL_75;
  }
  return v91;
}
