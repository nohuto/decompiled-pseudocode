/*
 * XREFs of xxxTouchTargetWindow @ 0x1C01F0D9C
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C006E8C8 (xxxDCompSpeedHitTest.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01ED96C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C006E870 (-CanHitTestInDwm@@YA_NXZ.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00C9518 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01ECCB8 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01ECD8C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01ED2BC (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01ED2F4 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxTouchTargetWindow(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        int *a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        _QWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13)
{
  _BYTE *v14; // rcx
  __int64 *v17; // rsi
  int v18; // r13d
  unsigned int v19; // edi
  unsigned __int64 v20; // r13
  __int128 *v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // eax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // rax
  const struct _D3DMATRIX *v45; // rcx
  int Prop; // eax
  unsigned __int64 v47; // r8
  BOOL v48; // r12d
  const struct _D3DMATRIX *v49; // rcx
  __int64 v50; // rax
  int v51; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v52[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v53; // [rsp+70h] [rbp-90h]
  __int128 v54; // [rsp+80h] [rbp-80h]
  __int128 v55; // [rsp+90h] [rbp-70h]
  __int128 v56; // [rsp+A0h] [rbp-60h]
  __int128 v57; // [rsp+B0h] [rbp-50h]
  __int128 v58; // [rsp+C0h] [rbp-40h]
  __int128 v59; // [rsp+D0h] [rbp-30h]
  __int128 v60; // [rsp+E0h] [rbp-20h]
  __int128 v61; // [rsp+F0h] [rbp-10h]
  __int128 v62; // [rsp+100h] [rbp+0h]
  __int128 v63; // [rsp+110h] [rbp+10h]
  _BYTE v64[224]; // [rsp+120h] [rbp+20h] BYREF
  int v65; // [rsp+210h] [rbp+110h]

  v14 = (_BYTE *)*((_QWORD *)a1 + 5);
  v51 = 0;
  v52[0] = 0;
  v17 = 0LL;
  v18 = 0;
  v65 = 0;
  if ( (v14[31] & 0x10) == 0
    || (v14[26] & 8) != 0 && (v14[24] & 0x20) != 0
    || a7 && (unsigned int)GetWindowCloakState((__int64)a1) )
  {
    return 0LL;
  }
  v19 = 1;
  if ( a8
    && CanHitTestInDwm()
    && ((unsigned int)WindowHasCompositionTarget(a1, 1) || (unsigned int)WindowHasCompositionTarget(a1, 0))
    && !(unsigned int)CanPointStartResize(a1, a2, *a3) )
  {
    v20 = *(_QWORD *)a1;
    v21 = (__int128 *)DCompHitTest(v64, 2LL, 0LL, *a3, a9, 0, &v51, v52);
    v22 = 128LL;
    v23 = v21[1];
    v53 = *v21;
    v24 = v21[2];
    v54 = v23;
    v25 = v21[3];
    v55 = v24;
    v26 = v21[4];
    v56 = v25;
    v27 = v21[5];
    v57 = v26;
    v28 = v21[6];
    v58 = v27;
    v29 = v21[8];
    v59 = v28;
    v60 = v21[7];
    v30 = v21[9];
    v61 = v29;
    v31 = v21[10];
    v62 = v30;
    v63 = v31;
    if ( DWORD1(v58) == 2 )
      v32 = -(v58 & 1);
    else
      v32 = 0;
    if ( !v32 )
    {
      if ( a13 )
      {
        v33 = v54;
        *a13 = v53;
        v34 = v55;
        a13[1] = v33;
        v35 = v56;
        a13[2] = v34;
        v36 = v57;
        a13[3] = v35;
        v37 = v58;
        a13[4] = v36;
        v38 = v59;
        a13[5] = v37;
        v39 = v60;
        a13[6] = v38;
        v40 = v61;
        a13[7] = v39;
        v41 = v62;
        a13[8] = v40;
        v42 = v63;
        a13[9] = v41;
        a13[10] = v42;
      }
      v65 = 1;
      if ( DWORD1(v58) == 2 )
        v17 = (__int64 *)*((_QWORD *)&v57 + 1);
    }
    LOBYTE(v22) = 1;
    v43 = HMValidateHandleNoSecure(v20, v22);
    if ( !v43 || *(char *)(*(_QWORD *)(v43 + 40) + 19LL) < 0 )
    {
      EtwTraceDITSpeedHitTestFailedRevalidation(v20);
      return 0LL;
    }
    v18 = v65;
  }
  if ( a7 )
  {
    v45 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 25);
    if ( v45 )
      ApplyWindowTransform(v45, a3, (struct tagRECT *)a2, 1);
  }
  Prop = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  v47 = (unsigned __int64)*a3;
  *a4 = Prop;
  v48 = BasicTargetingHitTest((__int64)a1, (__int64)a2, v47, a5, a6, a7, 0LL, 4, 1, Prop, v18);
  if ( !v48 || *a5 )
    v19 = 0;
  ClipContact(a1, a2, v19, 0LL);
  if ( a7 )
  {
    v49 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 25);
    if ( v49 )
      ApplyWindowTransform(v49, 0LL, (struct tagRECT *)a2, 0);
  }
  if ( a10 )
  {
    v50 = 0LL;
    if ( v17 )
      v50 = *v17;
    *a10 = v50;
  }
  if ( a11 )
    *a11 = v51;
  if ( a12 )
    *a12 = v52[0];
  return v48;
}
