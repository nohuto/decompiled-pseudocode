/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D8C8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z @ 0x1800153B0 (-SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x180015E30 (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z @ 0x180015F88 (-CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180016130 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x18001772C (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180017D10 (-HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18001E7C4 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18002951C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x18002C0D0 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z @ 0x18002C7B4 (-HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqq @ 0x18015BBB4 (McTemplateU0xqq.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        __int64 a1,
        struct CVisualTree *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int *a11,
        __int64 *a12,
        _QWORD *a13,
        _QWORD *a14,
        __int128 *a15,
        _DWORD *a16,
        char *a17)
{
  __int64 v20; // rbx
  unsigned int v21; // r13d
  const struct CInteraction *v22; // rsi
  __int64 v23; // r12
  __int128 *v24; // rax
  __int64 v25; // rcx
  CVisual *v26; // r15
  char v27; // r14
  _DWORD *v28; // r8
  __int64 v29; // rbx
  unsigned int v30; // edi
  _DWORD *v31; // r8
  _DWORD *v32; // r8
  bool v34; // al
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int i; // eax
  __int64 *v42; // rbx
  __int64 v43; // rdx
  unsigned int j; // eax
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int k; // eax
  __int64 v50; // rdx
  _QWORD *v51; // rax
  __int64 InputHandle; // rax
  int v53; // eax
  unsigned int v54; // ecx
  _QWORD *InputLuid; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 *v58; // rcx
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  _DWORD *v61; // rcx
  char v62; // [rsp+38h] [rbp-71h]
  bool v63; // [rsp+39h] [rbp-70h]
  unsigned int v64; // [rsp+3Ch] [rbp-6Dh]
  int v65; // [rsp+40h] [rbp-69h]
  CVisual *v66; // [rsp+48h] [rbp-61h]
  CVisual *v67; // [rsp+50h] [rbp-59h]
  __int128 v68; // [rsp+58h] [rbp-51h] BYREF
  __int128 v69; // [rsp+68h] [rbp-41h]
  __int128 v70; // [rsp+78h] [rbp-31h]
  __int128 v71; // [rsp+88h] [rbp-21h]
  DWORD v72; // [rsp+98h] [rbp-11h]
  char v76; // [rsp+110h] [rbp+67h]

  v76 = a4;
  v20 = a1;
  v21 = 0;
  v64 = 0;
  v22 = 0LL;
  v66 = 0LL;
  v23 = 0LL;
  v68 = _xmm;
  v69 = _xmm;
  v70 = _xmm;
  v71 = _xmm;
  LOWORD(v72) = 32085;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0xqq(a1, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, *((_QWORD *)a2 + 3), a3, a4);
  *a11 = 0;
  *a12 = 0LL;
  *a13 = 0LL;
  *a16 = 0;
  *a17 = 0;
  *a14 = 0LL;
  v24 = a15;
  *a15 = _xmm;
  v24[1] = _xmm;
  v24[2] = _xmm;
  v24[3] = _xmm;
  *((_WORD *)v24 + 32) = 32085;
  CHitTestContext::EvaluateHitTestAttributesAndInputType(v20, a6, a5);
  CHitTestContext::HitTestPointHelper((CHitTestContext *)v20, a2, (float)a3, (float)a4);
  v26 = *(CVisual **)(v20 + 112);
  v63 = 0;
  v62 = 0;
  if ( !v26 )
  {
LABEL_20:
    *a12 = v23;
    goto LABEL_21;
  }
  v27 = 1;
  v67 = (CVisual *)*((_QWORD *)a2 + 3);
  v65 = *(_DWORD *)(a1 + 96);
  do
  {
    v28 = (_DWORD *)*((_QWORD *)v26 + 28);
    if ( (*v28 & 0x400000) != 0 )
    {
      v40 = (unsigned int)v28[1];
      v25 = (__int64)(v28 + 2);
      for ( i = 0; i < (unsigned int)v40; ++v25 )
      {
        if ( *(_BYTE *)v25 == 10 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v40 )
        v42 = 0LL;
      else
        v42 = (__int64 *)((char *)v28 + v40 + 8LL * i - (((_BYTE)v40 + 15) & 7) + 15);
      v29 = *v42;
    }
    else
    {
      v29 = 0LL;
    }
    if ( !v23 )
      v23 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v26 + 256LL))(v26);
    v30 = *(_DWORD *)(a1 + 96);
    if ( v30 == 6 && v29 && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 80LL))(v29, 6LL) )
      v30 = 5;
    if ( !v66 )
    {
      v31 = (_DWORD *)*((_QWORD *)v26 + 28);
      if ( (*v31 & 0x400000) != 0 )
      {
        v43 = (unsigned int)v31[1];
        v25 = (__int64)(v31 + 2);
        for ( j = 0; j < (unsigned int)v43; ++v25 )
        {
          if ( *(_BYTE *)v25 == 10 )
            break;
          ++j;
        }
        if ( j >= (unsigned int)v43 )
        {
          v46 = 0LL;
        }
        else
        {
          v45 = v43 + 15;
          v25 = 8LL * j - (v45 & 7);
          v46 = (__int64 *)((char *)v31 + v45 + v25);
        }
        v47 = *v46;
        if ( v47 )
        {
          v25 = *(_QWORD *)(v47 + 96);
          if ( v25 )
          {
            if ( *(_QWORD *)(v25 + 64)
              && (!v65 || (unsigned int)CVisual::GetInputQueueType(v26))
              && (!v29 || CHitTestContext::SupportedByInteraction(a1, v30, (_BYTE *)v29, (__int64)v22, v62)) )
            {
              v66 = v26;
              CVisual::GetWorldTransform(v26, a2, 4LL, &v68, 0LL, 0LL);
            }
          }
        }
      }
    }
    if ( !v22 )
    {
      v32 = (_DWORD *)*((_QWORD *)v26 + 28);
      if ( (*v32 & 0x400000) != 0 )
      {
        v48 = (unsigned int)v32[1];
        v25 = (__int64)(v32 + 2);
        for ( k = 0; k < (unsigned int)v48; ++v25 )
        {
          if ( *(_BYTE *)v25 == 10 )
            break;
          ++k;
        }
        if ( k >= (unsigned int)v48 )
        {
          v51 = 0LL;
        }
        else
        {
          v50 = v48 + 15;
          v25 = 8LL * k - (v50 & 7);
          v51 = (_QWORD *)((char *)v32 + v50 + v25);
        }
        if ( *v51
          && CInteraction::CanReceiveInput((_QWORD *)v29, v30)
          && CHitTestContext::SupportedByInteraction(a1, v30, (_BYTE *)v29, 0LL, v62) )
        {
          v22 = (const struct CInteraction *)v29;
        }
      }
    }
    if ( !v63 )
    {
      if ( !v29 )
        goto LABEL_16;
      v63 = 1;
      if ( v65 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 80LL))(v29, v30, 0LL) )
        {
          LODWORD(v25) = 5;
          if ( v30 != 5 || !CHitTestContext::SupportedByInteraction(a1, 5, (_BYTE *)v29, (__int64)v22, v62) )
            v63 = 0;
        }
      }
    }
    if ( v29 )
    {
      v34 = (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 88LL))(v29, 5LL, 0x8000LL)
         && (*(_BYTE *)(v29 + 184) & 2) == 0;
      v62 |= v34;
      if ( CInteraction::HasInputSink((CInteraction *)v29) )
      {
        if ( v64 < a10 && a9 )
        {
          v35 = *(_QWORD *)(v29 + 96);
          v25 = 0LL;
          if ( v35 )
            v25 = *(_QWORD *)(v35 + 64);
          *(_QWORD *)(a9 + 8LL * v64) = v25;
        }
        ++v64;
        if ( !v23 )
        {
          v36 = *(_QWORD *)(v29 + 96);
          if ( v36 ? *(_BYTE *)(v36 + 104) : 0 )
          {
            LODWORD(v25) = CInputSinkStruct::GetInputType(v30);
            if ( !v38 )
              goto LABEL_91;
            v39 = v38 + 64;
            while ( v38 != v39 )
            {
              if ( (_DWORD)v25 == *(_DWORD *)v38 )
                goto LABEL_46;
              v38 += 16LL;
            }
            v38 = 0LL;
LABEL_46:
            if ( v38 )
              v23 = *(_QWORD *)(v38 + 8);
            else
LABEL_91:
              v23 = 0LL;
          }
        }
      }
    }
LABEL_16:
    if ( v26 == v67 )
      break;
    v26 = (CVisual *)*((_QWORD *)v26 + 10);
  }
  while ( v26 );
  v21 = 0;
  if ( !v66 || !v22 || !v63 || (InputHandle = CVisual::GetInputHandle(v66)) == 0 )
  {
    v20 = a1;
    goto LABEL_20;
  }
  v53 = NtDuplicateCompositionInputSink(InputHandle, a13);
  if ( v53 >= 0 )
  {
    InputLuid = (_QWORD *)CVisual::GetInputLuid(v66, &a13);
    v56 = v68;
    v57 = v69;
    v20 = a1;
    *a14 = *InputLuid;
    v58 = a15;
    LODWORD(InputLuid) = v72;
    *a15 = v56;
    v59 = v70;
    v58[1] = v57;
    v60 = v71;
    v58[2] = v59;
    v58[3] = v60;
    *((_DWORD *)v58 + 16) = (_DWORD)InputLuid;
    if ( *(_DWORD *)(a1 + 96) == 6
      && !(*(unsigned int (__fastcall **)(const struct CInteraction *, __int64))(*(_QWORD *)v22 + 80LL))(v22, 6LL) )
    {
      v27 = 0;
    }
    v61 = a16;
    *a17 = v27;
    *v61 = *((_DWORD *)v22 + 424);
    InputTraceLogging::GestureTargeting::HitTestInteraction(v22);
    LODWORD(v25) = (_DWORD)a11;
    *((_QWORD *)v22 + 214) = a7;
    *((_DWORD *)v22 + 430) = a8;
    *a11 = v64;
    goto LABEL_20;
  }
  v21 = v53 | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(v54, &dword_1802925E8, 1u, v53 | 0x10000000, 0x24Du);
  v20 = a1;
LABEL_21:
  *(_DWORD *)(v20 + 120) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0xqq(v25, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, *((_QWORD *)a2 + 3), a3, v76);
  return v21;
}
