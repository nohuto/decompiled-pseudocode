/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0204048
 * Callers:
 *     xxxPointerSpeedHitTest @ 0x1C02068C4 (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C0206BD0 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0017FEC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C0203C84 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C0207040 (xxxTouchTargetWindow.c)
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
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // esi
  const struct _D3DMATRIX *v23; // r8
  struct tagRECT *ScreenRect; // rax
  const struct _D3DMATRIX *v25; // r8
  __m128i v26; // xmm6
  const struct _D3DMATRIX *v27; // r8
  struct tagRECT *v28; // rax
  const struct _D3DMATRIX *v29; // r8
  __m128i v30; // xmm6
  const struct _D3DMATRIX *v31; // r8
  struct tagRECT *v32; // rax
  const struct _D3DMATRIX *v33; // r8
  __m128i v34; // xmm6
  const struct _D3DMATRIX *v35; // r8
  struct tagRECT *v36; // rax
  const struct _D3DMATRIX *v37; // r8
  __m128i v38; // xmm6
  _QWORD v40[3]; // [rsp+40h] [rbp-A9h] BYREF
  int v41; // [rsp+58h] [rbp-91h]
  BOOL v42; // [rsp+5Ch] [rbp-8Dh]
  __int64 v43; // [rsp+60h] [rbp-89h]
  struct tagPOINT v44; // [rsp+68h] [rbp-81h] BYREF
  char v45[8]; // [rsp+70h] [rbp-79h] BYREF
  struct tagRECT v46; // [rsp+78h] [rbp-71h] BYREF
  struct tagRECT v47; // [rsp+88h] [rbp-61h] BYREF
  struct tagRECT v48; // [rsp+98h] [rbp-51h] BYREF
  struct tagRECT v49; // [rsp+A8h] [rbp-41h] BYREF
  struct tagRECT v50; // [rsp+B8h] [rbp-31h] BYREF
  struct tagRECT v51; // [rsp+C8h] [rbp-21h] BYREF
  struct tagRECT v52; // [rsp+D8h] [rbp-11h] BYREF
  struct tagRECT v53; // [rsp+E8h] [rbp-1h] BYREF
  __int64 v54; // [rsp+148h] [rbp+5Fh] BYREF
  struct tagTOUCHTARGETINGCONTACT *v55; // [rsp+150h] [rbp+67h]
  struct tagPOINT *v56; // [rsp+158h] [rbp+6Fh]

  v56 = a3;
  v55 = a2;
  v6 = 0LL;
  LODWORD(v43) = 4094;
  v42 = 0;
  v8 = a2;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v45);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned __int8)IsInputThread(v13, v12, v14) )
    UserAtomicCheck::Detach((UserAtomicCheck *)v45);
  v15 = *((_QWORD *)a1 + 14);
  if ( !v15 )
    goto LABEL_18;
  do
  {
    if ( !*((_DWORD *)v8 + 44) && !*((_DWORD *)v8 + 45) )
      break;
    v44 = *v56;
    v16 = xxxTouchTargetWindow((struct tagWND *)v15, v8, &v44, (__int64)&v54, (__int64)a4, a5);
    LOBYTE(v17) = 1;
    v18 = v16;
    v21 = HMValidateHandleNoSecure(v10, v17, v19, v20);
    v9 = v21;
    if ( v18 )
    {
      if ( !v21 )
        goto LABEL_14;
      v22 = a5;
      v23 = *(const struct _D3DMATRIX **)(v21 + 216);
      *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v21 + 40) + 88LL);
      ScreenRect = GetScreenRect(&v46, a5, v23, (struct tagRECT *)&v40[1]);
      v25 = *(const struct _D3DMATRIX **)(v15 + 216);
      v26 = *(__m128i *)ScreenRect;
      *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(v26) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v47, v22, v25, (struct tagRECT *)&v40[1]),
                                         8)) )
        goto LABEL_13;
      v27 = *(const struct _D3DMATRIX **)(v15 + 216);
      *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      v28 = GetScreenRect(&v48, v22, v27, (struct tagRECT *)&v40[1]);
      v29 = *(const struct _D3DMATRIX **)(v9 + 216);
      v30 = *(__m128i *)v28;
      *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(v30) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v49, v22, v29, (struct tagRECT *)&v40[1]),
                                         8)) )
        goto LABEL_13;
      v31 = *(const struct _D3DMATRIX **)(v9 + 216);
      *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      v32 = GetScreenRect(&v50, v22, v31, (struct tagRECT *)&v40[1]);
      v33 = *(const struct _D3DMATRIX **)(v15 + 216);
      v34 = *(__m128i *)v32;
      *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v34, 4)) >= _mm_srli_si128(
                                                          *(__m128i *)GetScreenRect(
                                                                        &v51,
                                                                        v22,
                                                                        v33,
                                                                        (struct tagRECT *)(v40 + 8)),
                                                          8).m128i_i32[1]
        || (v35 = *(const struct _D3DMATRIX **)(v15 + 216),
            *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL),
            v36 = GetScreenRect(&v52, v22, v35, (struct tagRECT *)&v40[1]),
            v37 = *(const struct _D3DMATRIX **)(v9 + 216),
            v38 = *(__m128i *)v36,
            *(_OWORD *)&v40[1] = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 88LL),
            _mm_cvtsi128_si32(_mm_srli_si128(v38, 4)) >= _mm_srli_si128(
                                                           *(__m128i *)GetScreenRect(
                                                                         &v53,
                                                                         v22,
                                                                         v37,
                                                                         (struct tagRECT *)(v40 + 8)),
                                                           8).m128i_i32[1]) )
      {
LABEL_13:
        if ( (unsigned __int16)v54 + ((_WORD)v41 != 3 ? 0xFFF : 0) < (unsigned int)((unsigned __int16)v43
                                                                                  + (!v42 ? 0xFFF : 0)) )
        {
LABEL_14:
          v9 = v15;
          v42 = (_WORD)v41 == 3;
          v10 = *(_QWORD *)v15;
          v6 = *a4;
          v11 = v44;
          LODWORD(v43) = (unsigned __int16)v54;
        }
      }
    }
    v15 = *(_QWORD *)(v15 + 88);
    v8 = v55;
  }
  while ( v15 );
  if ( v9 )
  {
    *v56 = v11;
    *a4 = v6;
  }
  else
  {
LABEL_18:
    a4->x = 0;
    a4->y = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v45);
  return (struct tagWND *)v9;
}
