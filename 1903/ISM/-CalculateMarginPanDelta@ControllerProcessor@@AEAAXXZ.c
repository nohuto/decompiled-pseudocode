/*
 * XREFs of ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x1800758A8
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180077054 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075FC4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall ControllerProcessor::CalculateMarginPanDelta(ControllerProcessor *this)
{
  char v1; // si
  int *v3; // rdi
  bool v4; // al
  DWORD TickCount; // eax
  DWORD v6; // r8d
  int v7; // ecx
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  int v10; // ecx
  __m128 v11; // xmm4
  __m128 v12; // xmm1
  __m128 v13; // xmm4
  __m128 v14; // xmm4
  float v15; // xmm1_4
  __m128 v16; // xmm0
  POINT pt; // [rsp+30h] [rbp+8h]

  v1 = *((_BYTE *)this + 2300);
  ControllerProcessor::GetCursorPosition(this);
  v3 = (int *)((char *)this + 2284);
  v4 = !PtInRect((const RECT *)((char *)this + 2284), pt);
  *((_BYTE *)this + 2300) = v4;
  if ( v4 )
  {
    TickCount = GetTickCount();
    if ( v1 )
    {
      v6 = *((_DWORD *)this + 576);
    }
    else
    {
      *((_DWORD *)this + 576) = TickCount;
      v6 = TickCount;
    }
    v7 = *((_DWORD *)this + 572);
    v8 = 0LL;
    if ( pt.y > v7 && (v7 = *((_DWORD *)this + 574), pt.y < v7) )
      v9 = 0LL;
    else
      v9 = (__m128)COERCE_UNSIGNED_INT((float)(v7 - pt.y));
    v10 = *v3;
    if ( pt.x > *v3 && (v10 = *((_DWORD *)this + 573), pt.x < v10) )
      v11 = 0LL;
    else
      v11 = (__m128)COERCE_UNSIGNED_INT((float)(v10 - pt.x));
    v12 = (__m128)LODWORD(FLOAT_1_0);
    v13 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0LL), _mm_unpacklo_ps(v9, (__m128)0LL));
    v8.m128_f32[0] = fmaxf(0.0, (float)(int)(TickCount - v6) / 1000.0);
    if ( v8.m128_f32[0] <= 1.0 )
      v12 = v8;
    v14 = _mm_mul_ps(_mm_mul_ps(_mm_div_ps(v13, (__m128)_xmm), (__m128)_xmm), _mm_shuffle_ps(v12, v12, 0));
    v15 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0] + *((float *)this + 578);
    *((float *)this + 577) = v14.m128_f32[0] + *((float *)this + 577);
    v16 = _mm_mul_ps(v14, (__m128)_xmm);
    v14.m128_f32[0] = _mm_shuffle_ps(v16, v16, 85).m128_f32[0] + *((float *)this + 562);
    v16.m128_f32[0] = v16.m128_f32[0] + *((float *)this + 561);
    *((float *)this + 578) = v15;
    *((_DWORD *)this + 562) = v14.m128_i32[0];
    *((_DWORD *)this + 561) = v16.m128_i32[0];
  }
}
