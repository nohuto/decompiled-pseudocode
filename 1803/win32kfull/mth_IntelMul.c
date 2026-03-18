/*
 * XREFs of mth_IntelMul @ 0x1C02B36E0
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 *     scl_PostTransformGlyph @ 0x1C02B4EE8 (scl_PostTransformGlyph.c)
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

void __fastcall mth_IntelMul(int a1, char *a2, int *a3, int *a4, int a5, int a6)
{
  int v10; // r13d
  int v11; // eax
  int v12; // r12d
  int v13; // r15d
  int v14; // edi
  signed __int64 v15; // rsi
  int v16; // ebx
  int fixed; // eax
  int v18; // r10d
  int v19; // r11d
  int v20; // eax
  int v21; // r10d
  int v22; // [rsp+80h] [rbp+50h]

  if ( a5 && a6 )
  {
    v10 = *a4;
    if ( a5 == 0x10000 )
    {
      v11 = a4[1];
    }
    else
    {
      v10 = CompDiv(a5, (__int64)v10 << 16);
      v11 = CompDiv(a5, (__int64)a4[1] << 16);
    }
    v12 = a4[3];
    v22 = v11;
    if ( a6 == 0x10000 )
    {
      v13 = a4[4];
    }
    else
    {
      v12 = CompDiv(a6, (__int64)v12 << 16);
      v13 = CompDiv(a6, (__int64)a4[4] << 16);
    }
    v14 = a1 - 1;
    if ( v14 >= 0 )
    {
      v15 = a2 - (char *)a3;
      do
      {
        v16 = *(int *)((char *)a3 + v15);
        FixMul(v12, *a3);
        fixed = FixMul(v10, v16);
        *(int *)((char *)a3 + v15) = fixed + v18;
        FixMul(v13, v19);
        v20 = FixMul(v22, v16);
        --v14;
        *a3++ = v20 + v21;
      }
      while ( v14 >= 0 );
    }
  }
  else
  {
    while ( --a1 >= 0 )
    {
      *a3++ = 0;
      *(_DWORD *)a2 = 0;
      a2 += 4;
    }
  }
}
