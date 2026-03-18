/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180051474
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800518CC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800518F0 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x180055160 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x18018AD70 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18018C3B8 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x18018C3D4 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // r14
  const struct SubchannelMaskInfo *v7; // r8
  float v8; // xmm0_4
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int16 v17; // cx
  void *v18; // rax
  __int128 *v19; // rdx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // ecx
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v37; // r8
  int v38; // eax
  unsigned int v39; // ecx
  void (*v40)(void); // rax
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ecx
  unsigned int v53; // [rsp+20h] [rbp-E0h]
  __int128 *v54; // [rsp+38h] [rbp-C8h]
  __int128 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h]
  _OWORD v58[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-20h]
  __int128 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  int v64; // [rsp+108h] [rbp+8h]
  char v65; // [rsp+10Ch] [rbp+Ch]
  _DWORD v66[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v67; // [rsp+150h] [rbp+50h]
  int v68; // [rsp+158h] [rbp+58h]
  char v69; // [rsp+15Ch] [rbp+5Ch]

  v4 = 0;
  memset_0(v66, 0, sizeof(v66));
  v5 = 18;
  v67 = 0LL;
  v68 = 18;
  v69 = 0;
  if ( a2 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 8LL, a1);
    if ( (*(_BYTE *)(a1 + 208) & 0x20) != 0 )
    {
      AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)a1);
      CAnimationLoggingManager::LogAnimationEnded(
        AnimationLoggingManagerNoRef,
        *(_QWORD *)(a1 + 160),
        v37,
        *(unsigned int *)(a1 + 200),
        *(_DWORD *)(a1 + 184),
        0);
    }
  }
  else if ( a2 == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9LL, a1);
  }
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
  {
    memset_0(&v59, 0, 0x40uLL);
    v63 = 0LL;
    v64 = 18;
    v6 = 0LL;
    v65 = 0;
    if ( a2 == 8 && ((*(_BYTE *)(a1 + 208) & 2) == 0 || !*(_BYTE *)(a1 + 140)) || a2 == 16 )
    {
      a2 = 16;
      goto LABEL_48;
    }
    if ( CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v66) )
    {
      v7 = *(const struct SubchannelMaskInfo **)(a1 + 192);
      if ( v7 )
      {
        v38 = CBaseExpression::MergeValueWithMask(
                (const struct CExpressionValue *)v66,
                (const struct CExpressionValue *)(a1 + 64),
                v7,
                (struct CExpressionValue *)&v59);
        v4 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x53Cu);
          if ( !v63 )
            goto LABEL_36;
          v40 = *(void (**)(void))(*(_QWORD *)v63 + 16LL);
          goto LABEL_89;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 144) == 11 )
          goto LABEL_14;
        CExpressionValue::CopyFrom((CExpressionValue *)&v59, (const struct CExpressionValue *)(a1 + 64));
      }
      v6 = v63;
    }
    else
    {
      a2 = 16;
    }
LABEL_14:
    if ( a2 != 16 )
    {
      v5 = v68;
      v8 = *(float *)&v59;
      goto LABEL_16;
    }
LABEL_48:
    v66[0] = 0;
    v8 = 0.0;
    LODWORD(v59) = 0;
    v68 = 18;
    v69 = 1;
