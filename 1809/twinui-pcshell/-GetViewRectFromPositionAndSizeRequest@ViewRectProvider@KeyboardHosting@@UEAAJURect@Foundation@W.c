/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1802CD4B0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802CF6A8 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x1802CF9D8 (-GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@.c)
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
  float v10; // xmm0_4
  int v11; // eax
  bool v12; // al
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // eax
  float v16; // xmm0_4
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int ViewRectOverlay; // ebx
  __int64 v22; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __m128 v28; // xmm0
  __int128 v29; // [rsp+40h] [rbp-31h] BYREF
  __int128 v30; // [rsp+50h] [rbp-21h] BYREF
  __int128 v31; // [rsp+60h] [rbp-11h] BYREF
  __int128 v32; // [rsp+70h] [rbp-1h] BYREF
  __int128 v33; // [rsp+80h] [rbp+Fh]
  __int64 v34; // [rsp+90h] [rbp+1Fh]
  int v35; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+37h]

  v9 = *((_DWORD *)a4 + 2);
  *(_QWORD *)&v29 = 0LL;
  v10 = (float)v9;
  v11 = *((_DWORD *)a4 + 1);
  *((float *)&v29 + 2) = v10;
  *((float *)&v29 + 3) = (float)v11;
  *(_OWORD *)a7 = v29;
  *a8 = 0;
  *a9 = 0;
  v12 = *((_BYTE *)a4 + 24) || *((_BYTE *)a4 + 25);
  switch ( *(_DWORD *)a4 )
  {
    case 1:
      v13 = *(_OWORD *)((-(__int64)v12 & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
      v14 = *((_DWORD *)a4 + 5);
      v29 = v13;
      v15 = v14 & 0xC;
      if ( v15 )
      {
        if ( v15 == 12 )
        {
          v16 = *(float *)&v29;
        }
        else
        {
          if ( (*((_BYTE *)a4 + 20) & 4) == 0 )
          {
            if ( (*((_BYTE *)a4 + 20) & 8) != 0 )
              *(float *)a7 = (float)((float)(*((float *)&v29 + 2) + *(float *)&v29) - (float)*((int *)a4 + 2))
                           - (float)*((int *)a4 + 3);
            goto LABEL_15;
          }
          v16 = (float)*((int *)a4 + 3) + *(float *)&v29;
        }
        *(float *)a7 = v16;
      }
      else
      {
        *(float *)a7 = (float)((float)(*((float *)&v29 + 2) - (float)*((int *)a4 + 2)) * 0.5) + *(float *)&v29;
      }
LABEL_15:
      if ( (*((_DWORD *)a4 + 5) & 3) != 0 && (*((_DWORD *)a4 + 5) & 3) != 3 )
      {
        if ( (*((_BYTE *)a4 + 20) & 2) != 0 )
        {
          *(float *)(a7 + 4) = (float)((float)(*((float *)&v29 + 3) + *((float *)&v29 + 1)) - (float)*((int *)a4 + 1))
                             - (float)*((int *)a4 + 4);
        }
        else if ( (*((_BYTE *)a4 + 20) & 1) != 0 )
        {
          *(float *)(a7 + 4) = (float)*((int *)a4 + 4) + *((float *)&v29 + 1);
        }
      }
      else
      {
        *(float *)(a7 + 4) = (float)((float)(*((float *)&v29 + 3) - (float)*((int *)a4 + 1)) * 0.5)
                           + *((float *)&v29 + 1);
      }
      return 0LL;
    case 2:
      v17 = *a2;
      v29 = *a3;
      v30 = v17;
      v18 = *(_OWORD *)((-(__int64)v12 & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
      v19 = a4[1];
      v35 = *((_DWORD *)a4 + 10);
      v31 = v18;
      v20 = *a4;
      v33 = v19;
      v32 = v20;
      v34 = *((_QWORD *)a4 + 4);
      ViewRectOverlay = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int128 *, __int128 *, char, __int64, _BYTE *, _BYTE *))KeyboardHosting::ViewRectHelper::GetViewRectNearCaret)(
                          &v32,
                          &v31,
                          &v30,
                          &v29,
                          a6,
                          a7,
                          a8,
                          a9);
      if ( ViewRectOverlay < 0 )
      {
        v22 = 82LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)ViewRectOverlay);
        return (unsigned int)ViewRectOverlay;
      }
      break;
    case 3:
      v24 = *a2;
      v31 = *a3;
      v30 = v24;
      v25 = *(_OWORD *)((-(__int64)v12 & 0xFFFFFFFFFFFFFFD0uLL) + a1 + 120);
      v26 = a4[1];
      v35 = *((_DWORD *)a4 + 10);
      v29 = v25;
      v27 = *a4;
      v33 = v26;
      v32 = v27;
      v34 = *((_QWORD *)a4 + 4);
      ViewRectOverlay = KeyboardHosting::ViewRectHelper::GetViewRectOverlay(&v32, &v29, &v30, &v31, a5, a7);
      if ( ViewRectOverlay < 0 )
      {
        v22 = 87LL;
        goto LABEL_25;
      }
      break;
    default:
      v28 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)v12 & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120));
      *(_DWORD *)a7 = v28.m128_i32[0];
      *(float *)(a7 + 4) = (float)((float)(_mm_shuffle_ps(v28, v28, 255).m128_f32[0]
                                         + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
                                 - (float)*((int *)a4 + 1))
                         - (float)*((int *)a4 + 4);
      break;
  }
  return 0LL;
}
