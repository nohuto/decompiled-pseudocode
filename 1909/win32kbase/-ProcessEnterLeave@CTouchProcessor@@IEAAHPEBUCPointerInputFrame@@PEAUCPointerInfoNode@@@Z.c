/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016DD5C
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C016E99C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016EE8C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003003C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015B5A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01649EC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016B83C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016B8BC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C01755A0 (WPP_RECORDER_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v3; // ebx
  struct CPointerInfoNode *v7; // rdi
  __int64 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CTouchProcessor *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  PDEVICE_OBJECT v20; // rcx
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  int v37; // ecx
  int v38; // r9d
  bool v39; // cf
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v44; // [rsp+20h] [rbp-E0h]
  unsigned int v45[30]; // [rsp+50h] [rbp-B0h] BYREF
  char v46; // [rsp+C8h] [rbp-38h]
  _BYTE v47[128]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v48[8]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v49[8]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v47, 0, 121);
  memset(v45, 0, sizeof(v45));
  v46 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        7,
        174,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = (CTouchProcessor *)*(unsigned int *)a3;
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v13);
    v14 = (CTouchProcessor *)*(unsigned int *)a3;
  }
  if ( ((unsigned __int16)v14 & 0x400) == 0 && !*((_DWORD *)a3 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v13);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v18, 7, 175, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v21 = 176;
LABEL_45:
            LOBYTE(v18) = 5;
            WPP_RECORDER_SF_(
              v20->DeviceExtension,
              v18,
              7,
              v21,
              (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
            goto LABEL_75;
          }
        }
      }
      goto LABEL_75;
    }
LABEL_37:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v30 = CInputDest::CInputDest(v49, *((_QWORD *)a3 + 25), *((_DWORD *)a3 + 113), 1);
      CInputDest::operator=((__int64)v47, v30, v31);
      CInputDest::SetEmpty((CInputDest *)v49, v32, v33);
    }
    else
    {
      CInputDest::operator=((__int64)v47, (__int64)a3 + 24, v19);
    }
    if ( CInputDest::operator==(v45, (__int64)v47, v34) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v18, 7, 179, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v21 = 180;
            goto LABEL_45;
          }
        }
      }
      goto LABEL_75;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v18, 7, 181, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v36 = *((_DWORD *)a3 + 47), (v36 & 4) != 0) || (v36 & 0x40000) != 0)
      && (v36 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v37 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        v37 = 0;
      v38 = 183;
      v39 = __CFSHR__(*(_DWORD *)a3, 7);
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v37 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        v37 = 0;
      v38 = 182;
      v39 = __CFSHR__(*(_DWORD *)a3, 4);
    }
    WPP_RECORDER_SF_qdqd(v37, v18, v19, v38, v44, (char)a3, -v39, (char)v7, v37);
LABEL_67:
    if ( v7 )
    {
      v40 = *((unsigned int *)v7 + 2);
      if ( (unsigned int)v40 >= *((_DWORD *)a2 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v18, v19);
        v40 = *((unsigned int *)v7 + 2);
      }
      *(_DWORD *)(168 * v40 + *((_QWORD *)a2 + 17) + 148) &= ~1u;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v18) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        7,
        184,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    v3 = 1;
    goto LABEL_75;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v14, a2, v13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a2, *((_WORD *)a3 + 90), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0 || (*(_DWORD *)v7 & 0x400) != 0 )
      {
        v26 = CInputDest::CInputDest(v48, *((_QWORD *)v7 + 25), *((_DWORD *)v7 + 113), 1);
        CInputDest::operator=((__int64)v45, v26, v27);
        CInputDest::SetEmpty((CInputDest *)v48, v28, v29);
      }
      else
      {
        CInputDest::operator=((__int64)v45, (__int64)v7 + 24, v19);
      }
    }
    goto LABEL_37;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_37;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_D(
      (_DWORD)gBaseLog,
      v18,
      7,
      177,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids,
      *((_WORD *)a3 + 90));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = 178;
        goto LABEL_45;
      }
    }
  }
LABEL_75:
  CInputDest::SetEmpty((CInputDest *)v45, v18, v19);
  CInputDest::SetEmpty((CInputDest *)v47, v41, v42);
  return v3;
}
