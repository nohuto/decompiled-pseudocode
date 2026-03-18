/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEAAXPEAU_XFORML@@@Z @ 0x1C001B950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vGetCoefficient(FLOATL **this, struct _XFORML *a2)
{
  FLOATL *v2; // rax
  int v4; // ecx
  float v5; // xmm1_4
  FLOATL v6; // xmm0_4
  __m128i v7; // xmm3
  FLOATL v8; // xmm1_4
  float v9; // xmm0_4
  __int128 v10; // [rsp+0h] [rbp-30h]
  __int128 v11; // [rsp+0h] [rbp-30h]
  float v12[8]; // [rsp+10h] [rbp-20h]

  v2 = *this;
  v4 = *((_DWORD *)*this + 8);
  if ( (v4 & 8) != 0 )
  {
    v10 = *(_OWORD *)v2;
    v5 = COERCE_FLOAT(*((_QWORD *)v2 + 1));
    *(_OWORD *)v12 = *((_OWORD *)v2 + 1);
    v6 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)) * 0.0625;
    a2->eM11 = COERCE_FLOAT(*(_OWORD *)v2) * 0.0625;
    a2->eM12 = v6;
    a2->eM21 = v5 * 0.0625;
    a2->eM22 = *((float *)&v10 + 3) * 0.0625;
    a2->eDx = v12[0] * 0.0625;
    *(float *)&v2 = v12[1] * 0.0625;
LABEL_3:
    LODWORD(a2->eDy) = (_DWORD)v2;
    return;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v7 = *(__m128i *)(v2 + 4);
    v11 = *(_OWORD *)v2;
    v8 = COERCE_FLOAT(*((_QWORD *)v2 + 1)) * 16.0;
    LODWORD(v9) = HIDWORD(*(_QWORD *)v2);
    a2->eM11 = COERCE_FLOAT(*(_OWORD *)v2) * 16.0;
    LODWORD(a2->eDx) = _mm_cvtsi128_si32(v7);
    a2->eM12 = v9 * 16.0;
    a2->eM21 = v8;
    a2->eM22 = *((float *)&v11 + 3) * 16.0;
    v2 = (FLOATL *)HIDWORD(v7.m128i_i64[0]);
    goto LABEL_3;
  }
  a2->eM11 = *v2;
  a2->eM12 = (*this)[1];
  a2->eM21 = (*this)[2];
  a2->eM22 = (*this)[3];
  a2->eDx = (*this)[4];
  a2->eDy = (*this)[5];
}
