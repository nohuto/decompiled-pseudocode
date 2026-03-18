/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C002EFF8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0133D04 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropPointer@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0138134 (-DropPointer@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4Dro.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C013AD90 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C013F5EC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0146A94 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0147DA4 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C0147E7C (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0161D5C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C0163F28 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C01642F0 (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edi
  int v10; // r13d
  __int64 *v11; // rax
  __int64 v12; // rax
  _WORD *v13; // r15
  CInputDest *v14; // rax
  unsigned __int16 updated; // ax
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // ecx
  CInputDest *v19; // rax
  int v20; // r12d
  _OWORD *PTPShellTarget; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r11d
  int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // rdx
  const struct tagPOINTEREVENTINT *v43; // r15
  unsigned __int16 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  _OWORD v48[11]; // [rsp+70h] [rbp-90h] BYREF
  char v49; // [rsp+120h] [rbp+20h]
  _OWORD v50[11]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v51[11]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v52[11]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v53[176]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v54[192]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v55[192]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v56[192]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v57[192]; // [rsp+630h] [rbp+530h] BYREF

  memset(v48, 0, sizeof(v48));
  v9 = 0;
  v49 = 0;
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = 2;
  if ( *((_DWORD *)a2 + 22) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x2Bu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 61) )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 1),
      3u,
      0xBu,
      0x2Cu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
      *((_DWORD *)a3 + 59));
    *((_DWORD *)a3 + 59) = 0;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x2Du,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_26:
    InputTraceLogging::Pointer::DropPointer();
    goto LABEL_72;
  }
  v11 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)a2 + 15) + 16LL) + 1200LL);
  if ( v11 )
    v12 = *v11;
  else
    v12 = 0LL;
  *((_QWORD *)this + 3) = v12;
  v13 = (_WORD *)((char *)a3 + 224);
  *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)a2 + 15) + 228LL);
  v14 = CInputDest::CInputDest((CInputDest *)v54, (struct CPointerInfoNode *)((char *)a3 + 24));
  updated = CTouchProcessor::UpdateActivePointer(this, a2, (char *)a3 + 224, v14);
  *((_DWORD *)a3 + 59) = updated;
  if ( !updated )
  {
    if ( (*((_DWORD *)a3 + 61) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 32) )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_L(
        *((_QWORD *)this + 1),
        v16,
        11,
        46,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
        *v13);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x2Fu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_72;
  }
  if ( !LODWORD(v48[0]) )
  {
    WPP_RECORDER_SF_HL(*((_QWORD *)this + 1), v16, v17, 48, (unsigned int)v48, updated, *v13);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x31u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_26;
  }
  v18 = *(_DWORD *)a3 & 0xFFFFFFFB | (v45 >> 2) & 4;
  *(_DWORD *)a3 = v18;
  if ( (v18 & 4) != 0 )
  {
    memset(v55, 0, 0xB8uLL);
    v19 = (CInputDest *)v55;
    v55[176] = 0;
    v20 = 1;
    v10 = 0;
  }
  else
  {
    v19 = CInputDest::CInputDest((CInputDest *)v57, (const struct CInputDest *)v48);
    v20 = 0;
  }
  CInputDest::operator=((__int64)a3 + 24, v19);
  if ( v10 )
    CInputDest::~CInputDest((CInputDest *)v57);
  if ( v20 )
    CInputDest::~CInputDest((CInputDest *)v55);
  *((_DWORD *)a3 + 52) = 0;
  if ( CInputDest::IsCompositionInput((CInputDest *)v48) )
  {
    *(_DWORD *)a3 |= 0x400u;
    *((_DWORD *)a3 + 1) |= 0x80u;
  }
  if ( (v45 & 0x80) != 0 && gptiManipulationThread )
  {
    *((_DWORD *)a3 + 1) |= 0x100u;
    *((_DWORD *)a3 + 97) = v47;
  }
  if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
  {
    PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v53);
    v22 = PTPShellTarget[1];
    v50[0] = *PTPShellTarget;
    v23 = PTPShellTarget[2];
    v50[1] = v22;
    v24 = PTPShellTarget[3];
    v50[2] = v23;
    v25 = PTPShellTarget[4];
    v50[3] = v24;
    v26 = PTPShellTarget[5];
    v50[4] = v25;
    v27 = PTPShellTarget[6];
    v50[5] = v26;
    v28 = PTPShellTarget[7];
    v50[6] = v27;
    v29 = PTPShellTarget[8];
    v50[7] = v28;
    v30 = PTPShellTarget[9];
    v50[8] = v29;
    v31 = PTPShellTarget[10];
    v50[9] = v30;
    v50[10] = v31;
    CInputDest::CInputDest((CInputDest *)v56, (const struct tagINPUTDEST *)v50);
    if ( CInputDest::operator==((unsigned int *)v48, (__int64)v56, v32) )
    {
      if ( *((_DWORD *)a3 + 58) != 5 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
      *(_DWORD *)a3 |= 0x500u;
      *((_DWORD *)a3 + 52) = 1;
    }
    CInputDest::~CInputDest((CInputDest *)v56);
  }
  if ( (v45 & 0x20) != 0 )
  {
    v36 = *(_DWORD *)a3 | 0x500;
    *((_DWORD *)a3 + 52) = 1;
    *(_DWORD *)a3 = v36;
    if ( (v45 & 0x40) != 0 )
      *(_DWORD *)a3 = v36 | 0x800;
  }
  CInputDest::operator=((__int64)a3 + 392, (__int64)v48);
  *((_QWORD *)a3 + 32) = CInputDest::GetWindowHandle((CInputDest *)v48);
  *((_DWORD *)a3 + 60) = *((_DWORD *)a2 + 10);
  *((_DWORD *)a3 + 75) = 1;
  if ( (v45 & 1) != 0 )
    *((_DWORD *)a3 + 61) |= 1u;
  *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v45 & 4) << 14) | ((v45 & 2) << 14);
  *((_DWORD *)a3 + 61) &= 0x7FE1F7u;
  v37 = (unsigned int)(*((_DWORD *)a3 + 58) - 2);
  if ( *((_DWORD *)a3 + 58) == 2 )
  {
LABEL_53:
    *((_DWORD *)a3 + 82) = 0;
    *((_DWORD *)a3 + 83) &= 7u;
    goto LABEL_54;
  }
  v37 = (unsigned int)(*((_DWORD *)a3 + 58) - 3);
  if ( *((_DWORD *)a3 + 58) != 3 )
  {
    if ( *((_DWORD *)a3 + 58) != 5 )
      goto LABEL_54;
    goto LABEL_53;
  }
  *((_DWORD *)a3 + 82) &= 7u;
  *((_DWORD *)a3 + 83) &= 0xFu;
