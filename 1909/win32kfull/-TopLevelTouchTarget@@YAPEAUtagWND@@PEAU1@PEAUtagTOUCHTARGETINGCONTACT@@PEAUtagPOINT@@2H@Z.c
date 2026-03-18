/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0203D98
 * Callers:
 *     xxxPointerSpeedHitTest @ 0x1C0206614 (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C0206920 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C01359F0 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C02039D4 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C0206D90 (xxxTouchTargetWindow.c)
 */

struct tagWND *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5)
{
  struct tagPOINT v6; // rbx
  struct tagTOUCHTARGETINGCONTACT *v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  struct tagPOINT v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // esi
  const struct _D3DMATRIX *v22; // r8
  struct tagRECT *ScreenRect; // rax
  const struct _D3DMATRIX *v24; // r8
  __m128i v25; // xmm6
  const struct _D3DMATRIX *v26; // r8
  struct tagRECT *v27; // rax
  const struct _D3DMATRIX *v28; // r8
  __m128i v29; // xmm6
  const struct _D3DMATRIX *v30; // r8
  struct tagRECT *v31; // rax
  const struct _D3DMATRIX *v32; // r8
  __m128i v33; // xmm6
  const struct _D3DMATRIX *v34; // r8
  struct tagRECT *v35; // rax
  const struct _D3DMATRIX *v36; // r8
  __m128i v37; // xmm6
  _QWORD v39[3]; // [rsp+40h] [rbp-A9h] BYREF
  int v40; // [rsp+58h] [rbp-91h]
  BOOL v41; // [rsp+5Ch] [rbp-8Dh]
  __int64 v42; // [rsp+60h] [rbp-89h]
  struct tagPOINT v43; // [rsp+68h] [rbp-81h] BYREF
  char v44[8]; // [rsp+70h] [rbp-79h] BYREF
  struct tagRECT v45; // [rsp+78h] [rbp-71h] BYREF
  struct tagRECT v46; // [rsp+88h] [rbp-61h] BYREF
  struct tagRECT v47; // [rsp+98h] [rbp-51h] BYREF
  struct tagRECT v48; // [rsp+A8h] [rbp-41h] BYREF
  struct tagRECT v49; // [rsp+B8h] [rbp-31h] BYREF
  struct tagRECT v50; // [rsp+C8h] [rbp-21h] BYREF
  struct tagRECT v51; // [rsp+D8h] [rbp-11h] BYREF
  struct tagRECT v52; // [rsp+E8h] [rbp-1h] BYREF
  __int64 v53; // [rsp+148h] [rbp+5Fh] BYREF
  struct tagTOUCHTARGETINGCONTACT *v54; // [rsp+150h] [rbp+67h]
  struct tagPOINT *v55; // [rsp+158h] [rbp+6Fh]

  v55 = a3;
  v54 = a2;
  v6 = 0LL;
  LODWORD(v42) = 4094;
  v41 = 0;
  v8 = a2;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v44);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned __int8)IsInputThread(v13, v12, v14) )
    UserAtomicCheck::Detach((UserAtomicCheck *)v44);
  v15 = *((_QWORD *)a1 + 14);
  if ( !v15 )
    goto LABEL_18;
  do
  {
    if ( !*((_DWORD *)v8 + 44) && !*((_DWORD *)v8 + 45) )
      break;
    v43 = *v55;
    v16 = xxxTouchTargetWindow((struct tagWND *)v15, v8, &v43, (__int64)&v53, (__int64)a4, a5);
    LOBYTE(v17) = 1;
    v18 = v16;
    v20 = HMValidateHandleNoSecure(v10, v17, v19);
    v9 = v20;
    if ( v18 )
    {
      if ( !v20 )
        goto LABEL_14;
      v21 = a5;
      v22 = *(const struct _D3DMATRIX **)(v20 + 216);
      *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v20 + 40) + 88LL);
      ScreenRect = GetScreenRect(&v45, a5, v22, (struct tagRECT *)&v39[1]);
      v24 = *(const struct _D3DMATRIX **)(v15 + 216);
      v25 = *(__m128i *)ScreenRect;
      *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(v25) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v46, v21, v24, (struct tagRECT *)&v39[1]),
                                         8)) )
        goto LABEL_13;
      v26 = *(const struct _D3DMATRIX **)(v15 + 216);
      *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      v27 = GetScreenRect(&v47, v21, v26, (struct tagRECT *)&v39[1]);
      v28 = *(const struct _D3DMATRIX **)(v9 + 216);
      v29 = *(__m128i *)v27;
      *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(v29) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v48, v21, v28, (struct tagRECT *)&v39[1]),
                                         8)) )
        goto LABEL_13;
      v30 = *(const struct _D3DMATRIX **)(v9 + 216);
      *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      v31 = GetScreenRect(&v49, v21, v30, (struct tagRECT *)&v39[1]);
      v32 = *(const struct _D3DMATRIX **)(v15 + 216);
      v33 = *(__m128i *)v31;
      *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v33, 4)) >= _mm_srli_si128(
                                                          *(__m128i *)GetScreenRect(
                                                                        &v50,
                                                                        v21,
                                                                        v32,
                                                                        (struct tagRECT *)(v39 + 8)),
                                                          8).m128i_i32[1]
        || (v34 = *(const struct _D3DMATRIX **)(v15 + 216),
            *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL),
            v35 = GetScreenRect(&v51, v21, v34, (struct tagRECT *)&v39[1]),
            v36 = *(const struct _D3DMATRIX **)(v9 + 216),
            v37 = *(__m128i *)v35,
            *(_OWORD *)&v39[1] = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 88LL),
            _mm_cvtsi128_si32(_mm_srli_si128(v37, 4)) >= _mm_srli_si128(
                                                           *(__m128i *)GetScreenRect(
                                                                         &v52,
                                                                         v21,
                                                                         v36,
                                                                         (struct tagRECT *)(v39 + 8)),
                                                           8).m128i_i32[1]) )
      {
LABEL_13:
        if ( (unsigned __int16)v53 + ((_WORD)v40 != 3 ? 0xFFF : 0) < (unsigned int)((unsigned __int16)v42
                                                                                  + (!v41 ? 0xFFF : 0)) )
        {
LABEL_14:
          v9 = v15;
          v41 = (_WORD)v40 == 3;
          v10 = *(_QWORD *)v15;
          v6 = *a4;
          v11 = v43;
          LODWORD(v42) = (unsigned __int16)v53;
        }
      }
    }
    v15 = *(_QWORD *)(v15 + 88);
    v8 = v54;
  }
  while ( v15 );
  if ( v9 )
  {
    *v55 = v11;
    *a4 = v6;
  }
  else
  {
LABEL_18:
    a4->x = 0;
    a4->y = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v44);
  return (struct tagWND *)v9;
}
