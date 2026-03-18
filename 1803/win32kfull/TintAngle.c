/*
 * XREFs of TintAngle @ 0x1C0230058
 * Callers:
 *     pDCIAdjClr @ 0x1C00D2880 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TintAngle(int a1, __int64 a2, int *a3, int *a4)
{
  int v4; // r10d
  __int64 result; // rax
  bool v8; // cc
  int v9; // ebp
  int v10; // r8d
  int v11; // esi
  int v12; // edi
  int v13; // r8d
  int v14; // r9d
  int v15; // r9d
  int v16; // r8d

  v4 = a1;
  if ( (unsigned int)(a1 + 100) > 0xC8 )
    v4 = 100;
  result = (unsigned int)-v4;
  v8 = v4 <= 0;
  if ( v4 <= 0 )
  {
    if ( !v4 )
    {
      *a4 = 0;
      *a3 = 0;
      return result;
    }
    v8 = v4 <= 0;
  }
  if ( !v8 )
    LODWORD(result) = v4;
  v9 = 6 * result;
  v10 = 1800 - 6 * result;
  if ( 6 * (int)result < 900 )
    v10 = 6 * result;
  v11 = v10 / 10;
  v12 = v10 / 10 + 1;
  v13 = v10 % 10;
  v14 = SinNumber[v11];
  if ( v13 )
    v14 += (v13 * (SinNumber[v12] - v14) + 5) / 10;
  if ( v4 > 0 )
    v14 = -v14;
  *a3 = v14;
  v15 = 10 - v13;
  if ( !v13 )
  {
    v15 = 0;
    v12 = v11;
  }
  v16 = SinNumber[90 - v12];
  if ( v15 )
    v16 += (v15 * (SinNumber[90 - v12 + 1] - v16) + 5) / 10;
  result = (unsigned int)-v16;
  if ( v9 >= 900 )
    v16 = -v16;
  *a4 = v16;
  return result;
}
