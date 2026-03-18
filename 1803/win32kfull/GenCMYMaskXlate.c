/*
 * XREFs of GenCMYMaskXlate @ 0x1C022FE34
 * Callers:
 *     pDCIAdjClr @ 0x1C00D2880 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

char __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  int v6; // r10d
  int v7; // esi
  int v8; // r13d
  int v9; // r8d
  int v11; // r10d
  int v12; // r15d
  int v13; // ecx
  int v14; // r9d
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // edi
  int i; // edx
  int v21; // eax
  int v22; // r10d
  int v23; // r14d
  int v24; // r12d
  int v25; // eax
  char v26; // cl
  char result; // al
  int v28; // [rsp+0h] [rbp-48h]
  int v29; // [rsp+4h] [rbp-44h]

  v5 = a5 + 1;
  v6 = (a5 + 1) * (a3 + 1);
  v7 = (a4 + 1) * (a5 + 1);
  v8 = a3;
  v9 = 0;
  v11 = (a4 + 1) * v6;
  v29 = v7;
  if ( (unsigned int)(v11 - 1) <= 0xFF && a2 )
  {
    if ( (v11 & 1) != 0 )
      v12 = v11 / 2;
    else
      v12 = 512;
    v13 = v11 + 1;
    v14 = 0;
    if ( (v11 & 1) == 0 )
      v13 = v11;
    v15 = -v7;
    v28 = v13 - 1 + (256 - v13) / 2;
    v16 = -v5;
    do
    {
      v17 = v15 + v7;
      v18 = a4;
      v19 = v16;
      if ( v14 > v8 )
        v17 = v15;
      v15 = v17;
      for ( i = 0; i <= 7; ++i )
      {
        v21 = v19 + v5;
        v22 = 0;
        if ( i > v18 )
          v21 = v19;
        v23 = -1;
        v19 = v21;
        v24 = v15 + v21;
        do
        {
          v25 = v23 + 1;
          if ( v22 > a5 )
            v25 = v23;
          v23 = v25;
          v26 = v24 + v25;
          if ( v24 + v25 > v12 )
            ++v26;
          ++v22;
          result = v28 - v26;
          *a1++ = v28 - v26;
        }
        while ( v22 <= 3 );
        v18 = a4;
      }
      v7 = v29;
      ++v14;
      v8 = a3;
      v16 = -v5;
    }
    while ( v14 <= 7 );
  }
  else
  {
    result = 0;
    do
      *a1++ = v9++;
    while ( v9 < 256 );
  }
  return result;
}
