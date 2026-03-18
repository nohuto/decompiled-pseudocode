/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0139540 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C013AB64 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // di
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  int v12; // ebx
  const struct CPointerInputFrame *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  int v18; // eax
  CInputDest *v19; // rax
  int v20; // ebx
  CInputDest *v21; // rax
  char v22; // di
  CInputDest *v23; // rax
  CInputDest *v24; // rax
  _BYTE v26[192]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v27[12]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v28[12]; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC1u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  memset(v26, 0, 177);
  if ( (*((_DWORD *)a2 + 61) & 1) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xC2u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 195;
LABEL_6:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  else
  {
    if ( !a3 )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xC4u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_42;
      v11 = 197;
      goto LABEL_6;
    }
    v12 = 0;
    v13 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v13 )
      goto LABEL_38;
    v17 = (_DWORD *)(*((_QWORD *)v13 + 13) + 576LL * a3[8]);
    if ( (*v17 & 0x80u) == 0 )
    {
      v12 = 1;
      *v17 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v13, v16);
    if ( v12 )
    {
      v18 = *(_DWORD *)a2;
      if ( (*(_DWORD *)a2 & 0x1000) == 0 )
      {
        if ( (v18 & 8) != 0 )
        {
          if ( (v18 & 0x400) != 0 )
          {
            v19 = (CInputDest *)CInputDest::CInputDest(v27, *((_QWORD *)a2 + 32), *((_DWORD *)a2 + 119));
            v6 = 1;
          }
          else
          {
            v19 = CInputDest::CInputDest((CInputDest *)v28, (const struct CPointerInfoNode *)((char *)a2 + 24));
            v6 = 2;
          }
          CInputDest::operator=((__int64)v26, (__int64)v19);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::~CInputDest((CInputDest *)v28);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::~CInputDest((CInputDest *)v27);
          }
          v20 = -__CFSHR__(*(_DWORD *)a2, 7);
          v21 = CInputDest::CInputDest((CInputDest *)v27, (const struct CInputDest *)v26);
          CTouchProcessor::GenerateWindowLeaveMessage((__int64)this, (unsigned __int64)a3, v21, a4, v20, a5, a6);
          v18 = *(_DWORD *)a2;
        }
        if ( (v18 & 0x40) != 0 )
        {
          if ( (v18 & 0x400) != 0
            && *((_DWORD *)a2 + 119)
            && !CInputDest::IsEqualByWindowHandle((__int64)a2 + 392, *((void **)a2 + 32), 0) )
          {
            MicrosoftTelemetryAssertTriggeredMsgKM("Redirected pointer's hitTarget must be either null or an HWND match with pointerInfo target");
          }
          if ( (*(_DWORD *)a2 & 0x400) != 0 )
          {
            v22 = v6 | 4;
            v23 = (CInputDest *)CInputDest::CInputDest(v28, *((_QWORD *)a2 + 32), *((_DWORD *)a2 + 119));
          }
          else
          {
            v22 = v6 | 8;
            v23 = CInputDest::CInputDest((CInputDest *)v27, (const struct CPointerInfoNode *)((char *)a2 + 24));
          }
          CInputDest::operator=((__int64)v26, (__int64)v23);
          if ( (v22 & 8) != 0 )
          {
            v22 &= ~8u;
            CInputDest::~CInputDest((CInputDest *)v27);
          }
          if ( (v22 & 4) != 0 )
            CInputDest::~CInputDest((CInputDest *)v28);
          v24 = CInputDest::CInputDest((CInputDest *)v27, (const struct CInputDest *)v26);
          CTouchProcessor::GenerateCaptureLostMessage((__int64)this, (__int64)a3, v24);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
    }
    else
    {
LABEL_38:
      if ( (a3[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xC6u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  }
LABEL_42:
  CInputDest::~CInputDest((CInputDest *)v26);
}
