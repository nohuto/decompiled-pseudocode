/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01ED96C
 * Callers:
 *     xxxPointerSpeedHitTest @ 0x1C01F0534 (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C01F0930 (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00CD26C (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C01ED5A8 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C01F0D9C (xxxTouchTargetWindow.c)
 */

struct tagWND *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5,
        unsigned __int64 a6,
        int *a7,
        unsigned int *a8,
        struct tagINPUTDEST *a9)
{
  __int64 v10; // r15
  int v11; // esi
  struct tagPOINT v13; // rbx
  struct tagPOINT v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // rax
  int v25; // esi
  struct tagRECT v26; // xmm0
  struct tagRECT v27; // xmm6
  struct tagRECT v28; // xmm0
  struct tagRECT v29; // xmm6
  struct tagRECT v30; // xmm6
  struct tagRECT v31; // xmm6
  __int64 v32; // rax
  int v34; // [rsp+78h] [rbp-90h]
  struct tagRECT v35; // [rsp+88h] [rbp-80h] BYREF
  __int16 v36; // [rsp+98h] [rbp-70h]
  BOOL v37; // [rsp+9Ch] [rbp-6Ch]
  __int64 v38; // [rsp+A0h] [rbp-68h] BYREF
  int v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h]
  struct _D3DMATRIX *v42; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v43; // [rsp+C8h] [rbp-40h]
  struct tagRECT v44; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-20h] BYREF
  struct tagPOINT v46; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v47; // [rsp+F8h] [rbp-10h]
  char v48[8]; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT v49; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v50; // [rsp+118h] [rbp+10h] BYREF
  struct tagRECT v51; // [rsp+128h] [rbp+20h] BYREF
  struct tagRECT v52; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT v53; // [rsp+148h] [rbp+40h] BYREF
  struct tagRECT v54; // [rsp+158h] [rbp+50h] BYREF
  struct tagRECT v55; // [rsp+168h] [rbp+60h] BYREF
  struct tagRECT v56; // [rsp+178h] [rbp+70h] BYREF
  __int64 v57; // [rsp+1D8h] [rbp+D0h] BYREF
  struct tagTOUCHTARGETINGCONTACT *v58; // [rsp+1E0h] [rbp+D8h]
  struct tagPOINT *v59; // [rsp+1E8h] [rbp+E0h]

  v59 = a3;
  v58 = a2;
  v39 = 4094;
  v37 = 0;
  v10 = 0LL;
  v47 = 0LL;
  v43 = 0LL;
  v11 = 0;
  v34 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v48);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned __int8)IsInputThread(v17, v16, v18, v19) )
    UserAtomicCheck::Detach((UserAtomicCheck *)v48);
  v20 = *((_QWORD *)a1 + 11);
  if ( !v20 )
    goto LABEL_19;
  do
  {
    v45 = 0LL;
    v38 = 0LL;
    if ( !*((_DWORD *)v58 + 44) && !*((_DWORD *)v58 + 45) )
      break;
    v46 = *v59;
    v21 = xxxTouchTargetWindow(
            (struct tagWND *)v20,
            v58,
            &v46,
            (__int64)&v57,
            (__int64)a4,
            a5,
            !g_bHitTestDwmFirstForTouch,
            a6,
            (__int64)&v45,
            (__int64)&v38,
            (__int64)&v38 + 4,
            (__int64)a9);
    LOBYTE(v22) = 1;
    v23 = v21;
    v24 = HMValidateHandleNoSecure(v43, v22);
    v10 = v24;
    if ( !v23 )
      goto LABEL_15;
    if ( !v24 )
      goto LABEL_14;
    v25 = a5;
    v41 = *(_QWORD *)(v24 + 40);
    v26 = *(struct tagRECT *)(v41 + 88);
    v42 = *(struct _D3DMATRIX **)(v24 + 200);
    v44 = v26;
    v27 = *GetScreenRect(&v49, a5, v42, &v44);
    v40 = *(_QWORD *)(v20 + 40);
    v28 = *(struct tagRECT *)(v40 + 88);
    *(_QWORD *)&v44.left = *(_QWORD *)(v20 + 200);
    v35 = v28;
    if ( _mm_cvtsi128_si32((__m128i)v27) < _mm_cvtsi128_si32(
                                             _mm_srli_si128(
                                               *(__m128i *)GetScreenRect(
                                                             &v50,
                                                             v25,
                                                             *(const struct _D3DMATRIX **)&v44.left,
                                                             &v35),
                                               8)) )
    {
      v35 = *(struct tagRECT *)(v40 + 88);
      v29 = *GetScreenRect(&v51, v25, *(const struct _D3DMATRIX **)&v44.left, &v35);
      v35 = *(struct tagRECT *)(v41 + 88);
      if ( _mm_cvtsi128_si32((__m128i)v29) < _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)GetScreenRect(
                                                                                            &v52,
                                                                                            v25,
                                                                                            v42,
                                                                                            &v35), 8)) )
      {
        v35 = *(struct tagRECT *)(v41 + 88);
        v30 = *GetScreenRect(&v53, v25, v42, &v35);
        v35 = *(struct tagRECT *)(v40 + 88);
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v30, 4)) < _mm_srli_si128(
                                                                    *(__m128i *)GetScreenRect(
                                                                                  &v54,
                                                                                  v25,
                                                                                  *(const struct _D3DMATRIX **)&v44,
                                                                                  &v35),
                                                                    8).m128i_i32[1] )
        {
          v35 = *(struct tagRECT *)(v40 + 88);
          v31 = *GetScreenRect(&v55, v25, *(const struct _D3DMATRIX **)&v44.left, &v35);
          v35 = *(struct tagRECT *)(v41 + 88);
          if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v31, 4)) < _mm_srli_si128(
                                                                      *(__m128i *)GetScreenRect(&v56, v25, v42, &v35),
                                                                      8).m128i_i32[1] )
            goto LABEL_15;
        }
      }
    }
    v16 = (unsigned __int16)v57 + (v36 != 3 ? 0xFFF : 0);
    if ( (unsigned int)v16 >= (unsigned __int16)v39 + (!v37 ? 0xFFF : 0) )
    {
LABEL_15:
      v11 = v34;
    }
    else
    {
LABEL_14:
      v10 = v20;
      v37 = v36 == 3;
      v43 = *(_QWORD *)v20;
      v11 = v38;
      v15 = HIDWORD(v38);
      v13 = *a4;
      v14 = v46;
      v47 = v45;
      v39 = (unsigned __int16)v57;
      v34 = v38;
    }
    v20 = *(_QWORD *)(v20 + 64);
  }
  while ( v20 );
  if ( v10 )
  {
    *v59 = v14;
    *a4 = v13;
  }
  else
  {
LABEL_19:
    a4->x = 0;
    a4->y = 0;
  }
  if ( v47 )
  {
    LOBYTE(v16) = 1;
    v32 = HMValidateHandleNoSecure(v47, v16);
    if ( v32 )
    {
      v10 = v32;
    }
    else
    {
      v11 = 0;
      v15 = 0;
    }
  }
  if ( a7 )
    *a7 = v11;
  if ( a8 )
    *a8 = v15;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v48);
  return (struct tagWND *)v10;
}
