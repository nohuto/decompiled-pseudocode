/*
 * XREFs of ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E398C
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E3D20 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A8BC4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C728C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801E391C (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801E409C (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801E4704 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801E4D7C (-PeekStackValue@CNaturalAnimation@@AEAA-ATInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801E5144 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x18021FB68 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x18021FCFC (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x18021FED8 (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1802280F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::CalculateValue(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  bool v14; // al
  int v15; // eax
  int v16; // eax
  __int64 v17; // xmm0_8
  int v18; // eax
  __int64 StopValue; // rax
  __int64 v20; // xmm0_8
  char v21; // al
  int TracingCookie; // eax
  __int64 v23; // r10
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  float v27; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  float *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  __int64 *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  char *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  __int64 v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  bool *v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]

  *a4 = 0;
  if ( a3 == *((_QWORD *)this + 51) )
  {
    *a4 = (*((_BYTE *)this + 564) & 0x40) != 0;
    v7 = *((_DWORD *)this + 83);
    v28 = *(_QWORD *)((char *)this + 324);
    v29 = v7;
    CNaturalAnimation::PushValueToStack(this, &v28, a2);
  }
  else
  {
    v8 = *((_DWORD *)this + 36);
    if ( v8 == 18 || v8 == 35 || v8 == 52 )
    {
      if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 52) + 16LL))
        || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v9 + 84)) )
      {
        *((_BYTE *)this + 564) |= 4u;
      }
      if ( CNaturalAnimation::GenerateVector3Basis(this) )
        CVector3ForceEvaluator::ChangeBasis(
          (CVector3ForceEvaluator *)(*((_QWORD *)this + 52) + 16LL),
          (CNaturalAnimation *)((char *)this + 436));
      v10 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
      v11 = *((_QWORD *)this + 52);
      v27 = v10;
      CVector3Force::Update(v11, &v28);
      if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 52) + 16LL))
        || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v12 + 84))
        || (v14 = CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v13 + 152))) )
      {
        v14 = 1;
      }
      *a4 = v14;
      if ( !v14 || (*((_BYTE *)this + 564) & 8) != 0 )
      {
        v17 = *((_QWORD *)this + 42);
        v18 = *((_DWORD *)this + 86);
        *((_BYTE *)this + 564) |= 8u;
        *(_QWORD *)((char *)this + 324) = v17;
        *((_DWORD *)this + 83) = v18;
        StopValue = CNaturalAnimation::GetStopValue(this, v30);
        v20 = *(_QWORD *)StopValue;
        LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
        v24 = v20;
        v25 = StopValue;
        CNaturalAnimation::PushValueToStack(this, &v24, a2);
        v21 = *((_BYTE *)this + 208);
        if ( (v21 & 2) != 0 )
        {
          CBaseExpression::NotifyAnimationCompleted(this);
          v21 = *((_BYTE *)this + 208);
        }
        *((_BYTE *)this + 208) = v21 & 0xFE;
      }
      else
      {
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v24,
          (const struct D2DVector3 *)&v28,
          (CNaturalAnimation *)((char *)this + 500));
        v15 = v25;
        *(_QWORD *)((char *)this + 324) = v24;
        *((_DWORD *)this + 83) = v15;
        *((float *)this + 81) = *((float *)this + 84) + *((float *)this + 81);
        *((float *)this + 82) = *((float *)this + 85) + *((float *)this + 82);
        *((float *)this + 83) = *((float *)this + 86) + *((float *)this + 83);
        v16 = *((_DWORD *)this + 83);
        v24 = *(_QWORD *)((char *)this + 324);
        v25 = v16;
        CNaturalAnimation::PushValueToStack(this, &v24, a2);
      }
      if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
      {
        CNaturalAnimation::PeekStackValue(this, v30, a2);
        if ( dword_180337240 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 4uLL) )
          {
            TracingCookie = CBaseExpression::GetTracingCookie(this);
            v34 = 0;
            v37 = 0;
            v40 = 0;
            v43 = 0;
            v46 = 0;
            v49 = 0;
            v52 = 0;
            v55 = 0;
            v58 = 0;
            v26 = TracingCookie;
            v32 = &v26;
            v35 = &v27;
            v38 = &v28;
            v41 = (char *)&v28 + 4;
            v44 = &v29;
            v50 = v23 + 4;
            v53 = v23 + 8;
            v33 = 4;
            v36 = 4;
            v39 = 4;
            v42 = 4;
            v45 = 4;
            v47 = v23;
            v48 = 4;
            v51 = 4;
            v54 = 4;
            v56 = a4;
            v57 = 1;
            TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DAB70, 0LL, 0LL, 0xBu, &pData);
          }
        }
      }
    }
  }
}
