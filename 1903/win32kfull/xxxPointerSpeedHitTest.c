/*
 * XREFs of xxxPointerSpeedHitTest @ 0x1C02068C4
 * Callers:
 *     EditionPointerSpeedHitTest @ 0x1C0205D70 (EditionPointerSpeedHitTest.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C00266A0 (xxxSpeedHitTest.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C002680C (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0204048 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     TouchTargetChildTree @ 0x1C0206038 (TouchTargetChildTree.c)
 *     TouchTargetingCreateContact @ 0x1C025BE70 (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPointerSpeedHitTest(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct tagWND *v5; // rbx
  unsigned __int8 v10; // r14
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  struct tagPOINT v17; // rcx
  __int128 *v18; // r15
  __int64 v19; // r8
  __int128 v20; // xmm0
  int v21; // eax
  _QWORD *v22; // rax
  struct tagWND *v23; // rdi
  struct tagWND *v24; // rax
  _DWORD *v25; // rax
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  __int128 v30; // xmm7
  __int128 v31; // xmm8
  __int64 v32; // xmm0_8
  struct tagPOINT v34; // [rsp+58h] [rbp-B0h] BYREF
  struct tagPOINT v35[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v37[3]; // [rsp+7Ch] [rbp-8Ch]
  __int128 v38; // [rsp+94h] [rbp-74h]
  int v39; // [rsp+A4h] [rbp-64h]
  __int128 v40; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v41[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v42; // [rsp+138h] [rbp+30h] BYREF
  __int128 v43; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v44[184]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v45; // [rsp+210h] [rbp+108h]

  v5 = 0LL;
  v10 = 0;
  memset(v41, 0, 0x78uLL);
  v11 = v41[1];
  *(_OWORD *)a5 = v41[0];
  v12 = v41[2];
  *(_OWORD *)(a5 + 16) = v11;
  v13 = v41[3];
  *(_OWORD *)(a5 + 32) = v12;
  v14 = v41[4];
  *(_OWORD *)(a5 + 48) = v13;
  v15 = v41[5];
  *(_OWORD *)(a5 + 64) = v14;
  v16 = v41[6];
  *(_OWORD *)(a5 + 80) = v15;
  *(_QWORD *)&v15 = *(_QWORD *)&v41[7];
  *(_OWORD *)(a5 + 96) = v16;
  *(_QWORD *)(a5 + 112) = v15;
  v17 = *(struct tagPOINT *)(a2 + 32);
  v34 = v17;
  if ( a1 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(v17, a2) )
  {
    return (unsigned int)xxxSpeedHitTest(a1, *(_DWORD *)a2, a3, *(_QWORD *)(a2 + 80), &v34, 0LL, a4, a5) != 0;
  }
  else
  {
    memset(v44, 0, sizeof(v44));
    v36 = 0;
    v42 = 0uLL;
    v18 = 0LL;
    v43 = 0uLL;
    EtwTraceTouchTargetingSpeedHitTestStart();
    v45 = 0LL;
    if ( (unsigned int)_GetDeviceRects(a2, &v42, &v43) )
    {
      *(_OWORD *)&v35[0].x = v43;
      v40 = v42;
      _SetHimetricToPixelRatio(&v40, v35, v44);
      v18 = &v42;
    }
    v20 = *(_OWORD *)(a2 + 104);
    v37[0] = *(_QWORD *)(a2 + 32);
    v21 = *(_DWORD *)(a2 + 100);
    *(_OWORD *)&v37[1] = v20;
    v38 = v20;
    if ( (v21 & 2) != 0 )
      v39 = *(_DWORD *)(a2 + 136);
    else
      v39 = 0;
    TouchTargetingCreateContact(&v36, v18, v19, v44);
    if ( g_bHitTestDwmFirstForTouch && CanHitTestInDwm() )
    {
      return (unsigned __int8)xxxDCompSpeedHitTest(
                                *(_DWORD *)a2,
                                0x10u,
                                &v34,
                                0LL,
                                0,
                                *(_QWORD *)(a2 + 80),
                                (struct tagTOUCHTARGETINGCONTACT *)v44,
                                a4,
                                a5);
    }
    else
    {
      v35[0] = 0LL;
      v22 = *(_QWORD **)(grpdeskRitInput + 8LL);
      v23 = (struct tagWND *)v22[3];
      v24 = TopLevelTouchTarget(v23, (struct tagTOUCHTARGETINGCONTACT *)v44, &v34, v35, *(_DWORD *)(*v22 + 64LL) & 1);
      if ( v24 )
      {
        v10 = 1;
        v23 = TouchTargetChildTree(v24, (struct tagTOUCHTARGETINGCONTACT *)v44, *(_QWORD *)&v34, v35);
      }
      if ( *(_DWORD *)(a5 + 92) == 2 )
        v5 = *(struct tagWND **)(a5 + 80);
      if ( v5 != v23 )
      {
        v25 = INPUTDEST_FROM_PWND(v41, (__int64)v23);
        v26 = *((_OWORD *)v25 + 1);
        v27 = *((_OWORD *)v25 + 2);
        v28 = *((_OWORD *)v25 + 3);
        v29 = *((_OWORD *)v25 + 4);
        v30 = *((_OWORD *)v25 + 5);
        v31 = *((_OWORD *)v25 + 6);
        v32 = *((_QWORD *)v25 + 14);
        *(_OWORD *)a5 = *(_OWORD *)v25;
        *(_OWORD *)(a5 + 16) = v26;
        *(_OWORD *)(a5 + 32) = v27;
        *(_OWORD *)(a5 + 48) = v28;
        *(_OWORD *)(a5 + 64) = v29;
        *(_OWORD *)(a5 + 80) = v30;
        *(_OWORD *)(a5 + 96) = v31;
        *(_QWORD *)(a5 + 112) = v32;
      }
    }
  }
  return v10;
}
