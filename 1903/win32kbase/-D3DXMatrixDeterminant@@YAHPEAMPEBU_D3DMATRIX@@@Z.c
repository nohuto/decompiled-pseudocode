/*
 * XREFs of ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C017DADC
 * Callers:
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C017E4B0 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 * Callees:
 *     _finite @ 0x1C00BB71C (_finite.c)
 *     sqrtf_0 @ 0x1C00C0578 (sqrtf_0.c)
 */

__int64 __fastcall D3DXMatrixDeterminant(float *a1, const struct _D3DMATRIX *a2)
{
  unsigned int v3; // ebx
  float _14; // xmm1_4
  float _23; // xmm14_4
  float _24; // xmm2_4
  float _33; // xmm6_4
  float _34; // xmm4_4
  float _43; // xmm5_4
  float _44; // xmm3_4
  float v11; // xmm11_4
  float v12; // xmm0_4
  float v14; // [rsp+24h] [rbp-104h]
  float v15; // [rsp+28h] [rbp-100h]
  float _12; // [rsp+3Ch] [rbp-ECh]
  float _22; // [rsp+44h] [rbp-E4h]
  float _32; // [rsp+4Ch] [rbp-DCh]
  float _42; // [rsp+54h] [rbp-D4h]

  v3 = 0;
  _14 = a2->_14;
  _23 = a2->_23;
  _24 = a2->_24;
  _33 = a2->_33;
  _34 = a2->_34;
  _43 = a2->_43;
  _44 = a2->_44;
  v11 = (float)(a2->_13 * _24) - (float)(_23 * _14);
  v14 = (float)(a2->_13 * _34) - (float)(_33 * _14);
  v15 = (float)(a2->_13 * _44) - (float)(_43 * _14);
  _12 = a2->_12;
  _22 = a2->_22;
  _32 = a2->_32;
  _42 = a2->_42;
  v12 = sqrtf_0(
          (float)((float)((float)((float)((float)((float)(v14 * _22) - (float)(v11 * _32))
                                        - (float)((float)((float)(_23 * _34) - (float)(_33 * _24)) * _12))
                                * a2->_41)
                        + (float)((float)((float)((float)((float)((float)(_23 * _44) - (float)(_43 * _24)) * _12)
                                                - (float)(v15 * _22))
                                        + (float)(v11 * _42))
                                * a2->_31))
                + (float)((float)((float)((float)(v15 * _32) - (float)(v14 * _42))
                                - (float)((float)((float)(_33 * _44) - (float)(_43 * _34)) * _12))
                        * a2->_21))
        + (float)((float)((float)((float)((float)((float)(_33 * _44) - (float)(_43 * _34)) * _22)
                                - (float)((float)((float)(_23 * _44) - (float)(_43 * _24)) * _32))
                        + (float)((float)((float)(_23 * _34) - (float)(_33 * _24)) * _42))
                * a2->_11));
  if ( finite((float)(1.0 / v12)) )
  {
    *a1 = 1.0 / v12;
    return 1;
  }
  return v3;
}
