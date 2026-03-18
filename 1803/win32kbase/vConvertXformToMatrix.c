/*
 * XREFs of vConvertXformToMatrix @ 0x1C001A920
 * Callers:
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0019A6C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C006312C (bFToL.c)
 */

__int64 __fastcall vConvertXformToMatrix(float *a1, float *a2)
{
  EFLOAT *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // edx
  bool v8; // zf
  float v9; // xmm0_4
  int v10; // edx

  v2 = (EFLOAT *)(a2 + 5);
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  a2[4] = a1[4];
  a2[5] = a1[5];
  if ( !(unsigned int)bFToL(a1, a2 + 6, 6LL) )
    a2[6] = 0.0;
  result = bFToL(v4, a2 + 7, v5);
  if ( !(_DWORD)result )
    a2[7] = 0.0;
  v7 = 32;
  v8 = a2[4] == *(float *)v2;
  *((_DWORD *)a2 + 8) = 32;
  if ( v8 )
  {
    result = EFLOAT::bIsZero(v2);
    if ( (_DWORD)result )
    {
      v7 = 96;
      *((_DWORD *)a2 + 8) = 96;
    }
  }
  if ( a2[1] == 0.0 && a2[2] == 0.0 )
  {
    v9 = *a2;
    v10 = v7 | 1;
    *((_DWORD *)a2 + 8) = v10;
    if ( v9 == 1.0 && a2[3] == 1.0 )
      *((_DWORD *)a2 + 8) = v10 | 2;
  }
  return result;
}
