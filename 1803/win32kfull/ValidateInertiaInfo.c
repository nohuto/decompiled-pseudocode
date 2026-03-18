/*
 * XREFs of ValidateInertiaInfo @ 0x1C01FDCE8
 * Callers:
 *     NtUserReportInertia @ 0x1C00076E0 (NtUserReportInertia.c)
 * Callees:
 *     sqrt_0 @ 0x1C013D33F (sqrt_0.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01AD7F8 (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall ValidateInertiaInfo(__int64 a1, _DWORD *a2, struct _D3DMATRIX *a3, double *a4)
{
  unsigned int v8; // ebx
  double v10; // xmm8_8
  double v11; // xmm7_8
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v14; // [rsp+B0h] [rbp+8h] BYREF
  _DWORD *v15; // [rsp+B8h] [rbp+10h]
  struct _D3DMATRIX *v16; // [rsp+C0h] [rbp+18h]
  double *v17; // [rsp+C8h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v8 = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 1) > 3 )
    return 0LL;
  v14 = 0.0;
  v10 = *(float *)(a1 + 4);
  v11 = *(float *)a1;
  v12 = sqrt_0(v11 * v11 + v10 * v10);
  if ( v12 <= 0.0 )
  {
    v8 = 0;
  }
  else
  {
    v13 = v11 / v12;
    *(float *)a1 = v13;
    *(float *)(a1 + 4) = v10 / v12;
  }
  if ( v8 )
  {
    if ( a2 )
    {
      memset(a3, 0, sizeof(struct _D3DMATRIX));
      a3->_11 = (D3DVALUE)a2[4];
      a3->_12 = (D3DVALUE)a2[5];
      a3->_21 = (D3DVALUE)a2[6];
      a3->_22 = (D3DVALUE)a2[7];
      a3->_33 = 1.0;
      a3->_41 = (D3DVALUE)a2[8];
      a3->_42 = (D3DVALUE)a2[9];
      a3->_44 = 1.0;
      if ( !(unsigned int)D3DXMatrixDeterminant(&v14, a3) )
        return 0LL;
      *a4 = v12;
    }
    else
    {
      *a4 = 0.0;
    }
  }
  return v8;
}
