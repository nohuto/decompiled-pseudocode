/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x180185CCC
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x180186088 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x180185E9C (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x18018783C (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(
        CWARPDrawListEntry *this,
        const struct WARPDrawListEntryParams *a2)
{
  const __m128i *v4; // rax
  __m128 v5; // xmm2
  float *v6; // rax
  __int64 v7; // rdx
  char *v8; // r8
  char *v9; // r9
  float v10; // xmm0_4
  float v12[3]; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+2Ch] [rbp-1Ch]

  CDrawListEntry::CDrawListEntry(this, a2);
  *((_DWORD *)this + 36) = 0;
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable'{for `CDrawListEntry'};
  *((_QWORD *)this + 17) = &CWARPDrawListEntry::`vftable'{for `CRenderingEffect'};
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 13);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *((_BYTE *)this + 352) = *((_BYTE *)a2 + 232);
  *((_BYTE *)this + 353) = *((_BYTE *)a2 + 233);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a2 + 56);
  v4 = (const __m128i *)*((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v5 = (__m128)_mm_loadu_si128(v4 + 7);
    v6 = (float *)*((_QWORD *)a2 + 3);
    v7 = 4LL;
    v8 = (char *)(this - (CWARPDrawListEntry *)v6);
    v9 = (char *)((char *)v12 - (char *)v6);
    v13 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    v12[0] = v13 * v5.m128_f32[0];
    v12[2] = _mm_shuffle_ps(v5, v5, 170).m128_f32[0] * v13;
    v12[1] = _mm_shuffle_ps(v5, v5, 85).m128_f32[0] * v13;
    do
    {
      v10 = *(float *)((char *)v6 + (_QWORD)v9) * *v6;
      *(float *)((char *)++v6 + (_QWORD)v8 + 172) = v10;
      --v7;
    }
    while ( v7 );
  }
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 192, (char *)a2 + 72);
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 272, (char *)a2 + 152);
  return this;
}
