/*
 * XREFs of ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0162998
 * Callers:
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C01626E4 (GreGetTextExtentExW.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::bTextExtent(ESTROBJ *this, struct RFONTOBJ *a2, int a3, struct tagSIZE *a4)
{
  int v4; // eax
  bool v6; // zf
  __int64 v8; // rax
  __m128i v11; // xmm0
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // eax
  LONG cx; // edx
  LONG v17; // [rsp+40h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 58);
  v17 = 0;
  v6 = (v4 & 8) == 0;
  v8 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    bFToL((float)*((int *)this + 28) * *(float *)(*(_QWORD *)v8 + 408LL), &v17, 0);
    a4->cx = v17;
    v12 = **((_QWORD **)this + 7);
    v11 = _mm_cvtsi32_si128(16 * *(_DWORD *)(v12 + 356));
  }
  else
  {
    bFToL((float)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) * *(float *)(*(_QWORD *)v8 + 408LL), &v17, 0);
    a4->cx = v17;
    v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 25) - *((_DWORD *)this + 27));
    v12 = **((_QWORD **)this + 7);
  }
  v17 = 0;
  bFToL(_mm_cvtepi32_ps(v11).m128_f32[0] * *(float *)(v12 + 428), &v17, 0);
  a4->cy = v17;
  if ( gbDBCSCodePage != v13 && *(_DWORD *)(*(_QWORD *)a2 + 208LL) == 1 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)a2 + 716LL);
    if ( (v14 & 0x10) == 0 && (v14 & 4) == 0 && (v14 & 0x200000) != 0 && (a3 == 900 || a3 == 2700) )
    {
      cx = a4->cx;
      a4->cx = a4->cy;
      a4->cy = cx;
    }
  }
  return 1LL;
}
