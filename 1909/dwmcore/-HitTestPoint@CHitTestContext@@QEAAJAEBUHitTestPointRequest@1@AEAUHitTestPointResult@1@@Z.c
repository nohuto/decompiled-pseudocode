/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800A940C
 * Callers:
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A91FC (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x1800161BC (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180017E40 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18001E9E4 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x1800A9854 (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x1800A9874 (-InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z.c)
 *     ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x1800A98BC (-AdjustInputTypeForInteraction@CHitTestContext@@AEBA-AW4InputType@@W42@PEBVCInteraction@@@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x1800A98E0 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1800A9B4C (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x1800A9BC4 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x1800AA018 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqq @ 0x1801A8498 (McTemplateU0xqq.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18022C024 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18022C234 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CVisual **this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  void *v3; // rsi
  CInteraction *v4; // r14
  CVisual **v8; // rsi
  CVisual *v9; // r12
  CVisual *v10; // r8
  int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // r8
  unsigned int v15; // ebx
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  unsigned int i; // eax
  CInteraction **v20; // rsi
  CInteraction *v21; // rsi
  char v22; // al
  char v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rdx
  int InputType; // ecx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  bool v33; // zf
  int v34; // eax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  int v37; // eax
  __int128 v38; // xmm1
  bool v39; // al
  __int64 v40; // rax
  const struct CInteraction *v41; // rbx
  int v42; // [rsp+20h] [rbp-79h]
  __int64 v43; // [rsp+30h] [rbp-69h]
  unsigned int v44; // [rsp+38h] [rbp-61h]
  unsigned int v45; // [rsp+3Ch] [rbp-5Dh]
  void *InputHandle; // [rsp+40h] [rbp-59h]
  CVisual *v47; // [rsp+48h] [rbp-51h]
  int v48; // [rsp+50h] [rbp-49h]
  CVisual *v49; // [rsp+58h] [rbp-41h]
  __int128 v50; // [rsp+60h] [rbp-39h] BYREF
  __int128 v51; // [rsp+70h] [rbp-29h]
  __int128 v52; // [rsp+80h] [rbp-19h]
  __int128 v53; // [rsp+90h] [rbp-9h]
  int v54; // [rsp+A0h] [rbp+7h]
  _QWORD v55[8]; // [rsp+B0h] [rbp+17h] BYREF
  bool v56; // [rsp+100h] [rbp+67h]
  unsigned int v57; // [rsp+100h] [rbp+67h]
  char v58; // [rsp+108h] [rbp+6Fh]
  char v59; // [rsp+118h] [rbp+7Fh]

  v3 = 0LL;
  InputHandle = 0LL;
  v4 = 0LL;
  v59 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0xqq(
      (_DWORD)this,
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start,
      *(_QWORD *)(*(_QWORD *)a2 + 24LL),
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3));
  CHitTestContext::EvaluateHitTestAttributesAndInputType(this, *((unsigned int *)a2 + 5), *((unsigned int *)a2 + 4));
  v42 = *((_DWORD *)this + 52);
  CHitTestContext::HitTestTreeWalk(this, *(_QWORD *)a2);
  if ( (unsigned int)(*((_DWORD *)this + 24) - 2) <= 4 )
  {
    v8 = (CVisual **)this[15];
    v9 = this[16];
    while ( v8 != (CVisual **)v9 )
    {
      v41 = v8[1];
      v57 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 24), v41);
      if ( (*((_BYTE *)v41 + 184) & 3) != 0 )
      {
        InputTraceLogging::GestureTargeting::ForcePalmRejection();
        v59 = 1;
      }
      if ( (*(unsigned int (__fastcall **)(const struct CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v41 + 80LL))(
             v41,
             v57,
             0LL)
        && (unsigned __int8)CHitTestContext::InteractionMatchesHitTest(this, v57, v41) )
      {
        InputTraceLogging::DWM::EvaluateHitTestCandidate(v41, 1);
        this[14] = *v8;
        break;
      }
      InputTraceLogging::DWM::EvaluateHitTestCandidate(v41, 0);
      v8 += 2;
    }
    v3 = 0LL;
  }
  v10 = this[14];
  v47 = v10;
  if ( !v10 )
    goto LABEL_15;
  v11 = 0;
  v12 = 0LL;
  v49 = *(CVisual **)(*(_QWORD *)a2 + 24LL);
  v13 = 0LL;
  v48 = *((_DWORD *)this + 24);
  v45 = 0;
  v56 = v48 == 0;
  v50 = _xmm;
  v51 = _xmm;
  v58 = 0;
  v52 = _xmm;
  v53 = _xmm;
  LOWORD(v54) = 32085;
  v43 = 0LL;
  do
  {
    if ( !v13 )
    {
      v13 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 296LL))(v10);
      v10 = v47;
      v43 = v13;
    }
    v14 = (_DWORD *)*((_QWORD *)v10 + 28);
    if ( (*v14 & 0x400000) == 0 )
      goto LABEL_12;
    v17 = (unsigned int)v14[1];
    v18 = v14 + 2;
    for ( i = 0; i < (unsigned int)v17; ++v18 )
    {
      if ( *v18 == 10 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v17 )
      v20 = 0LL;
    else
      v20 = (CInteraction **)((char *)v14 + 8LL * i - (((_BYTE)v17 + 15) & 7) + v17 + 15);
    v21 = *v20;
    if ( !v21 )
      goto LABEL_31;
    v44 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 24), v21);
    v22 = CHitTestContext::InteractionMatchesHitTest(this, v44, v21);
    v23 = v22;
    if ( *((_DWORD *)this + 24) != 6 )
      goto LABEL_25;
    if ( !v58 )
    {
      if ( v4 )
        goto LABEL_27;
      if ( v22 )
      {
LABEL_32:
        v4 = v21;
        goto LABEL_27;
      }
      if ( ((*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64, _QWORD, int))(*(_QWORD *)v21 + 88LL))(
              v21,
              5LL,
              32831LL,
              0LL,
              v42)
         || (*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)v21 + 88LL))(
              v21,
              6LL,
              32831LL,
              0LL))
        && (*((_BYTE *)v21 + 184) & 8) == 0 )
      {
        v58 = 1;
        goto LABEL_27;
      }
      v58 = 0;