LABEL_54:
  *((_DWORD *)a3 + 80) = CTouchProcessor::GetButtonChange(v37, v46, *((_DWORD *)a3 + 61) & 0x1F0);
  if ( (v39 & 1) != 0 || (v39 & 0x20000) == 0 || (v40 = 1, (v39 & 2) == 0) )
    v40 = 0;
  v41 = v40 | *(_DWORD *)a3 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v41;
  if ( v46 != v38 )
    *(_DWORD *)a3 = v41 & 0xFFFFFFFE;
  if ( DWORD1(v48[5]) )
  {
    v51[0] = v48[0];
    v51[1] = v48[1];
    v51[2] = v48[2];
    v51[3] = v48[3];
    v51[4] = v48[4];
    v51[5] = v48[5];
    v51[6] = v48[6];
    v51[7] = v48[7];
    v51[8] = v48[8];
    v51[9] = v48[9];
    v51[10] = v48[10];
    if ( ApiSetEditionGetInputDelegate(v51) )
    {
      if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
        *(_DWORD *)a3 |= 0x100000u;
    }
  }
  *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v45 & 8) << 11);
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
  {
    v43 = (struct CPointerInfoNode *)((char *)a3 + 224);
  }
  else
  {
    v42 = *((_QWORD *)a3 + 39);
    v43 = (struct CPointerInfoNode *)((char *)a3 + 224);
    v52[0] = v48[0];
    v52[1] = v48[1];
    v52[2] = v48[2];
    v52[3] = v48[3];
    v52[4] = v48[4];
    v52[5] = v48[5];
    v52[6] = v48[6];
    v52[7] = v48[7];
    v52[8] = v48[8];
    v52[9] = v48[9];
    v52[10] = v48[10];
    if ( (unsigned int)ApiSetInputTransformOnInput(v52, v42, (char *)a3 + 224) )
      *((_DWORD *)a3 + 61) |= 0x400000u;
  }
  InputTraceLogging::Pointer::AssignPointerId(a2, v43);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x32u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v9 = 1;
LABEL_72:
  CInputDest::~CInputDest((CInputDest *)v48);
  return v9;
}
