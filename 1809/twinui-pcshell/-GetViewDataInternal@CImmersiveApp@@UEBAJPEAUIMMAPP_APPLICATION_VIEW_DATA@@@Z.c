/*
 * XREFs of ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18005E950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetViewDataInternal(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  char v3; // cl
  unsigned int v4; // r8d
  char v5; // cl
  __m128i v6; // xmm2
  __int128 v7; // xmm1

  *((_QWORD *)a2 + 4) = 3LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_DWORD *)a2 + 18) = 0;
  *(_QWORD *)((char *)a2 + 76) = 3LL;
  *((_DWORD *)a2 + 21) = 0;
  v3 = *((_BYTE *)this + 592);
  v4 = v3 != 0 ? 0x8007139F : 0;
  if ( !v3 )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 3LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_QWORD *)a2 + 7) = 0LL;
    *((_QWORD *)a2 + 8) = 0LL;
    *((_DWORD *)a2 + 18) = 0;
    *(_QWORD *)((char *)a2 + 76) = 3LL;
    *((_DWORD *)a2 + 21) = 0;
    if ( *((_DWORD *)this + 46) == -1 || (v5 = 1, *((_DWORD *)this + 57) == -1) )
      v5 = 0;
    v4 = v5 == 0 ? 0x80070490 : 0;
    if ( v5 )
    {
      *(_OWORD *)a2 = *(_OWORD *)((char *)this + 184);
      *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 200);
      *((_QWORD *)a2 + 4) = *((_QWORD *)this + 27);
      *((_DWORD *)a2 + 10) = *((_DWORD *)this + 56);
      v6 = *(__m128i *)((char *)this + 260);
      v7 = *(_OWORD *)((char *)this + 244);
      *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)this + 228);
      *(_OWORD *)((char *)a2 + 60) = v7;
      *(_QWORD *)((char *)a2 + 76) = v6.m128i_i64[0];
      *((_DWORD *)a2 + 21) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    }
  }
  return v4;
}
