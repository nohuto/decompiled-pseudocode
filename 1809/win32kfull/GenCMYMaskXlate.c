/*
 * XREFs of GenCMYMaskXlate @ 0x1C0245E5C
 * Callers:
 *     pDCIAdjClr @ 0x1C00141A0 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

char __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ebp
  int v7; // r10d
  int v8; // esi
  int v9; // r9d
  int v10; // r8d
  int v12; // r10d
  int v13; // eax
  int v14; // r14d
  int v15; // ebx
  int v16; // eax
  int v17; // r10d
  int v18; // r15d
  int v19; // eax
  int v20; // esi
  int v21; // edi
  int i; // r9d
  int v23; // eax
  int v24; // r12d
  int v25; // r13d
  int v26; // esi
  int v27; // eax
  int v28; // edx
  char v29; // cl
  char v30; // al
  char result; // al
  char v32; // [rsp+0h] [rbp-48h]
  int v33; // [rsp+4h] [rbp-44h]
  int v34; // [rsp+8h] [rbp-40h]

  v5 = a4 + 1;
  v6 = a5 + 1;
  v7 = (a5 + 1) * (a3 + 1);
  v8 = (a4 + 1) * (a5 + 1);
  v9 = a3;
  v10 = 0;
  v12 = v5 * v7;
  v33 = v8;
  if ( (unsigned int)(v12 - 1) <= 0xFF && a2 )
  {
    if ( (v12 & 1) != 0 )
    {
      v13 = v12 / 2;
      ++v12;
      v14 = v13;
    }
    else
    {
      v14 = 512;
    }
    v15 = -v8;
    v16 = v12 - 1 + (256 - v12) / 2;
    v17 = 0;
    v18 = -v6;
    v32 = v16;
    v34 = -v6;
    do
    {
      v19 = v15 + v8;
      v20 = a4;
      v21 = v18;
      if ( v17 > v9 )
        v19 = v15;
      v15 = v19;
      for ( i = 0; i <= 7; ++i )
      {
        v23 = v21 + v6;
        v24 = 0;
        if ( i > v20 )
          v23 = v21;
        v25 = -1;
        v21 = v23;
        v26 = v15 + v23;
        do
        {
          v27 = v25 + 1;
          if ( v24 > a5 )
            v27 = v25;
          v25 = v27;
          v28 = v26 + v27;
          v29 = v26 + v27 + 1;
          v30 = v26 + v27;
          if ( v28 <= v14 )
            v29 = v30;
          result = v32 - v29;
          ++v24;
          *a1++ = v32 - v29;
        }
        while ( v24 <= 3 );
        v20 = a4;
        v6 = a5 + 1;
      }
      v8 = v33;
      ++v17;
      v18 = v34;
      v9 = a3;
    }
    while ( v17 <= 7 );
  }
  else
  {
    result = 0;
    do
      *a1++ = v10++;
    while ( v10 < 256 );
  }
  return result;
}
