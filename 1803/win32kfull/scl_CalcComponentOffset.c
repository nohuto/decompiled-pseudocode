/*
 * XREFs of scl_CalcComponentOffset @ 0x1C02B3E84
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 *     scl_ScaleBack @ 0x1C02B52B8 (scl_ScaleBack.c)
 */

__int64 __fastcall scl_CalcComponentOffset(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int *a9,
        int *a10)
{
  int v12; // edi
  __int64 v13; // rax
  int v14; // ecx
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r9d
  signed int v19; // eax
  signed int v20; // r10d
  signed int v21; // eax
  int v22; // r10d
  __int16 v23; // cx
  unsigned int v24; // eax
  __int16 v25; // cx
  int v26; // edx

  v12 = a3;
  if ( a5 )
  {
    *a9 = InvokeGlobalGSScale(*(_DWORD *)(a1 + 184), (int *)(a1 + 264), a2);
    v13 = 280LL;
    v14 = *(_DWORD *)(a1 + 188);
  }
  else
  {
    *a9 = InvokeGlobalGSScale(*(_DWORD *)(a1 + 176), (int *)(a1 + 232), a2);
    v13 = 248LL;
    v14 = *(_DWORD *)(a1 + 180);
  }
  result = InvokeGlobalGSScale(v14, (int *)(v13 + a1), v12);
  *a10 = result;
  if ( a6 )
  {
    v17 = a7[4];
    v18 = abs32(*a7);
    v19 = abs32(a7[1]);
    if ( v18 <= v19 )
      v18 = v19;
    v20 = abs32(a7[3]);
    v16 = v17 >> 31;
    v21 = abs32(v17);
    if ( v20 <= v21 )
      v20 = v21;
    result = 0x10000LL;
    if ( v18 != 0x10000 || v20 != 0x10000 )
    {
      *a9 = FixMul(*a9, v18);
      result = FixMul(*a10, v22);
      *a10 = result;
    }
  }
  if ( a4 )
  {
    v23 = *(_WORD *)(a1 + 452);
    v16 = a8;
    if ( (v23 & 1) != 0 && (a8 == 2 || (a8 == 0) != (v23 & 4)) )
      v24 = (*a9 + 2) & 0xFFFFFFFC;
    else
      v24 = (*a9 + 32) & 0xFFFFFFC0;
    *a9 = v24;
    v25 = *(_WORD *)(a1 + 452);
    if ( (v25 & 1) != 0 && (a8 == 2 || (a8 == 0) == (v25 & 4)) )
      result = (*a10 + 2) & 0xFFFFFFFC;
    else
      result = (*a10 + 32) & 0xFFFFFFC0;
    *a10 = result;
  }
  if ( !a5 )
  {
    scl_ScaleBack(a1 + 232, v16, (_DWORD)a9, (_DWORD)a9, 1);
    return scl_ScaleBack((int)a1 + 248, v26, (_DWORD)a10, (_DWORD)a10, 1);
  }
  return result;
}
