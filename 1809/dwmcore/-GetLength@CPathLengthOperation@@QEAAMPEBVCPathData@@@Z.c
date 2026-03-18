/*
 * XREFs of ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18021E7A4
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18021F368 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021C85C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18021CF1C (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18021E040 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x18021E124 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18021E28C (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x18021F2F0 (-SumPointDistances@CPathLengthOperation@@AEBAMI@Z.c)
 */

float __fastcall CPathLengthOperation::GetLength(CPathLengthOperation *this, const struct CPathData *a2)
{
  float v4; // xmm8_4
  char *v5; // rbx
  char *v6; // rdi
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm9_4
  int v12; // xmm1_4
  unsigned int v13; // xmm0_4
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // si
  double v17; // xmm0_8
  __int64 v19; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-61h] BYREF
  __int64 v21; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-51h] BYREF
  char *v23; // [rsp+68h] [rbp-49h] BYREF
  _OWORD v24[6]; // [rsp+70h] [rbp-41h] BYREF
  const void *retaddr; // [rsp+110h] [rbp+5Fh]
  unsigned int v26; // [rsp+120h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+128h] [rbp+77h]
  __int64 v28; // [rsp+130h] [rbp+7Fh]

  v4 = *((float *)a2 + 15);
  if ( v4 == 0.0 && CPathData::IsSimpleGeometry(a2) )
  {
    v5 = (char *)*((_QWORD *)a2 + 3);
    v6 = (char *)*((_QWORD *)a2 + 4);
    v28 = 0LL;
    v7 = 0.0;
    v8 = 0.0;
    v27 = 0LL;
    v9 = 0.0;
    v10 = 0.0;
    v23 = v5;
    while ( v5 != v6 )
    {
      v11 = 0.0;
      if ( *v5 )
      {
        if ( *v5 == 1 )
        {
          if ( v5[2] )
            v11 = _hypot((float)(v8 - v10), (float)(v7 - v9));
        }
        else
        {
          if ( *v5 == 2 )
          {
            v17 = _hypot((float)(v10 - *((float *)v5 + 2)), (float)(v9 - *((float *)v5 + 3)));
            v27 = *((_QWORD *)v5 + 1);
            v11 = v17;
          }
          else
          {
            if ( *v5 != 5 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
            v12 = *((_DWORD *)v5 + 7);
            LODWORD(v19) = *((_DWORD *)v5 + 6);
            v13 = *((_DWORD *)v5 + 4);
            HIDWORD(v19) = v12;
            v20 = __PAIR64__(*((_DWORD *)v5 + 5), v13);
            v21 = *((_QWORD *)v5 + 1);
            v22 = __PAIR64__(LODWORD(v9), LODWORD(v10));
            CBezierFlattener<float,CMilPoint2F>::SetPoints((__int64)this, (__int64 *)&v22, &v21, &v20, &v19);
            if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v14, (__int64)v24) >= 0 )
            {
              *((float *)this + 23) = v10;
              *((float *)this + 24) = v9;
              while ( 1 )
              {
                v16 = CBezierFlattener<float,CMilPoint2F>::Flatten(
                        (__int64)this,
                        (__int64)this + 100,
                        v15,
                        0LL,
                        0xFu,
                        &v26);
                v11 = v11 + CPathLengthOperation::SumPointDistances(this, v26);
                if ( !v16 )
                  break;
                *(_QWORD *)((char *)this + 92) = *(_QWORD *)((char *)this + 212);
              }
            }
            v27 = *((_QWORD *)v5 + 3);
          }
          v9 = *((float *)&v27 + 1);
          LODWORD(v10) = v27;
        }
      }
      else
      {
        v28 = *((_QWORD *)v5 + 1);
        v8 = *(float *)&v28;
        v7 = *((float *)&v28 + 1);
        LODWORD(v10) = v28;
        v9 = *((float *)&v28 + 1);
      }
      *((float *)v5 + 1) = v11;
      v4 = v4 + v11;
      Path::SegmentCollection::const_iterator::operator++(&v23);
      v5 = v23;
    }
    *((float *)a2 + 15) = v4;
  }
  return v4;
}
