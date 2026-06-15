/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x1800431A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18005BF48 (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  float *v11; // r9
  float *v12; // r11
  __m128 v13; // xmm1
  unsigned int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  float v19; // xmm0_4
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rsi
  double *v24; // rcx
  float v25; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 21) )
  {
    v8 = 0LL;
    if ( a2 )
    {
      if ( a2 >= 0x10 )
      {
        v9 = *((_QWORD *)this + 13);
        v10 = a2 - 1;
        v11 = (float *)((char *)this + 92);
        v12 = &a3[v10];
        v13 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 23), (__m128)*((unsigned int *)this + 23), 0);
        if ( ((unsigned __int64)a3 > v9 + 4 * v10 || (unsigned __int64)v12 < v9) && (a3 > v11 || v12 < v11) )
        {
          v14 = 8;
          do
          {
            *(__m128 *)&a3[v8] = _mm_mul_ps(*(__m128 *)(v9 + 4 * v8), v13);
            v8 = (unsigned int)(v8 + 16);
            *(__m128 *)&a3[v14 - 4] = _mm_mul_ps(*(__m128 *)(v9 + 4LL * (v14 - 4)), v13);
            *(__m128 *)&a3[v14] = _mm_mul_ps(*(__m128 *)(v9 + 4LL * v14), v13);
            v15 = v14 + 4;
            v14 += 16;
            *(__m128 *)&a3[v15] = _mm_mul_ps(*(__m128 *)(v9 + 4 * v15), v13);
          }
          while ( (unsigned int)v8 < (a2 & 0xFFFFFFF0) );
        }
      }
      if ( (unsigned int)v8 < a2 )
      {
        v16 = *((_QWORD *)this + 13);
        v17 = v8;
        v18 = a2 - (unsigned int)v8;
        do
        {
          v19 = *(float *)(v17 * 4 + v16);
          a3[v17++] = v19 * *((float *)this + 23);
          --v18;
        }
        while ( v18 );
      }
    }
    v20 = *((_QWORD *)this + 12);
    *a4 = *((_BYTE *)this + 440);
    v21 = *((_QWORD *)this + 54);
    if ( v20 >= v21 )
      v21 = v20;
    *a5 = v21;
    if ( a2 )
    {
      v22 = *((_QWORD *)this + 53) - (_QWORD)a3;
      v23 = a2;
      do
      {
        v24 = (double *)*((_QWORD *)this + 56);
        if ( v24 )
          v25 = CVolumeUnit::ScalarFromTaper(
                  (CVolumeUnit *)v24,
                  (float)(*(float *const)((char *)a3 + v22) * *a3) * (v24[4] - v24[3]) + v24[3]);
        else
          v25 = *(float *const)((char *)a3 + v22) * *a3;
        *a3++ = v25;
        --v23;
      }
      while ( v23 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x639,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
