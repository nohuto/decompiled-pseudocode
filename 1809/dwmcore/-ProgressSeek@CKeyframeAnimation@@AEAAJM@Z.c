/*
 * XREFs of ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801A3E70
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180053ED4 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180054030 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::ProgressSeek(CKeyframeAnimation *this, float a2, double a3)
{
  float v3; // xmm3_4
  char v4; // al
  int v5; // edx
  int v6; // eax
  CKeyframeAnimation *v7; // r11
  __int64 v8; // r11
  float v9; // xmm0_4
  float v10; // xmm0_4
  int v11; // ebx
  __m128 v12; // rt1
  int v13; // ecx
  KeyframeSequence *v14; // r10
  float v15; // xmm2_4
  __int64 v16; // r10
  float v17; // xmm4_4
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // r11
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v4 = *((_BYTE *)this + 525);
    if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
    {
      *((_DWORD *)this + 121) = 0;
      v5 = 0;
      if ( *((_DWORD *)this + 129) == 2 )
      {
        v6 = *((_DWORD *)this + 122);
        if ( v6 > 0 )
        {
          if ( a2 >= 0.5 )
          {
            *((_DWORD *)this + 121) = 1;
            *((_DWORD *)this + 123) = v6 - 1;
            v3 = a2 - 0.5;
            v5 = 1;
          }
          v3 = v3 + v3;
        }
      }
      CKeyframeAnimation::PrepareSequenceForIteration(this, v5);
      v9 = CKeyframeAnimation::GetAnimationTimeLength(v7) * 1000.0;
      if ( (LODWORD(v9) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v9 - v9;
        v12.m128_f32[0] = FLOAT_N0_5;
        v11 = (int)v9 - _mm_cmple_ss(*(__m128 *)&a3, v12).m128_u32[0];
      }
      else
      {
        v10 = v9 + 6291456.25;
        v11 = (int)(LODWORD(v10) << 10) >> 11;
      }
      if ( *(_DWORD *)(v8 + 480) == 1 && (v13 = *(_DWORD *)(v8 + 432)) != 0 )
      {
        v14 = *(KeyframeSequence **)(v8 + 336);
        v15 = (float)((float)v11 + (float)v13) * v3;
        if ( (float)v13 < v15 )
        {
          *(_DWORD *)(v8 + 436) = v13;
          KeyframeSequence::ConfigureTimer(v14);
          *(_DWORD *)(v18 + 92) = (int)(float)(v15 - v17);
        }
        else
        {
          *(_BYTE *)(v8 + 524) &= ~0x40u;
          *(_BYTE *)(v8 + 524) |= *(_DWORD *)(v8 + 436) < v13 ? 0 : 0x40;
          *(_DWORD *)(v8 + 436) = (int)v15;
          KeyframeSequence::ConfigureTimer(v14);
          *(_DWORD *)(v16 + 92) = 0;
        }
      }
      else
      {
        KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v8 + 336));
        *(_DWORD *)(v19 + 92) = (int)(float)((float)v11 * v3);
        *(_BYTE *)(v20 + 524) |= 0x40u;
      }
    }
    return 0LL;
  }
}
