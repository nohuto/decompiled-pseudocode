/*
 * XREFs of scl_Scale @ 0x1C02B50E0
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 *     scl_ScaleOldCharPoints @ 0x1C02B57B4 (scl_ScaleOldCharPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C02B5880 (scl_ScaleOldPhantomPoints.c)
 *     fsg_RunPreProgram @ 0x1C02BE34C (fsg_RunPreProgram.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall scl_Scale(int *a1, int a2, __int64 a3, int *a4, int a5)
{
  __int64 result; // rax
  int *v6; // r10
  __int64 v7; // rbx
  __int64 v9; // r11
  __int64 v10; // r8
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  __int64 v14; // r11
  _DWORD *v15; // r10

  result = (unsigned int)a5;
  v6 = a4;
  v7 = a5;
  if ( a2 == 1 )
  {
    if ( a5 > 0 )
    {
      do
      {
        result = (unsigned int)(a1[1] >> 1);
        *v6 = ((int)result + a1[2] * *(int *)((char *)v6 + a3 - (_QWORD)a4)) >> a1[3];
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( a2 == 2 )
  {
    if ( a5 > 0 )
    {
      v9 = a3 - (_QWORD)a4;
      v10 = (unsigned int)a5;
      do
      {
        v11 = a1[1];
        v12 = a1[2] * *(int *)((char *)v6 + v9);
        v13 = v11 >> 1;
        if ( *(int *)((char *)v6 + v9) >= 0 )
          result = (unsigned int)((v12 + v13) / v11);
        else
          result = (unsigned int)-((v13 - v12) / v11);
        *v6++ = result;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( a5 > 0 )
  {
    v14 = a3 - (_QWORD)a4;
    do
    {
      result = FixMul(*(int *)((char *)v6 + v14), *a1);
      *v15 = result;
      v6 = v15 + 1;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
