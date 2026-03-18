/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01F1588
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F1D04 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C00247DC (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0110F34 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x1C011C26C (CheckPwndFilter.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F1E2C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        __int64 *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14,
        int a15)
{
  struct tagQMSG *v15; // rsi
  unsigned int v17; // r13d
  unsigned __int64 v18; // rdi
  unsigned int v19; // r14d
  bool v20; // cf
  int v21; // r12d
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rax
  HWND v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned int v28; // edi
  int *v29; // r13
  __int64 v30; // rcx
  int v31; // ecx
  unsigned __int16 v32; // si
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  _DWORD *v34; // rax
  struct tagQMSG **v35; // rsi
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int128 v38; // xmm4
  __int128 v39; // xmm5
  __int128 v40; // xmm6
  __int128 v41; // xmm7
  __int64 v42; // xmm0_8
  __int64 v43; // rcx
  struct tagQMSG **v44; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+40h] [rbp-C8h]
  unsigned int v46; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  HWND v50; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h]
  unsigned __int64 v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp-78h]
  __int128 v55; // [rsp+98h] [rbp-70h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-60h]
  __int128 v57; // [rsp+B8h] [rbp-50h]
  __int128 v58; // [rsp+C8h] [rbp-40h]
  __int128 v59; // [rsp+D8h] [rbp-30h]
  __int128 v60; // [rsp+E8h] [rbp-20h]
  __int128 v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+108h] [rbp+0h]
  __int128 v63; // [rsp+118h] [rbp+10h]
  __int128 v64; // [rsp+128h] [rbp+20h]
  __int128 v65; // [rsp+138h] [rbp+30h]
  __int128 v66; // [rsp+148h] [rbp+40h]
  __int128 v67; // [rsp+158h] [rbp+50h]
  __int128 v68; // [rsp+168h] [rbp+60h]
  __int128 v69; // [rsp+178h] [rbp+70h]
  _DWORD v70[40]; // [rsp+188h] [rbp+80h] BYREF
  unsigned int v71; // [rsp+268h] [rbp+160h] BYREF
  __int64 v72; // [rsp+270h] [rbp+168h]
  unsigned int v73; // [rsp+278h] [rbp+170h]

  v73 = a3;
  v72 = a2;
  v15 = a8;
  v17 = a4;
  v49 = 0LL;
  v18 = *((_QWORD *)a8 + 5);
  v19 = *((_DWORD *)a8 + 6);
  v20 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v52 = *((_QWORD *)a8 + 4);
  LOWORD(a8) = v52;
  v21 = -v20;
  v22 = *(_DWORD *)(a1 + 1224);
  v53 = 0LL;
  v54 = v18;
  if ( (v22 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( !a6 )
  {
    *(_DWORD *)(a1 + 1224) = v22 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v19);
    if ( !CTouchProcessor::SetPointerFrameTargetWindows(
            gpTouchProcessor,
            (struct tagTHREADINFO *)a1,
            v18,
            v19,
            (int *)&v48) )
    {
      EtwTraceEndPointerSetTargetWindows(v19);
      *(_DWORD *)(a1 + 1224) &= ~0x100u;
      return (unsigned int)((_DWORD)v48 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v19);
    v24 = *(_QWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 1224) &= ~0x100u;
    if ( *(struct tagQMSG **)(v24 + 88) != v15 )
      return 4LL;
  }
  if ( v19 == 595 )
  {
    v25 = (HWND)*((_QWORD *)v15 + 2);
    v50 = v25;
    a15 = 1;
    v71 = 1;
    v47 = 1;
    v46 = 0;
  }
  else
  {
    if ( !CTouchProcessor::GetPointerMessageInfo(gpTouchProcessor, v18, v21, &v50, &a15, (int *)&v71, &v47, &v46) )
      return 3LL;
    v25 = v50;
  }
  LOBYTE(a2) = 1;
  v26 = HMValidateHandleNoSecure((unsigned __int64)v25, a2, a3, a4);
  v27 = v26;
  if ( !v26 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v26, v72) )
    return 4LL;
  v28 = v19;
  if ( a5 && v71 != 1 )
  {
    switch ( v19 )
    {
      case 0x245u:
        v28 = 577;
        break;
      case 0x246u:
        v28 = 578;
        break;
      case 0x247u:
        v28 = 579;
        break;
    }
  }
  if ( v73 || v17 != -1 )
  {
    if ( v73 <= v17 )
    {
      if ( v28 < v73 || v28 > v17 )
        return 4LL;
    }
    else if ( v28 >= v17 && v28 <= v73 )
    {
      return 4LL;
    }
  }
  v29 = a13;
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v27, v15, a13, a7, a14) )
  {
LABEL_36:
    *a9 = v27;
    return 2LL;
  }
  if ( *v29 )
  {
    v30 = *(_QWORD *)(v27 + 16);
    if ( *(_QWORD *)(v30 + 424) == *(_QWORD *)(a1 + 424) )
    {
      v31 = *(_DWORD *)(v30 + 1224) & 0x8000;
      if ( !v31 || ((v71 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v31 )
          goto LABEL_36;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v28) )
  {
    v32 = (unsigned __int16)a8;
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1080), (unsigned __int16)a8);
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 12) |= 8u;
    goto LABEL_43;
  }
  v34 = INPUTDEST_FROM_PWND(v70, v27);
  v35 = (struct tagQMSG **)v54;
  v36 = *((_OWORD *)v34 + 1);
  v37 = *((_OWORD *)v34 + 2);
  v38 = *((_OWORD *)v34 + 3);
  v39 = *((_OWORD *)v34 + 4);
  v40 = *((_OWORD *)v34 + 5);
  v41 = *((_OWORD *)v34 + 6);
  v42 = *((_QWORD *)v34 + 14);
  v63 = *(_OWORD *)v34;
  v64 = v36;
  v45 = *a7;
  v65 = v37;
  v66 = v38;
  v67 = v39;
  v68 = v40;
  v69 = v41;
  v51 = v42;
  v55 = v63;
  v56 = v36;
  v57 = v37;
  v58 = v38;
  v59 = v39;
  v60 = v40;
  v61 = v41;
  v62 = v42;
  CTouchProcessor::AdjustCaptureOnRetrieval(gpTouchProcessor, &v55, v46, v54, v71, a15, v21, v45, v19);
  v55 = v63;
  v56 = v64;
  v57 = v65;
  v58 = v66;
  v59 = v67;
  v60 = v68;
  v61 = v69;
  v62 = v51;
  if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(gpTouchProcessor, v35, &v55, v71, v21, &v49, &v53) )
    return 3LL;
  if ( ((v71 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v55 = v63;
  v56 = v64;
  v57 = v65;
  v44 = v35;
  v32 = (unsigned __int16)a8;
  v58 = v66;
  v59 = v67;
  v60 = v68;
  v61 = v69;
  v62 = v51;
  if ( !(unsigned int)CTouchProcessor::AddThreadPointerData(
                        gpTouchProcessor,
                        a1 + 1080,
                        (unsigned __int16)a8,
                        v47,
                        v44,
                        v28,
                        &v55,
                        1) )
    return 3LL;
LABEL_43:
  *a9 = v27;
  *a10 = v28;
  if ( v28 - 577 <= 3 )
    v52 = v32 | (unsigned __int64)((unsigned __int16)v71 << 16);
  result = 1LL;
  *a11 = v52;
  *a12 = (unsigned __int16)v49 | (unsigned __int64)(WORD2(v49) << 16);
  v43 = v53;
  *v29 = 0;
  *(_QWORD *)(a1 + 1292) = v43;
  return result;
}
