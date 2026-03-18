/*
 * XREFs of scl_ScaleFromFixedFUnits @ 0x1C02B56D8
 * Callers:
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C02B557C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleFixedCurrentPhantomPoints @ 0x1C02B5644 (scl_ScaleFixedCurrentPhantomPoints.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall scl_ScaleFromFixedFUnits(int *a1, int a2, __int64 a3, int *a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int *v8; // r10
  int v10; // ecx
  __int64 v11; // r11
  int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // rbx
  int v15; // edi
  int v16; // edx
  int v17; // eax
  int v18; // edi
  __int64 v19; // r11
  _DWORD *v20; // r10

  result = (unsigned int)a5;
  v7 = a5;
  v8 = a4;
  if ( a2 == 1 )
  {
    if ( a1[2] < 511 )
    {
      v10 = a1[3] + 6;
      if ( a5 > 0 )
      {
        v11 = a3 - (_QWORD)a4;
        do
        {
          result = (unsigned int)(a1[1] >> 1);
          *v8 = ((int)result + a1[2] * *(int *)((char *)v8 + v11)) >> v10;
          ++v8;
          --v7;
        }
        while ( v7 );
      }
      return result;
    }
    goto LABEL_15;
  }
  if ( a2 != 2 )
  {
LABEL_15:
    v18 = *a1 >> 6;
    if ( a5 > 0 )
    {
      v19 = a3 - (_QWORD)a4;
      do
      {
        result = FixMul(*(int *)((char *)v8 + v19), v18);
        *v20 = result;
        v8 = v20 + 1;
        --v7;
      }
      while ( v7 );
    }
    return result;
  }
  v12 = a1[2] >> 6;
  if ( a5 > 0 )
  {
    v13 = a3 - (_QWORD)v8;
    v14 = (unsigned int)a5;
    do
    {
      v15 = a1[1];
      v16 = v12 * *(int *)((char *)v8 + v13);
      v17 = v15 >> 1;
      if ( *(int *)((char *)v8 + v13) >= 0 )
        result = (unsigned int)((v16 + v17) / v15);
      else
        result = (unsigned int)-((v17 - v16) / v15);
      *v8++ = result;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
