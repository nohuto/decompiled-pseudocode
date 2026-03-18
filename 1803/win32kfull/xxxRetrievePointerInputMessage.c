/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01B8C08
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01B9398 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0023E14 (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00ED278 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x1C00F6928 (CheckPwndFilter.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01B94B0 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
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
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v19; // rdi
  unsigned int v20; // r15d
  bool v21; // cf
  int v22; // eax
  __int64 result; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  HWND v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // edi
  int v30; // eax
  int *v31; // r12
  __int64 v32; // rcx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v34; // r9
  __int128 *v35; // rax
  unsigned __int64 v36; // r13
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v53; // [rsp+70h] [rbp-90h]
  HWND v54; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-78h]
  __int128 v57; // [rsp+90h] [rbp-70h] BYREF
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __int128 v60; // [rsp+C0h] [rbp-40h]
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h]
  __int128 v63; // [rsp+F0h] [rbp-10h]
  __int128 v64; // [rsp+100h] [rbp+0h]
  __int128 v65; // [rsp+110h] [rbp+10h]
  __int128 v66; // [rsp+120h] [rbp+20h]
  __int128 v67; // [rsp+130h] [rbp+30h]
  __int128 v68; // [rsp+140h] [rbp+40h]
  __int128 v69; // [rsp+150h] [rbp+50h]
  __int128 v70; // [rsp+160h] [rbp+60h]
  __int128 v71; // [rsp+170h] [rbp+70h]
  __int128 v72; // [rsp+180h] [rbp+80h]
  __int128 v73; // [rsp+190h] [rbp+90h]
  __int128 v74; // [rsp+1A0h] [rbp+A0h]
  __int128 v75; // [rsp+1B0h] [rbp+B0h]
  __int128 v76; // [rsp+1C0h] [rbp+C0h]
  __int128 v77; // [rsp+1D0h] [rbp+D0h]
  __int128 v78; // [rsp+1E0h] [rbp+E0h]
  int v79[56]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v80; // [rsp+2E0h] [rbp+1E0h]

  v14 = a8;
  v51 = 0LL;
  v16 = *(_DWORD *)(a1 + 1200);
  v17 = 256LL;
  v55 = 0LL;
  v19 = *((_QWORD *)a8 + 5);
  v20 = *((_DWORD *)a8 + 6);
  v53 = *((_QWORD *)a8 + 4);
  v21 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v56 = v19;
  v22 = -v21;
  v80 = v22;
  if ( (v16 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( !a6 )
  {
    *(_DWORD *)(a1 + 1200) = v16 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v20);
    if ( !CTouchProcessor::SetPointerFrameTargetWindows(
            gpTouchProcessor,
            (struct tagTHREADINFO *)a1,
            v19,
            v20,
            (int *)&v52) )
    {
      EtwTraceEndPointerSetTargetWindows(v20);
      *(_DWORD *)(a1 + 1200) &= ~0x100u;
      v24 = v52;
      return (unsigned int)(v24 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v20);
    v25 = *(_QWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 1200) &= ~0x100u;
    if ( *(struct tagQMSG **)(v25 + 80) != v14 )
      return 4LL;
    v22 = v80;
  }
  if ( v20 == 595 )
  {
    v49 = 0;
    v26 = (HWND)*((_QWORD *)v14 + 2);
    v51 = 0LL;
    v54 = v26;
    v48 = 1;
    LODWORD(a8) = 1;
    v50 = 1;
  }
  else
  {
    if ( !CTouchProcessor::GetPointerMessageInfo(gpTouchProcessor, v19, v22, &v54, &v48, (int *)&a8, &v50, &v49) )
      return 3LL;
    v26 = v54;
  }
  LOBYTE(v17) = 1;
  v27 = HMValidateHandleNoSecure((unsigned __int64)v26, v17);
  v28 = v27;
  if ( !v27 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v27, a2) )
    return 4LL;
  v29 = v20;
  if ( a5 && (_DWORD)a8 != 1 )
  {
    switch ( v20 )
    {
      case 0x245u:
        v29 = 577;
        break;
      case 0x246u:
        v29 = 578;
        break;
      case 0x247u:
        v29 = 579;
        break;
    }
  }
  if ( a3 || a4 != -1 )
  {
    if ( a3 <= a4 )
    {
      if ( v29 < a3 || v29 > a4 )
        goto LABEL_30;
    }
    else if ( v29 >= a4 && v29 <= a3 )
    {
LABEL_30:
      v30 = 0;
      goto LABEL_31;
    }
    v30 = 1;
LABEL_31:
    if ( v30 )
      goto LABEL_32;
    return 4LL;
  }
LABEL_32:
  v31 = a13;
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v28, v14, a13, a7, a14) )
    goto LABEL_33;
  if ( *v31 )
  {
    v32 = *(_QWORD *)(v28 + 16);
    if ( *(_QWORD *)(v32 + 424) == *(_QWORD *)(a1 + 424) )
    {
      if ( (*(_DWORD *)(v32 + 1200) & 0x8000) != 0 )
      {
        v24 = ((_DWORD)a8 + 2) & 0xFFFFFFFD;
        return (unsigned int)(v24 != 0) + 3;
      }
LABEL_33:
      *a9 = v28;
      return 2LL;
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v29) )
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1072), v53);
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 12) |= 8u;
    goto LABEL_48;
  }
  v35 = (__int128 *)INPUTDEST_FROM_PWND(v79, v28);
  v36 = v56;
  v37 = v35[1];
  v68 = *v35;
  v38 = v35[2];
  v69 = v37;
  v39 = v35[3];
  v70 = v38;
  v40 = v35[4];
  v71 = v39;
  v41 = v35[5];
  v72 = v40;
  v42 = v35[6];
  v73 = v41;
  v43 = v35[8];
  v74 = v42;
  v75 = v35[7];
  v44 = v35[9];
  v76 = v43;
  v45 = v35[10];
  v77 = v44;
  v78 = v45;
  v57 = v68;
  v58 = v69;
  v59 = v70;
  v60 = v71;
  v61 = v72;
  v62 = v73;
  v63 = v74;
  v64 = v75;
  v65 = v76;
  v66 = v44;
  v67 = v45;
  CTouchProcessor::AdjustCaptureOnRetrieval(gpTouchProcessor, &v57, v49, v56, (_DWORD)a8, v48, v80, *a7, v20);
  v57 = v68;
  v58 = v69;
  v59 = v70;
  v60 = v71;
  v61 = v72;
  v62 = v73;
  v63 = v74;
  v64 = v75;
  v65 = v76;
  v66 = v77;
  v67 = v78;
  if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(
                        gpTouchProcessor,
                        v36,
                        &v57,
                        (unsigned int)a8,
                        v80,
                        &v51,
                        &v55) )
    return 3LL;
  if ( (((_DWORD)a8 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v57 = v68;
  v58 = v69;
  v59 = v70;
  v60 = v71;
  v61 = v72;
  v62 = v73;
  v63 = v74;
  v64 = v75;
  v65 = v76;
  v66 = v77;
  v67 = v78;
  if ( !(unsigned int)CTouchProcessor::AddThreadPointerData(
                        gpTouchProcessor,
                        a1 + 1072,
                        (unsigned __int16)v53,
                        v50,
                        v36,
                        v29,
                        &v57,
                        1) )
    return 3LL;
  v34 = v53;
LABEL_48:
  *a9 = v28;
  *a10 = v29;
  if ( v29 - 577 > 3 )
    v46 = v34;
  else
    v46 = (unsigned __int16)v34 | (unsigned __int64)((unsigned __int16)a8 << 16);
  result = 1LL;
  *a11 = v46;
  *a12 = (unsigned __int16)v51 | (unsigned __int64)(WORD2(v51) << 16);
  v47 = v55;
  *v31 = 0;
  *(_QWORD *)(a1 + 1260) = v47;
  return result;
}
