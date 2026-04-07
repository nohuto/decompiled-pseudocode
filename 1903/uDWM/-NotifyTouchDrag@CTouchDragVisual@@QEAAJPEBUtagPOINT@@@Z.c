/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D034
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180098EC0 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     sqrtf_0 @ 0x18004FDDA (sqrtf_0.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800970B0 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x18009B984 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18009BA38 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18009CF50 (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18009D580 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009FF8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  int v4; // esi
  DWORD TickCount; // eax
  int v6; // r8d
  unsigned int v7; // r14d
  DWORD v8; // r12d
  __int64 v9; // rax
  bool v10; // r15
  __int64 v11; // rax
  DWORD v12; // ecx
  DWORD v13; // edx
  CContactManager *v14; // rcx
  int v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rbx
  __m128 v21; // xmm6
  __m128 v22; // xmm10
  __m128 v23; // xmm11
  float v24; // xmm8_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm12_4
  bool v29; // zf
  __m128 v30; // xmm2
  int v31; // eax
  unsigned int v32; // r15d
  __int64 v33; // r12
  float *v34; // rbx
  float v35; // xmm0_4
  __int64 v36; // rdx
  float v37; // xmm0_4
  __int64 v38; // rax
  __int128 v40; // [rsp+48h] [rbp-99h] BYREF
  __int64 v41; // [rsp+58h] [rbp-89h] BYREF
  float v42; // [rsp+60h] [rbp-81h]

  v4 = 0;
  TickCount = GetTickCount();
  v7 = *((_DWORD *)this + 86);
  v8 = TickCount;
  v10 = 1;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 40);
    if ( *(float *)(v9 + 4) == (float)a2->x && *(float *)(v9 + 8) == (float)a2->y )
      v10 = 0;
  }
  if ( v7 )
  {
    v11 = *((_QWORD *)this + 40);
    v12 = v8 - *(_DWORD *)v11;
    if ( *((float *)this + 76) <= (float)((float)((float)((float)(*(float *)(v11 + 8) - (float)a2->y)
                                                        * (float)(*(float *)(v11 + 8) - (float)a2->y))
                                                + (float)((float)(*(float *)(v11 + 4) - (float)a2->x)
                                                        * (float)(*(float *)(v11 + 4) - (float)a2->x)))
                                        / (float)(int)(v12 * v12)) )
    {
      *((_DWORD *)this + 111) = 0;
      v13 = 0;
    }
    else
    {
      v13 = v12 + *((_DWORD *)this + 111);
      *((_DWORD *)this + 111) = v13;
    }
    if ( v13 > *((_DWORD *)this + 77) )
    {
      v14 = (CContactManager *)*((_QWORD *)this + 56);
      if ( v14 )
      {
        v15 = CContactManager::NotifyTouchDragVisualComplete(v14, this);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x6Bu);
          goto LABEL_40;
        }
      }
      *((_DWORD *)this + 111) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
  {
    McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmTouchDragVisual_BeginDraw_Info, v6);
  }
  if ( v10 )
  {
    v16 = _mm_cvtsi32_si128(a2->x);
    v17 = _mm_cvtsi32_si128(a2->y);
    v41 = 0LL;
    v42 = 0.0;
    v29 = *((_BYTE *)this + 440) == 0;
    LODWORD(v40) = v8;
    DWORD1(v40) = _mm_cvtepi32_ps(v16).m128_u32[0];
    *((float *)&v40 + 3) = FLOAT_0_5;
    DWORD2(v40) = _mm_cvtepi32_ps(v17).m128_u32[0];
    if ( v29 || !v7 )
    {
      v18 = (__int64 *)((char *)this + 320);
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((__int64)this + 320, (unsigned __int64)&v40);
      ++v7;
    }
    else
    {
      v18 = (__int64 *)((char *)this + 320);
      v19 = *((_QWORD *)this + 40);
      *(_OWORD *)v19 = v40;
      *(_QWORD *)(v19 + 16) = v41;
      *(float *)(v19 + 24) = v42;
    }
    *((_BYTE *)this + 440) = 0;
    if ( v7 > 1 )
    {
      v20 = *v18;
      v21 = *(__m128 *)(*v18 + 28);
      v22 = _mm_shuffle_ps(v21, v21, 85);
      v23 = _mm_shuffle_ps(v21, v21, 170);
      v24 = *((float *)&v40 + 1) - v22.m128_f32[0];
      v25 = *((float *)&v40 + 2) - v23.m128_f32[0];
      v26 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      v27 = *((float *)&v40 + 3) - v26;
      v28 = sqrtf_0((float)((float)(v24 * v24) + (float)(v25 * v25)) + (float)(v27 * v27));
      v29 = v7 == 2;
      if ( v7 > 2 )
      {
        v30 = *(__m128 *)(v20 + 56);
        v23.m128_f32[0] = v23.m128_f32[0] - _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
        v22.m128_f32[0] = v22.m128_f32[0] - _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
        *((_QWORD *)this + 51) = _mm_unpacklo_ps(v22, v23).m128_u64[0];
        *((float *)this + 104) = v26 - _mm_shuffle_ps(v30, v30, 255).m128_f32[0];
        CTouchDragVisualHelper::Normalize((CTouchDragVisual *)((char *)this + 408));
        if ( (float)((float)((float)((float)((float)(v25 * *((float *)this + 103))
                                           + (float)(v24 * *((float *)this + 102)))
                                   + (float)(v27 * *((float *)this + 104)))
                           / v28)
                   / v28) > 0.059999999 )
          goto LABEL_29;
        v29 = v7 == 2;
      }
      if ( !v29 || v28 >= 10.0 )
      {
LABEL_30:
        v31 = CTouchVisual::RegisterGlobalTimer(this);
        v4 = v31;
        if ( v31 >= 0 )
        {
          v32 = 0;
          v33 = 0LL;
          do
          {
            v34 = (float *)*((_QWORD *)this + 40);
            if ( v32 )
            {
              v36 = 7LL * (v32 - 1);
              v37 = v34[v36 + 2];
              if ( v32 == v7 - 1 )
              {
                LODWORD(v41) = COERCE_UNSIGNED_INT(v37 - v34[v33 + 2]) ^ _xmm;
                v35 = v34[v36 + 1] - v34[v33 + 1];
              }
              else
              {
                v38 = 7LL * (v32 + 1);
                LODWORD(v41) = COERCE_UNSIGNED_INT(v37 - v34[v38 + 2]) ^ _xmm;
                v35 = v34[v36 + 1] - v34[v38 + 1];
              }
            }
            else
            {
              LODWORD(v41) = COERCE_UNSIGNED_INT(v34[2] - v34[9]) ^ _xmm;
              v35 = v34[1] - v34[8];
            }
            v42 = 0.0;
            *((float *)&v41 + 1) = v35;
            CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v41);
            ++v32;
            *(_QWORD *)&v34[v33 + 4] = v41;
            v34[v33 + 6] = v42;
            v33 += 7LL;
          }
          while ( v32 < 2 );
          CTouchDragVisualHelper::SmoothTouchDragPath(v18, (__int64)this + 352);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xA5u);
        }
        goto LABEL_40;
      }
LABEL_29:
      *((_BYTE *)this + 440) = 1;
      goto LABEL_30;
    }
  }
LABEL_40:
  if ( v4 < 0 )
    CTouchDragVisual::Stop(this);
  return (unsigned int)v4;
}
