/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016FA48
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015D7A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015DB5C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0168B3C (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0169144 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0175710 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  const struct CPointerInfoNode *v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  int v15; // ebx
  const struct CPointerInputFrame *v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  void *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ebx
  CInputDest *v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // di
  void *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  CInputDest *v35; // rax
  int v36; // [rsp+20h] [rbp-E0h]
  __int64 *v38[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v39; // [rsp+C8h] [rbp-38h]
  _OWORD v40[8]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v41[8]; // [rsp+150h] [rbp+50h] BYREF

  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      197,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  memset(v38, 0, sizeof(v38));
  v12 = *((_DWORD *)v8 + 47);
  v39 = 0;
  if ( (v12 & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 198, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v14 = 199;
LABEL_48:
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_(v13->DeviceExtension, v10, 7, v14, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
        }
      }
    }
  }
  else if ( a3 )
  {
    v15 = 0;
    v16 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v16 )
      goto LABEL_43;
    v18 = (_DWORD *)(*((_QWORD *)v16 + 16) + 496LL * a3[8]);
    if ( (*v18 & 0x80u) == 0 )
    {
      v15 = 1;
      *v18 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame(this, v16);
    if ( v15 )
    {
      v19 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v19 & 8) != 0 )
        {
          if ( (v19 & 0x400) != 0 )
          {
            v20 = CInputDest::CInputDest(v40, *((_QWORD *)v8 + 25), *((_DWORD *)v8 + 113), 1);
            v6 = 1;
          }
          else
          {
            v20 = CInputDest::CInputDest((CInputDest *)v41, (__int64 **)v8 + 3);
            v6 = 2;
          }
          CInputDest::operator=((__int64)v38, (__int64)v20, v21);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v41, v22, v23);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v40, v22, v23);
          }
          v24 = -__CFSHR__(*(_DWORD *)v8, 7);
          v25 = CInputDest::CInputDest((CInputDest *)v40, v38);
          v36 = v24;
          v26 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage((PDEVICE_OBJECT)this, (__int64)a3, v25, a4, v36, a5, a6);
          v19 = *(_DWORD *)v8;
        }
        else
        {
          v26 = a4;
        }
        if ( (v19 & 0x40) != 0 )
        {
          if ( (v19 & 0x400) != 0
            && *((_DWORD *)v8 + 113)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 360, *((_QWORD *)v8 + 25), 0) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v30 = v6 | 4;
            v31 = CInputDest::CInputDest(v41, *((_QWORD *)v8 + 25), *((_DWORD *)v8 + 113), 1);
          }
          else
          {
            v30 = v6 | 8;
            v31 = CInputDest::CInputDest((CInputDest *)v40, (__int64 **)v8 + 3);
          }
          CInputDest::operator=((__int64)v38, (__int64)v31, v32);
          if ( (v30 & 8) != 0 )
          {
            v30 &= ~8u;
            CInputDest::SetEmpty((CInputDest *)v40, v33, v34);
          }
          if ( (v30 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v41, v33, v34);
          v35 = CInputDest::CInputDest((CInputDest *)v40, v38);
          CTouchProcessor::GenerateRoutedAwayMessages((PDEVICE_OBJECT)this, (__int64)a3, v35, v26, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
    }
    else
    {
LABEL_43:
      if ( (a3[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v10, v11);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 202;
        goto LABEL_48;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 200, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 201;
        goto LABEL_48;
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)v38, v10, v11);
}
