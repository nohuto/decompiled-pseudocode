/*
 * XREFs of ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18021ED88
 * Callers:
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18021EFAC (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18021E040 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x18021E124 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18021E28C (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?FindControlPointAtDistance@CTrimPathOperation@@AEBA_NIPEAIPEAMPEAUBezierTrimPoint@1@@Z @ 0x18021E688 (-FindControlPointAtDistance@CTrimPathOperation@@AEBA_NIPEAIPEAMPEAUBezierTrimPoint@1@@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x180220778 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 *     ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x18022081C (-TrimToEndAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x180220968 (-TrimToStartAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 */

bool __fastcall CTrimPathOperation::InterpolateBezier(CTrimPathOperation *this, float a2, float a3, char a4)
{
  int v4; // xmm3_4
  char *v5; // rsi
  unsigned int v8; // xmm0_4
  int v9; // xmm3_4
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // r14
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // xmm1_4
  int v17; // xmm0_4
  char v18; // al
  char v19; // r12
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+50h] BYREF
  float v26; // [rsp+D8h] [rbp+58h] BYREF

  v4 = *((_DWORD *)this + 27);
  v5 = (char *)this + 112;
  LODWORD(v24) = *((_DWORD *)this + 26);
  LODWORD(v21) = *((_DWORD *)this + 24);
  LODWORD(v22) = *((_DWORD *)this + 22);
  v8 = *((_DWORD *)this + 9);
  HIDWORD(v24) = v4;
  v9 = *((_DWORD *)this + 25);
  HIDWORD(v22) = *((_DWORD *)this + 23);
  v23 = __PAIR64__(*((_DWORD *)this + 10), v8);
  HIDWORD(v21) = v9;
  CBezierFlattener<float,CMilPoint2F>::SetPoints((__int64)this + 112, (__int64 *)&v23, &v22, &v21, &v24);
  v11 = 0;
  v12 = 0LL;
  if ( a4 )
  {
    v11 = 1;
    *((float *)&v23 + 1) = a2 * *((float *)this + 21);
  }
  if ( a3 == 1.0 )
  {
    if ( !a4 )
      return 1;
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
    if ( v13 < 0.0000011920929 )
      return 1;
  }
  else
  {
    v14 = v11++;
    *((float *)&v23 + 2 * v14 + 1) = a3 * *((float *)this + 21);
  }
  if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v10, (__int64)&v24) < 0 )
    return 0;
  v16 = *((_DWORD *)this + 9);
  v26 = 0.0;
  v17 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 52) = v17;
  *((_DWORD *)this + 51) = v16;
  while ( 1 )
  {
    v18 = CBezierFlattener<float,CMilPoint2F>::Flatten(
            (__int64)v5,
            (__int64)this + 212,
            v15,
            (__int64)this + 336,
            0xFu,
            &v24);
    v25 = 0;
    v19 = v18;
    do
    {
      if ( !CTrimPathOperation::FindControlPointAtDistance(
              this,
              v24,
              &v25,
              &v26,
              (struct CTrimPathOperation::BezierTrimPoint *)(&v23 + v12)) )
        break;
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (_DWORD)v12 != v11 );
    if ( (_DWORD)v12 == v11 )
      break;
    if ( !v19 )
      return 0;
    *(_QWORD *)((char *)this + 204) = *(_QWORD *)((char *)this + 324);
    *((_DWORD *)this + 83) = *((_DWORD *)this + 98);
  }
  if ( !a4 )
  {
    CBezier<float,CMilPoint2F>::TrimToEndAt(v5);
    return 1;
  }
  if ( v11 != 1 )
    return (unsigned __int8)CBezier<float,CMilPoint2F>::TrimBetween(v5) != 0;
  CBezier<float,CMilPoint2F>::TrimToStartAt(v5);
  return 1;
}
