/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18032DBF0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18032CFB0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18032FF2C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x1803302D0 (-GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        int a5,
        char a6,
        __int64 a7,
        _BYTE *a8,
        _BYTE *a9)
{
  int v9; // eax
  bool v10; // zf
  float v11; // xmm4_4
  float v12; // xmm2_4
  bool v13; // al
  __int128 v14; // xmm0
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int ViewRectOverlay; // ebx
  __int64 v24; // rdx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __m128 v30; // xmm0
  __int128 v31; // [rsp+40h] [rbp-31h] BYREF
  __int128 v32; // [rsp+50h] [rbp-21h] BYREF
  __int128 v33; // [rsp+60h] [rbp-11h] BYREF
  __int128 v34; // [rsp+70h] [rbp-1h] BYREF
  __int128 v35; // [rsp+80h] [rbp+Fh]
  __int64 v36; // [rsp+90h] [rbp+1Fh]
  int v37; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+37h]

  v9 = *((_DWORD *)a4 + 2);
  *(_QWORD *)&v31 = 0LL;
  v10 = *((_BYTE *)a4 + 24) == 0;
  v11 = (float)v9;
  v12 = (float)*((int *)a4 + 1);
  *((float *)&v31 + 2) = (float)v9;
  *((float *)&v31 + 3) = v12;
  *(_OWORD *)a7 = v31;
  *a8 = 0;
  *a9 = 0;
  v13 = !v10 || *((_BYTE *)a4 + 25);
  if ( *(_DWORD *)a4 != 1 )
  {
    if ( *(_DWORD *)a4 == 2 )
    {
      v19 = *a2;
      v31 = *a3;
      v32 = v19;
      v20 = *(_OWORD *)((-(__int64)v13 & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
      v21 = *a4;
      v37 = *((_DWORD *)a4 + 10);
      v33 = v20;
      v22 = a4[1];
      v34 = v21;
      *(_QWORD *)&v21 = *((_QWORD *)a4 + 4);
      v35 = v22;
      v36 = v21;
      ViewRectOverlay = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int128 *, __int128 *, char, __int64, _BYTE *, _BYTE *))KeyboardHosting::ViewRectHelper::GetViewRectNearCaret)(
                          &v34,
                          &v33,
                          &v32,
                          &v31,
                          a6,
                          a7,
                          a8,
                          a9);
      if ( ViewRectOverlay >= 0 )
        return 0LL;
      v24 = 82LL;
    }
    else
    {
      if ( *(_DWORD *)a4 != 3 )
      {
        v30 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)v13 & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120));
        *(_DWORD *)a7 = v30.m128_i32[0];
        *(float *)(a7 + 4) = (float)((float)(_mm_shuffle_ps(v30, v30, 255).m128_f32[0]
                                           + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
                                   - v12)
                           - (float)*((int *)a4 + 4);
        return 0LL;
      }
      v26 = *a2;
      v33 = *a3;
      v32 = v26;
      v27 = *(_OWORD *)((-(__int64)v13 & 0xFFFFFFFFFFFFFFD0uLL) + a1 + 120);
      v28 = *a4;
      v37 = *((_DWORD *)a4 + 10);
      v31 = v27;
      v29 = a4[1];
      v34 = v28;
      *(_QWORD *)&v28 = *((_QWORD *)a4 + 4);
      v35 = v29;
      v36 = v28;
      ViewRectOverlay = KeyboardHosting::ViewRectHelper::GetViewRectOverlay(&v34, &v31, &v32, &v33, a5, a7);
      if ( ViewRectOverlay >= 0 )
        return 0LL;
      v24 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
      (const char *)(unsigned int)ViewRectOverlay);
    return (unsigned int)ViewRectOverlay;
  }
  v14 = *(_OWORD *)((-(__int64)v13 & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
  v15 = *((_DWORD *)a4 + 5);
  v31 = v14;
  if ( (v15 & 0xC) == 0 )
  {
    v16 = (float)(*((float *)&v31 + 2) - v11) * 0.5;
LABEL_12:
    v17 = v16 + *(float *)&v31;
    goto LABEL_13;
  }
  if ( (v15 & 0xC) != 0xC )
  {
    if ( (v15 & 4) == 0 )
    {
      if ( (v15 & 8) != 0 )
        *(float *)a7 = (float)((float)(*((float *)&v31 + 2) + *(float *)&v31) - v11) - (float)*((int *)a4 + 3);
      goto LABEL_16;
    }
    v16 = (float)*((int *)a4 + 3);
    goto LABEL_12;
  }
  v17 = *(float *)&v31;
LABEL_13:
  *(float *)a7 = v17;
LABEL_16:
  if ( (v15 & 3) == 0 || (v15 & 3) == 3 )
  {
    v18 = (float)(*((float *)&v31 + 3) - v12) * 0.5;
LABEL_23:
    *(float *)(a7 + 4) = v18 + *((float *)&v31 + 1);
    return 0LL;
  }
  if ( (v15 & 2) != 0 )
  {
    *(float *)(a7 + 4) = (float)((float)(*((float *)&v31 + 3) + *((float *)&v31 + 1)) - v12) - (float)*((int *)a4 + 4);
  }
  else if ( (v15 & 1) != 0 )
  {
    v18 = (float)*((int *)a4 + 4);
    goto LABEL_23;
  }
  return 0LL;
}
