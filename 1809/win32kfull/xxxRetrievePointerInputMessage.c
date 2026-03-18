/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01DB884
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01DC054 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0107208 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x1C0111038 (CheckPwndFilter.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01DC188 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        __int64 *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14)
{
  struct tagQMSG *v14; // r13
  unsigned __int64 v16; // rdi
  unsigned int v17; // r14d
  bool v18; // cf
  int v19; // eax
  int v20; // r12d
  __int64 result; // rax
  __int64 v22; // rax
  HWND v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned int v26; // edi
  int *v27; // r13
  __int64 v28; // rcx
  int v29; // ecx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v31; // r9
  __int128 *v32; // rax
  unsigned __int64 v33; // r14
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-98h]
  HWND v50; // [rsp+78h] [rbp-90h] BYREF
  __int64 v51; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-80h]
  __int128 v53; // [rsp+98h] [rbp-70h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B8h] [rbp-50h]
  __int128 v56; // [rsp+C8h] [rbp-40h]
  __int128 v57; // [rsp+D8h] [rbp-30h]
  __int128 v58; // [rsp+E8h] [rbp-20h]
  __int128 v59; // [rsp+F8h] [rbp-10h]
  __int128 v60; // [rsp+108h] [rbp+0h]
  __int128 v61; // [rsp+118h] [rbp+10h]
  __int128 v62; // [rsp+128h] [rbp+20h]
  __int128 v63; // [rsp+138h] [rbp+30h]
  __int128 v64; // [rsp+148h] [rbp+40h]
  __int128 v65; // [rsp+158h] [rbp+50h]
  __int128 v66; // [rsp+168h] [rbp+60h]
  __int128 v67; // [rsp+178h] [rbp+70h]
  __int128 v68; // [rsp+188h] [rbp+80h]
  __int128 v69; // [rsp+198h] [rbp+90h]
  __int128 v70; // [rsp+1A8h] [rbp+A0h]
  __int128 v71; // [rsp+1B8h] [rbp+B0h]
  __int128 v72; // [rsp+1C8h] [rbp+C0h]
  __int128 v73; // [rsp+1D8h] [rbp+D0h]
  __int128 v74; // [rsp+1E8h] [rbp+E0h]
  int v75[56]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v76; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v77; // [rsp+2F0h] [rbp+1E8h]
  unsigned int v78; // [rsp+2F8h] [rbp+1F0h]
  unsigned int v79; // [rsp+300h] [rbp+1F8h]

  v79 = a4;
  v78 = a3;
  v77 = a2;
  v14 = a8;
  v47 = 0LL;
  v51 = 0LL;
  v16 = *((_QWORD *)a8 + 5);
  v17 = *((_DWORD *)a8 + 6);
  v18 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v49 = *((_QWORD *)a8 + 4);
  v19 = *(_DWORD *)(a1 + 1208);
  v20 = -v18;
  v52 = v16;
  if ( (v19 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( !a6 )
  {
    *(_DWORD *)(a1 + 1208) = v19 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v17);
    if ( !CTouchProcessor::SetPointerFrameTargetWindows(
            gpTouchProcessor,
            (struct tagTHREADINFO *)a1,
            v16,
            v17,
            (int *)&v48) )
    {
      EtwTraceEndPointerSetTargetWindows(v17);
      *(_DWORD *)(a1 + 1208) &= ~0x100u;
      return (unsigned int)((_DWORD)v48 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v17);
    v22 = *(_QWORD *)(a1 + 432);
    *(_DWORD *)(a1 + 1208) &= ~0x100u;
    if ( *(struct tagQMSG **)(v22 + 80) != v14 )
      return 4LL;
  }
  if ( v17 == 595 )
  {
    v46 = 0x100000000LL;
    v23 = (HWND)*((_QWORD *)v14 + 2);
    v47 = 0LL;
    v50 = v23;
    v76 = 1;
    LODWORD(a8) = 1;
  }
  else
  {
    if ( !CTouchProcessor::GetPointerMessageInfo(
            gpTouchProcessor,
            v16,
            v20,
            &v50,
            &v76,
            (int *)&a8,
            (unsigned int *)&v46 + 1,
            (unsigned int *)&v46) )
      return 3LL;
    v23 = v50;
  }
  LOBYTE(a2) = 1;
  v24 = HMValidateHandleNoSecure((unsigned __int64)v23, a2);
  v25 = v24;
  if ( !v24 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v24, v77) )
    return 4LL;
  v26 = v17;
  if ( a5 && (_DWORD)a8 != 1 )
  {
    switch ( v17 )
    {
      case 0x245u:
        v26 = 577;
        break;
      case 0x246u:
        v26 = 578;
        break;
      case 0x247u:
        v26 = 579;
        break;
    }
  }
  if ( v78 || v79 != -1 )
  {
    if ( v78 <= v79 )
    {
      if ( v26 < v78 || v26 > v79 )
        return 4LL;
    }
    else if ( v26 >= v79 && v26 <= v78 )
    {
      return 4LL;
    }
  }
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v25, v14, a13, a7, a14) )
  {
LABEL_36:
    *a9 = v25;
    return 2LL;
  }
  v27 = a13;
  if ( *a13 )
  {
    v28 = *(_QWORD *)(v25 + 16);
    if ( *(_QWORD *)(v28 + 432) == *(_QWORD *)(a1 + 432) )
    {
      v29 = *(_DWORD *)(v28 + 1208) & 0x8000;
      if ( !v29 || (((_DWORD)a8 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v29 )
          goto LABEL_36;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState() )
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1080), v49);
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 12) |= 8u;
    goto LABEL_44;
  }
  v32 = (__int128 *)INPUTDEST_FROM_PWND(v75, v25);
  v45 = v17;
  v33 = v52;
  v34 = v32[1];
  v64 = *v32;
  v35 = v32[2];
  v65 = v34;
  v36 = v32[3];
  v66 = v35;
  v37 = v32[4];
  v67 = v36;
  v38 = v32[5];
  v68 = v37;
  v39 = v32[6];
  v69 = v38;
  v40 = v32[8];
  v70 = v39;
  v71 = v32[7];
  v41 = v32[9];
  v72 = v40;
  v42 = v32[10];
  v73 = v41;
  v74 = v42;
  v53 = v64;
  v54 = v65;
  v55 = v66;
  v56 = v67;
  v57 = v68;
  v58 = v69;
  v59 = v70;
  v60 = v71;
  v61 = v72;
  v62 = v41;
  v63 = v42;
  CTouchProcessor::AdjustCaptureOnRetrieval(
    gpTouchProcessor,
    &v53,
    (unsigned int)v46,
    v52,
    (_DWORD)a8,
    v76,
    v20,
    *a7,
    v45);
  v53 = v64;
  v54 = v65;
  v55 = v66;
  v56 = v67;
  v57 = v68;
  v58 = v69;
  v59 = v70;
  v60 = v71;
  v61 = v72;
  v62 = v73;
  v63 = v74;
  if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(
                        gpTouchProcessor,
                        v33,
                        &v53,
                        (unsigned int)a8,
                        v20,
                        &v47,
                        &v51) )
    return 3LL;
  if ( (((_DWORD)a8 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v53 = v64;
  v54 = v65;
  v55 = v66;
  v56 = v67;
  v57 = v68;
  v58 = v69;
  v59 = v70;
  v60 = v71;
  v61 = v72;
  v62 = v73;
  v63 = v74;
  if ( !(unsigned int)CTouchProcessor::AddThreadPointerData(
                        gpTouchProcessor,
                        a1 + 1080,
                        (unsigned __int16)v49,
                        HIDWORD(v46),
                        v33,
                        v26,
                        &v53,
                        1) )
    return 3LL;
  v31 = v49;
LABEL_44:
  *a9 = v25;
  *a10 = v26;
  if ( v26 - 577 > 3 )
    v43 = v31;
  else
    v43 = (unsigned __int16)v31 | (unsigned __int64)((unsigned __int16)a8 << 16);
  result = 1LL;
  *a11 = v43;
  *a12 = (unsigned __int16)v47 | (unsigned __int64)(WORD2(v47) << 16);
  v44 = v51;
  *v27 = 0;
  *(_QWORD *)(a1 + 1268) = v44;
  return result;
}
