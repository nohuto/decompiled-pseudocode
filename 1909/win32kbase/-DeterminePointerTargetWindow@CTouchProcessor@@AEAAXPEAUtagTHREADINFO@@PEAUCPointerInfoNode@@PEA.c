/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01635DC
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01639E8 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004C06C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C004C148 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C004C184 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C015BBB0 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01697A8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C016BE70 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C016C654 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016F27C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C016FA68 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0172258 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C019B3C4 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C019F264 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct tagPOINT *v9; // rbx
  unsigned __int16 v10; // r12
  const struct tagQ *v11; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ecx
  CTouchProcessor *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r15d
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r12
  struct CInputDest *v37; // rdx
  struct tagTHREADINFO *v38; // rdi
  __int64 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  CPointerInfoNode *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+48h] [rbp-B8h]
  char *v63; // [rsp+50h] [rbp-B0h]
  __int64 v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v66; // [rsp+74h] [rbp-8Ch]
  tagPOINT v67; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-80h]
  struct tagTHREADINFO *v69; // [rsp+88h] [rbp-78h] BYREF
  struct CInputDest *v70; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT *v71; // [rsp+98h] [rbp-68h]
  struct tagQ *v72; // [rsp+A0h] [rbp-60h]
  int *v73; // [rsp+A8h] [rbp-58h]
  _OWORD v74[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+120h] [rbp+20h]
  _BYTE v76[64]; // [rsp+130h] [rbp+30h] BYREF
  char v77; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v78[16]; // [rsp+1F0h] [rbp+F0h] BYREF

  v9 = a7;
  v10 = *((_WORD *)a3 + 90);
  v11 = a4;
  v67 = 0LL;
  v73 = a6;
  v71 = a7;
  v66 = v10;
  v72 = a4;
  v69 = a2;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
  CInputDest::SetEmpty(a8, v17, v19);
  v20 = CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v70, &v65);
  if ( v20 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v70, v21);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
    v25 = *((_DWORD *)a3 + 47);
    if ( (v25 & 0x40004) != 0 && (v25 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 90), &v67);
  if ( !v20 )
  {
    v27 = CTouchProcessor::PointerFlagsToMessage(v26, *((_DWORD *)a3 + 47));
    v30 = *((unsigned __int16 *)a3 + 94);
    v31 = *((_QWORD *)a3 + 26);
    v32 = v10;
    v33 = (unsigned __int64)*((unsigned __int16 *)a3 + 106) << 16;
    v68 = v27;
    v34 = v32 | ((unsigned __int64)(v30 & 0xFFFFE1F7) << 16);
    v35 = *((unsigned __int16 *)a3 + 104);
    v36 = v35 | v33;
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v28, v29);
    v37 = (struct CPointerInfoNode *)((char *)a3 + 360);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v76, v37, v29);
      CInpLockGuard::UnLock((CTouchProcessor *)((char *)this + 48));
      v64 = *((_QWORD *)a3 + 2);
      v63 = (char *)a3 + 168;
      v62 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v76, v37, v29);
      CInpLockGuard::UnLock((CTouchProcessor *)((char *)this + 48));
      v64 = *((_QWORD *)a3 + 2);
      v63 = (char *)a3 + 168;
      v62 = 1;
    }
    v61 = v31;
    v38 = v69;
    v39 = ApiSetEditionPointerWindowHitTest(
            (unsigned int)&v77,
            (_DWORD)v69,
            (int)a3 + 360,
            -__CFSHR__(*((_DWORD *)a3 + 1), 8),
            v68,
            v34,
            v36,
            v61,
            (__int64)&v65,
            v62,
            (__int64)v63,
            v64,
            (__int64)&v67);
    v40 = *(_OWORD *)(v39 + 16);
    v74[0] = *(_OWORD *)v39;
    v41 = *(_OWORD *)(v39 + 32);
    v74[1] = v40;
    v42 = *(_OWORD *)(v39 + 48);
    v74[2] = v41;
    v43 = *(_OWORD *)(v39 + 64);
    v74[3] = v42;
    v44 = *(_OWORD *)(v39 + 80);
    v74[4] = v43;
    v45 = *(_OWORD *)(v39 + 96);
    v74[5] = v44;
    *(_QWORD *)&v44 = *(_QWORD *)(v39 + 112);
    v74[6] = v45;
    v75 = v44;
    CInputDest::CInputDest((CInputDest *)v78, (const struct tagINPUTDEST *)v74);
    CInputDest::operator=((__int64)a8, v78, v46);
    CInputDest::SetEmpty((CInputDest *)v78, v47, v48);
    CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)this + 48), (struct CLockListEntryStack *)&v69);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v76);
    InputTraceLogging::Pointer::SecondaryHitTest((struct CPointerInfoNode *)((char *)a3 + 176), a8, &v67);
    if ( *(_DWORD *)a8 )
    {
      if ( v65 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8, v52, v53);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v66, &v67);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v55, v38) )
    {
      CInputDest::SetEmpty(a8, v54, v56);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v70, &v65) )
      CInputDest::operator=((__int64)a8, (__int64)v70, v57);
    v11 = v72;
    v9 = v71;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 26),
                        (char *)a3 + 168,
                        v67,
                        v9) )
  {
    v9->x = 0;
    v9->y = 0;
  }
  v58 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v11 && !CInputDest::UsesQueue(a8, v11) )
  {
    CInputDest::SetEmpty(a8, v59, v60);
    v58 = *(_DWORD *)a8;
  }
  if ( v58 )
    *v73 = v65;
}