LABEL_25:
      if ( v4 )
        goto LABEL_27;
      goto LABEL_26;
    }
    if ( !v22 )
      goto LABEL_25;
    if ( v4 )
    {
      if ( (*((_BYTE *)v4 + 184) & 8) != 0 && (*((_BYTE *)v21 + 184) & 8) == 0 )
      {
        v4 = 0LL;
        InputHandle = 0LL;
        v56 = 0;
      }
      goto LABEL_25;
    }
LABEL_26:
    if ( v23 )
      goto LABEL_32;
LABEL_27:
    if ( !v56 )
      v56 = (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v21 + 80LL))(v21, v44, 0LL) != 0;
    if ( !CInteraction::HasInputSink(v21) )
    {
      v11 = v45;
LABEL_31:
      v13 = v43;
      goto LABEL_12;
    }
    if ( !InputHandle && v23 && (!v48 || (unsigned int)CVisual::GetInputQueueType(v47)) )
    {
      InputHandle = CVisual::GetInputHandle(v47);
      v12 = **(_QWORD **)&CVisual::GetInputLuid(v47, v55);
      CVisual::GetWorldTransform((struct _LIST_ENTRY *)v47, *(_QWORD *)a2, 4, (__int64)&v50, 0LL, 0LL);
    }
    if ( v45 < *(_DWORD *)a3 )
    {
      v24 = *((_QWORD *)v21 + 12);
      v25 = 0LL;
      if ( v24 )
        v25 = *(_QWORD *)(v24 + 64);
      *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v45) = v25;
    }
    v13 = v43;
    v11 = ++v45;
    if ( !v43 )
    {
      v26 = *((_QWORD *)v21 + 12);
      if ( v26 )
        v27 = *(_BYTE *)(v26 + 104);
      else
        v27 = 0;
      if ( !v27 )
        goto LABEL_31;
      InputType = CInputSinkStruct::GetInputType(v44);
      if ( !v28 )
        goto LABEL_65;
      v30 = v28 + 64;
      while ( v28 != v30 )
      {
        if ( InputType == *(_DWORD *)v28 )
          goto LABEL_50;
        v28 += 16LL;
      }
      v28 = 0LL;
LABEL_50:
      if ( v28 )
        v13 = *(_QWORD *)(v28 + 8);
      else
LABEL_65:
        v13 = 0LL;
      v43 = v13;
    }
LABEL_12:
    if ( v47 == v49 )
      break;
    v10 = (CVisual *)*((_QWORD *)v47 + 10);
    v47 = v10;
  }
  while ( v10 );
  v3 = InputHandle;
  *((_QWORD *)a3 + 3) = v13;
  if ( !InputHandle || !v4 || !v56 )
    goto LABEL_15;
  v31 = NtDuplicateCompositionInputSink(InputHandle, (char *)a3 + 32);
  if ( v31 < 0 )
  {
    v15 = v31 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802BE430, 1u, v31 | 0x10000000, 0x29Fu, 0LL);
  }
  else
  {
    v33 = *((_DWORD *)a2 + 4) == 4;
    v34 = *((_DWORD *)v4 + 424);
    v35 = v51;
    *((_OWORD *)a3 + 3) = v50;
    *((_DWORD *)a3 + 29) = v34;
    v36 = v52;
    v37 = v54;
    *((_OWORD *)a3 + 4) = v35;
    *((_QWORD *)a3 + 5) = v12;
    v38 = v53;
    *((_OWORD *)a3 + 5) = v36;
    *((_DWORD *)a3 + 4) = v11;
    *((_OWORD *)a3 + 6) = v38;
    *((_DWORD *)a3 + 28) = v37;
    v39 = !v33
       || *((_DWORD *)this + 24) == 6
       && (*(unsigned int (__fastcall **)(CInteraction *, __int64))(*(_QWORD *)v4 + 80LL))(v4, 6LL);
    *((_BYTE *)a3 + 120) = v39;
    v40 = *((_QWORD *)a2 + 3);
    *((_BYTE *)v4 + 184) &= ~2u;
    *((_QWORD *)v4 + 214) = v40;
    *((_DWORD *)v4 + 430) = *((_DWORD *)a2 + 8);
    *((_BYTE *)v4 + 184) |= 2 * (v59 & 1);
LABEL_15:
    InputTraceLogging::DWM::HitTestTreeWalkResult(
      *((unsigned int *)a2 + 4),
      *((unsigned int *)a2 + 5),
      *((_QWORD *)a3 + 4),
      *((_QWORD *)a3 + 3),
      v3,
      v4);
    v15 = 0;
  }
  *((_DWORD *)this + 36) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0xqq(
      *((_DWORD *)a2 + 3),
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop,
      *(_QWORD *)(*(_QWORD *)a2 + 24LL),
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3));
  return v15;
}
