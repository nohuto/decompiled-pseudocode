/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01374A8
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01378E0 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006F410 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01312B8 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C013CFF4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C013F548 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C013FE14 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01426CC (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0142CD4 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0145504 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C0162CB8 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C01654F8 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  unsigned __int16 v9; // r12
  const struct tagQ *v10; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r12
  struct CInputDest *v34; // rdx
  struct tagTHREADINFO *v35; // rbx
  _OWORD *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  CPointerInfoNode *v49; // rcx
  int v50; // r9d
  __int64 v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+48h] [rbp-B8h]
  char *v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v56; // [rsp+74h] [rbp-8Ch]
  tagPOINT v57; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v58; // [rsp+80h] [rbp-80h]
  struct CInputDest *v59; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v60; // [rsp+90h] [rbp-70h]
  struct tagQ *v61; // [rsp+98h] [rbp-68h]
  int *v62; // [rsp+A0h] [rbp-60h]
  CInpLockGuard *v63[7]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v64[64]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v65[11]; // [rsp+120h] [rbp+20h] BYREF
  char v66; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v67[24]; // [rsp+280h] [rbp+180h] BYREF

  v9 = *((_WORD *)a3 + 118);
  v10 = a4;
  v62 = a6;
  v61 = a4;
  v57 = 0LL;
  v60 = a2;
  v56 = v9;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  CInputDest::SetEmpty(a8);
  v19 = CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v59, &v55);
  if ( v19 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v59);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    v23 = *((_DWORD *)a3 + 61);
    if ( (v23 & 0x40004) != 0 && (v23 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 118), &v57);
  if ( !v19 )
  {
    v24 = CTouchProcessor::PointerFlagsToMessage(this, *((_DWORD *)a3 + 61));
    v27 = *((unsigned __int16 *)a3 + 122);
    v28 = *((_QWORD *)a3 + 33);
    v29 = v9;
    v30 = (unsigned __int64)*((unsigned __int16 *)a3 + 134) << 16;
    v58 = v24;
    v31 = v29 | ((unsigned __int64)(v27 & 0xFFFFE1F7) << 16);
    v32 = *((unsigned __int16 *)a3 + 132);
    v33 = v32 | v30;
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v25, v26);
    v34 = (struct CPointerInfoNode *)((char *)a3 + 392);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v64, v34, v26);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v63,
        (CTouchProcessor *)((char *)this + 56),
        *((void **)a3 + 2));
      v54 = *((_QWORD *)a3 + 2);
      v53 = (char *)a3 + 224;
      v52 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v64, v34, v26);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v63,
        (CTouchProcessor *)((char *)this + 56),
        *((void **)a3 + 2));
      v54 = *((_QWORD *)a3 + 2);
      v53 = (char *)a3 + 224;
      v52 = 1;
    }
    v51 = v28;
    v35 = v60;
    v36 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v66,
                      (_DWORD)v60,
                      (int)a3 + 392,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v58,
                      v31,
                      v33,
                      v51,
                      (__int64)&v55,
                      v52,
                      (__int64)v53,
                      v54,
                      (__int64)&v57);
    v37 = v36[1];
    v65[0] = *v36;
    v38 = v36[2];
    v65[1] = v37;
    v39 = v36[3];
    v65[2] = v38;
    v40 = v36[4];
    v65[3] = v39;
    v41 = v36[5];
    v65[4] = v40;
    v42 = v36[6];
    v65[5] = v41;
    v43 = v36[8];
    v65[6] = v42;
    v65[7] = v36[7];
    v44 = v36[9];
    v65[8] = v43;
    v45 = v36[10];
    v65[9] = v44;
    v65[10] = v45;
    CInputDest::CInputDest((CInputDest *)v67, (const struct tagINPUTDEST *)v65);
    CInputDest::operator=((__int64)a8, v67);
    CInputDest::SetEmpty((CInputDest *)v67);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v63);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v64);
    InputTraceLogging::Pointer::SecondaryHitTest((struct CPointerInfoNode *)((char *)a3 + 232), a8, &v57);
    if ( *(_DWORD *)a8 )
    {
      if ( v55 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v56, &v57);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v49, v35) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v59, &v55) )
      CInputDest::operator=((__int64)a8, (__int64)v59);
    v10 = v61;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 33),
                        (char *)a3 + 224,
                        v57,
                        a7) )
  {
    a7->x = 0;
    a7->y = 0;
  }
  v50 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v10 && !CInputDest::UsesQueue(a8, v10) )
  {
    CInputDest::SetEmpty(a8);
    v50 = *(_DWORD *)a8;
  }
  if ( v50 )
    *v62 = v55;
}
