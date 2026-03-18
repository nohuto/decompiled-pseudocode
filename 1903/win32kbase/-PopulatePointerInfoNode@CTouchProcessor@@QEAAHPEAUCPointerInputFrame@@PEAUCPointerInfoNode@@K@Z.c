/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016F2EC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0030E4C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003904C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C016110C (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0166484 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C01693F8 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C016E100 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01748F4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0175A5C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0176D08 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C0176DE0 (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C019C30C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C019F2D4 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C019FB6C (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edi
  void *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  _WORD *v13; // r15
  CInputDest *v14; // rax
  unsigned __int16 updated; // ax
  unsigned int v16; // ecx
  CInputDest *v17; // rax
  int v18; // r14d
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 PTPShellTarget; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // r11d
  int v38; // ecx
  unsigned int v39; // eax
  __int128 v40; // xmm1
  __int64 InputDelegate; // rax
  const struct tagPOINTEREVENTINT *v42; // rsi
  __int64 v43; // rdx
  unsigned __int16 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  _BYTE v48[120]; // [rsp+70h] [rbp-90h] BYREF
  char v49; // [rsp+E8h] [rbp-18h]
  _OWORD v50[7]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+160h] [rbp+60h]
  _OWORD v52[7]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v53; // [rsp+1E0h] [rbp+E0h]
  _OWORD v54[7]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v55; // [rsp+260h] [rbp+160h]
  _BYTE v56[120]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v57[136]; // [rsp+2E8h] [rbp+1E8h] BYREF
  _BYTE v58[121]; // [rsp+370h] [rbp+270h] BYREF
  int v59; // [rsp+3E9h] [rbp+2E9h]
  __int16 v60; // [rsp+3EDh] [rbp+2EDh]
  char v61; // [rsp+3EFh] [rbp+2EFh]
  _BYTE v62[128]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v63[128]; // [rsp+470h] [rbp+370h] BYREF

  memset(v48, 0, sizeof(v48));
  v9 = 0;
  v49 = 0;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (*((_DWORD *)a2 + 28) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v10,
      7,
      48,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    v10 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  }
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 47) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_D(
        (_DWORD)gBaseLog,
        (_DWORD)v10,
        7,
        49,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids,
        *((_DWORD *)a3 + 45));
    }
    *((_DWORD *)a3 + 45) = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v10,
        7,
        50,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_75;
  }
  v13 = (_WORD *)((char *)a3 + 168);
  this[2] = *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)a2 + 18) + 16LL) + 1328LL);
  this[3] = *(struct _KTHREAD **)(*((_QWORD *)a2 + 18) + 228LL);
  v14 = CInputDest::CInputDest((CInputDest *)v57, (__int64 **)a3 + 3);
  updated = CTouchProcessor::UpdateActivePointer(this, a2, (char *)a3 + 168, v14);
  *((_DWORD *)a3 + 45) = updated;
  if ( updated )
  {
    if ( !*(_DWORD *)v48 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_HL(updated, v11, v12, 53, (unsigned int)v48, updated, *v13);
    v16 = *(_DWORD *)a3 & 0xFFFFFFFB | (v45 >> 2) & 4;
    *(_DWORD *)a3 = v16;
    if ( (v16 & 4) != 0 )
    {
      v59 = 0;
      v60 = 0;
      v61 = 0;
      memset(v58, 0, sizeof(v58));
      v17 = (CInputDest *)v58;
      v18 = 1;
      v19 = 0;
    }
    else
    {
      v17 = CInputDest::CInputDest((CInputDest *)v63, (__int64 **)v48);
      v18 = 0;
      v19 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v17, v12);
    if ( v19 )
      CInputDest::SetEmpty((CInputDest *)v63, v20, v21);
    if ( v18 )
      CInputDest::SetEmpty((CInputDest *)v58, v20, v21);
    *((_DWORD *)a3 + 38) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v48) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( (v45 & 0x80u) != 0 && gptiManipulationThread )
    {
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 89) = v47;
    }
    if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
    {
      PTPShellTarget = ApiSetGetPTPShellTarget(v56);
      v24 = *(_OWORD *)(PTPShellTarget + 16);
      v50[0] = *(_OWORD *)PTPShellTarget;
      v25 = *(_OWORD *)(PTPShellTarget + 32);
      v50[1] = v24;
      v26 = *(_OWORD *)(PTPShellTarget + 48);
      v50[2] = v25;
      v27 = *(_OWORD *)(PTPShellTarget + 64);
      v50[3] = v26;
      v28 = *(_OWORD *)(PTPShellTarget + 80);
      v50[4] = v27;
      v29 = *(_OWORD *)(PTPShellTarget + 96);
      v50[5] = v28;
      *(_QWORD *)&v28 = *(_QWORD *)(PTPShellTarget + 112);
      v50[6] = v29;
      v51 = v28;
      CInputDest::CInputDest((CInputDest *)v62, (const struct tagINPUTDEST *)v50);
      if ( CInputDest::operator==((unsigned int *)v48, (__int64)v62, v30) )
      {
        if ( *((_DWORD *)a3 + 44) != 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 38) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v62, v31, v33);
    }
    if ( (v45 & 0x20) != 0 )
    {
      v34 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 38) = 1;
      *(_DWORD *)a3 = v34;
      if ( (v45 & 0x40) != 0 )
        *(_DWORD *)a3 = v34 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 360, (__int64)v48, v22);
    *((_QWORD *)a3 + 25) = CInputDest::GetWindowHandle((CInputDest *)v48);
    *((_DWORD *)a3 + 46) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 61) = 1;
    *((_DWORD *)a3 + 86) = CPointerInfoNode::ShouldForegroundActivate(a3) == 0;
    if ( (v45 & 1) != 0 )
      *((_DWORD *)a3 + 47) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v45 & 4) << 14) | ((v45 & 2) << 14);
    *((_DWORD *)a3 + 47) &= 0x7FE1F7u;
    v35 = (unsigned int)(*((_DWORD *)a3 + 44) - 2);
    if ( *((_DWORD *)a3 + 44) != 2 )
    {
      v35 = (unsigned int)(*((_DWORD *)a3 + 44) - 3);
      if ( *((_DWORD *)a3 + 44) == 3 )
      {
        *((_DWORD *)a3 + 68) &= 7u;
        *((_DWORD *)a3 + 69) &= 0xFu;
LABEL_56:
        *((_DWORD *)a3 + 66) = CTouchProcessor::GetButtonChange(v35, v46, *((_DWORD *)a3 + 47) & 0x1F0);
        if ( (v37 & 1) != 0 || (v37 & 0x20000) == 0 || (v38 = 1, (v37 & 2) == 0) )
          v38 = 0;
        v39 = v38 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v39;
        if ( v46 != v36 )
          *(_DWORD *)a3 = v39 & 0xFFFFFFFE;
        v40 = *(_OWORD *)&v48[80];
        if ( _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v48[80], 12)) )
        {
          v52[0] = *(_OWORD *)v48;
          v52[1] = *(_OWORD *)&v48[16];
          v52[2] = *(_OWORD *)&v48[32];
          v52[3] = *(_OWORD *)&v48[48];
          v52[4] = *(_OWORD *)&v48[64];
          v52[6] = *(_OWORD *)&v48[96];
          v53 = *(_QWORD *)&v48[112];
          v52[5] = *(_OWORD *)&v48[80];
          InputDelegate = ApiSetEditionGetInputDelegate(v52);
          v40 = *(_OWORD *)&v48[80];
          if ( InputDelegate )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v45 & 8) << 11);
        if ( CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v42 = (struct CPointerInfoNode *)((char *)a3 + 168);
        }
        else
        {
          v42 = (struct CPointerInfoNode *)((char *)a3 + 168);
          v43 = *((_QWORD *)a3 + 32);
          v54[0] = *(_OWORD *)v48;
          v54[1] = *(_OWORD *)&v48[16];
          v54[2] = *(_OWORD *)&v48[32];
          v54[3] = *(_OWORD *)&v48[48];
          v54[4] = *(_OWORD *)&v48[64];
          v54[6] = *(_OWORD *)&v48[96];
          v55 = *(_QWORD *)&v48[112];
          v54[5] = v40;
          if ( (unsigned int)ApiSetInputTransformOnInput(v54, v43, (char *)a3 + 168) )
            *((_DWORD *)a3 + 47) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, v42);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            7,
            54,
            (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
        }
        v9 = 1;
        goto LABEL_75;
      }
      if ( *((_DWORD *)a3 + 44) != 5 )
        goto LABEL_56;
    }
    *((_DWORD *)a3 + 68) = 0;
    *((_DWORD *)a3 + 69) &= 7u;
    goto LABEL_56;
  }
  if ( (*((_DWORD *)a3 + 47) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 25) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_L(updated, v11, 7, 51, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids, *v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      7,
      52,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
LABEL_75:
  CInputDest::SetEmpty((CInputDest *)v48, v11, v12);
  return v9;
}
