/*
 * XREFs of CalculateXExtremum @ 0x1C02BAC3C
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C02BBFA4 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CalculateXExtremum(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        _DWORD *a11)
{
  int v12; // r10d
  int v13; // ebx
  int v14; // ecx
  int v15; // r11d
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  _DWORD *result; // rax

  if ( a4 )
  {
    v12 = 2 * a2;
    v13 = 2 * a3;
  }
  else
  {
    v12 = a5 + a2;
    v13 = a6 + a3;
  }
  if ( a9 )
  {
    v14 = 2 * a7;
    v15 = 2 * a8;
  }
  else
  {
    v14 = a5 + a7;
    v15 = a6 + a8;
  }
  v16 = 2 * a5;
  if ( v14 + v12 - 4 * a5 )
  {
    v17 = v12 - v16;
    v18 = v14 - v16;
    v19 = (v14 + v12 - 4 * a5) * (__int64)(v14 + v12 - 4 * a5);
    v20 = v17 * v17 * v14 + v18 * (v18 * v12 + v17 * 4 * a5);
    v21 = v17 * v17 * v15 + v18 * (v18 * v13 + v17 * 4 * a6);
    if ( a1 )
      v22 = v20;
    else
      v22 = v19 + v20 - 1;
    *a10 = v22 / v19;
    if ( v21 < 0 )
      LODWORD(v23) = -(int)((v19 - v21) / v19);
    else
      v23 = (v21 + v19) / v19;
  }
  else
  {
    LODWORD(v23) = 2 * a6;
    *a10 = v16;
  }
  result = a11;
  *a11 = v23;
  return result;
}