LABEL_16:
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1208LL);
    v10 = *(_QWORD *)(v9 + 56);
    if ( v5 <= 69 )
    {
      if ( v5 != 69 )
      {
        v21 = v5 - 11;
        if ( !v21 )
        {
          CPathData::GetPathData(*(_QWORD *)(a1 + 128), &v55);
          v46 = *(_QWORD *)(a1 + 48);
          if ( v46 )
            v47 = *(_DWORD *)(v46 + 68);
          else
            v47 = 0;
          *(_QWORD *)&v56 = v47;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 9;
          v20 = CoreUICallSend(v10, &v56, 2LL, 0LL, v53, &unk_1802763C2, a2, *((_QWORD *)&v55 + 1));
          goto LABEL_33;
        }
        v22 = v21 - 6;
        if ( !v22 )
        {
          v44 = *(_QWORD *)(a1 + 48);
          if ( v44 )
            v45 = *(_DWORD *)(v44 + 68);
          else
            v45 = 0;
          *(_QWORD *)&v55 = v45;
          *((_QWORD *)&v55 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 0;
          v20 = CoreUICallSend(
                  v10,
                  &v55,
                  2LL,
                  0LL,
                  v53,
                  &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_m7ZfFPOyvgt9MTgLJrp0xmJzhks,
                  a2,
                  (unsigned __int8)v59);
          goto LABEL_33;
        }
        v23 = v22 - 1;
        if ( !v23 )
        {
          v24 = *(_QWORD *)(a1 + 48);
          if ( v24 )
            v25 = *(_DWORD *)(v24 + 68);
          else
            v25 = 0;
          *(_QWORD *)&v55 = v25;
          *((_QWORD *)&v55 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 1;
          v20 = CoreUICallSend(v10, &v55, 2LL, 0LL, v53, &unk_180276394, a2, v8);
          goto LABEL_33;
        }
        v33 = v23 - 17;
        if ( !v33 )
        {
          v34 = *(_QWORD *)(a1 + 48);
          if ( v34 )
            v35 = *(_DWORD *)(v34 + 68);
          else
            v35 = 0;
          *(_QWORD *)&v55 = v35;
          *((_QWORD *)&v55 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 2;
          *(_QWORD *)&v56 = v59;
          v20 = CoreUICallSend(v10, &v55, 2LL, 0LL, v53, &unk_180276398, a2, &v56);
          goto LABEL_33;
        }
        if ( v33 == 17 )
        {
          DWORD2(v56) = DWORD2(v59);
          v41 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v56 = v59;
          if ( v41 )
            v42 = *(_DWORD *)(v41 + 68);
          else
            v42 = 0;
          v43 = v42;
          v17 = 3;
          *(_QWORD *)&v55 = v43;
          *((_QWORD *)&v55 + 1) = *(unsigned int *)(a1 + 56);
          v54 = &v56;
          v18 = &unk_18027639E;
          goto LABEL_23;
        }
LABEL_80:
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x5C8u);
LABEL_35:
        if ( !v6 )
          goto LABEL_36;
        v40 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
LABEL_89:
        v40();
        goto LABEL_36;
      }
      v55 = v59;
      v48 = *(_QWORD *)(a1 + 48);
      if ( v48 )
        v49 = *(_DWORD *)(v48 + 68);
      else
        v49 = 0;
      v50 = v49;
      v17 = 4;
      *(_QWORD *)&v56 = v50;
      *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
      v54 = &v55;
      v18 = &unk_1802763A4;
    }
    else
    {
      v11 = v5 - 70;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v55 = v59;
          v51 = *(_QWORD *)(a1 + 48);
          if ( v51 )
            v52 = *(_DWORD *)(v51 + 68);
          else
            v52 = 0;
          *(_QWORD *)&v56 = v52;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 6;
          v20 = CoreUICallSend(v10, &v56, 2LL, 0LL, v53, &unk_1802763B0, a2, &v55);
          goto LABEL_33;
        }
        v13 = v12 - 33;
        if ( !v13 )
        {
          v14 = *(_QWORD *)(a1 + 48);
          v56 = v59;
          v57 = v60;
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 68);
          else
            v15 = 0;
          v16 = v15;
          v17 = 7;
          *(_QWORD *)&v55 = v16;
          *((_QWORD *)&v55 + 1) = *(unsigned int *)(a1 + 56);
          v54 = &v56;
          v18 = &unk_1802763B6;
LABEL_23:
          v19 = &v55;
LABEL_24:
          LOWORD(v53) = v17;
          v20 = CoreUICallSend(v10, v19, 2LL, 0LL, v53, v18, a2, v54);
LABEL_33:
          v4 = v20;
          if ( (int)(v20 + 0x80000000) < 0 || v20 == -2018375675 )
            v4 = 0;
          else
            MilInstrumentationCheckHR_MaybeFailFast(0x80000000, 0LL, 0, v20, 0x5CFu);
          goto LABEL_35;
        }
        if ( v13 == 161 )
        {
          v28 = *(_QWORD *)(a1 + 48);
          v58[0] = v59;
          v58[1] = v60;
          v58[2] = v61;
          v58[3] = v62;
          if ( v28 )
            v29 = *(_DWORD *)(v28 + 68);
          else
            v29 = 0;
          *(_QWORD *)&v55 = v29;
          *((_QWORD *)&v55 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 8;
          v20 = CoreUICallSend(v10, &v55, 2LL, 0LL, v53, &unk_1802763BC, a2, v58);
          goto LABEL_33;
        }
        goto LABEL_80;
      }
      v55 = v59;
      v30 = *(_QWORD *)(a1 + 48);
      if ( v30 )
        v31 = *(_DWORD *)(v30 + 68);
      else
        v31 = 0;
      v32 = v31;
      v17 = 5;
      *(_QWORD *)&v56 = v32;
      *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
      v54 = &v55;
      v18 = &unk_1802763AA;
    }
    v19 = &v56;
    goto LABEL_24;
  }
LABEL_36:
  v26 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v4;
}
