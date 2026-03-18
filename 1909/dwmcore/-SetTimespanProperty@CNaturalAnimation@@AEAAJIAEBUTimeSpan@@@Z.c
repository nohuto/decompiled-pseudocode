/*
 * XREFs of ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x1801E5710
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E5420 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E3EC4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetTimespanProperty(CNaturalAnimation *this, int a2, const struct TimeSpan *a3)
{
  __m128 v3; // xmm2
  unsigned int v4; // edi
  float *v7; // rbx
  void (__fastcall *v8)(float *); // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v12; // eax
  __m128 v13; // rt1
  float v15; // [rsp+48h] [rbp+10h]

  v4 = 0;
  if ( a2 == 15 )
  {
    v11 = *(float *)a3;
    if ( (*(_DWORD *)a3 & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v3.m128_f32[0] = (float)(int)v11 - v11;
      v13.m128_f32[0] = FLOAT_N0_5;
      v12 = (int)v11 - _mm_cmple_ss(v3, v13).m128_u32[0];
    }
    else
    {
      v15 = v11 + 6291456.25;
      v12 = (int)(LODWORD(v15) << 10) >> 11;
    }
    *((_DWORD *)this + 98) = v12;
  }
  else if ( a2 == 47 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v7 = (float *)*((_QWORD *)this + 53);
    if ( v7 )
      (**(void (__fastcall ***)(float *))v7)(v7);
    v8 = *(void (__fastcall **)(float *))(*(_QWORD *)v7 + 8LL);
    v9 = v7[9];
    v10 = 1.0 / (float)(*(float *)a3 / 1000.0);
    v7[10] = v10;
    v7[7] = v10 * v10;
    v7[8] = (float)(v9 + v9) * v10;
    v8(v7);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x436u, 0LL);
  }
  return v4;
}
