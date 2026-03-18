/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C015F578
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01608BC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016EE8C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C004F468 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015B5A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01649EC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016AA38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016B8BC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C019A930 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  struct _KTHREAD **v8; // rsi
  __int64 v9; // rdx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rdx
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // edi
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rsi
  __int64 v25; // r15
  int v26; // eax
  int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  CInputDest *Queue; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  PDEVICE_OBJECT v33; // rcx
  int v34; // r9d
  int v35; // eax
  int v36; // r9d
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  struct tagQMSG *v43; // [rsp+38h] [rbp-C8h]
  _OWORD v44[7]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  _OWORD v46[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v47; // [rsp+130h] [rbp+30h]

  v43 = a4;
  v8 = this;
  v9 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (struct _KTHREAD **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        7,
        253,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( v8[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v9, a3);
  if ( *((_DWORD *)a5 + 27) )
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( !*((_QWORD *)a3 + 25) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v14, a2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    v19 = *(_DWORD *)a3;
    v20 = 1;
    if ( (*(_DWORD *)a3 & 1) == 0 )
    {
      *(_DWORD *)a6 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, 256, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 257;
      goto LABEL_106;
    }
    if ( (v19 & 8) != 0 || (v19 & 0x10) != 0 || (v19 & 0x40) != 0 || (v19 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, 258, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 259;
      goto LABEL_106;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)v8, a2, *((_WORD *)a3 + 90), 0LL);
    v24 = (__int64 *)ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v22, 7, 260, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 261;
      goto LABEL_106;
    }
    v25 = *((_QWORD *)a2 + 17) + 168LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 20) )
      *((_QWORD *)a5 + 20) = v25;
    v26 = *(_DWORD *)(v25 + 148);
    if ( (v26 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v22, 7, 262, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 263;
      goto LABEL_106;
    }
    if ( (v26 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v22, 7, 264, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 265;
      goto LABEL_106;
    }
    if ( (*(_DWORD *)v24 & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v22, v23);
    v27 = *(_DWORD *)a3;
    v28 = 0x800000;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v27 & 0x8000000) != 0
      || v27 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v29 = *(unsigned int *)v24, (v29 & 0x800000) != 0)
      || (v29 & 0x8000000) != 0
      || (v29 & 0x80000000) != 0
      || (*((_DWORD *)v24 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v28, 7, 266, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 267;
      goto LABEL_106;
    }
    if ( (v29 & 0x100000) != 0 && (v29 & 0x400000) == 0 )
    {
      if ( (v29 & 0x200000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, 0x800000LL, 0x8000000LL);
      *(_DWORD *)a6 = 21;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v28, 7, 268, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 269;
      goto LABEL_106;
    }
    if ( *((_DWORD *)v24 + 47) != *((_DWORD *)a3 + 47) )
    {
      *(_DWORD *)a6 = 5;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v28, 7, 270, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 271;
      goto LABEL_106;
    }
    if ( *((_DWORD *)v24 + 61) == 100 )
    {
      *(_DWORD *)a6 = 6;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v28, 7, 272, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v12 = 273;
      goto LABEL_106;
    }
    CInputDest::CInputDest(v46, *((_QWORD *)a3 + 25), *((_DWORD *)a3 + 113), 1);
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v24, &v42);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v46) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v46, (const struct CInputDest *)(v25 + 16)) )
      {
        if ( *((_QWORD *)a5 + 20) == v25 )
        {
          v35 = *((_DWORD *)a3 + 44);
          v36 = *((_DWORD *)a3 + 46);
          v37 = *((_DWORD *)a2 + 10);
          v44[0] = v46[0];
          v44[1] = v46[1];
          v44[2] = v46[2];
          v44[3] = v46[3];
          v41 = v35;
          v38 = v24[2];
          v44[4] = v46[4];
          v44[5] = v46[5];
          v44[6] = v46[6];
          v45 = v47;
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v44,
                               (_DWORD)v43,
                               v37,
                               v36,
                               v38,
                               v41) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v31, v32);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v31) = 4;
              WPP_RECORDER_SF_((_DWORD)gBaseLog, v31, 7, 280, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v31) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v31,
                    7,
                    281,
                    (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
                }
              }
            }
            goto LABEL_97;
          }
          *(_DWORD *)a6 = 7;
LABEL_96:
          v20 = 0;
LABEL_97:
          CInputDest::SetEmpty((CInputDest *)v46, v31, v32);
          return v20;
        }
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v31, 7, 278, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v33 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v34 = 279;
      }
      else
      {
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v31, 7, 276, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v33 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v34 = 277;
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      LOBYTE(v31) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v31, 7, 274, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      v33 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_96;
      v34 = 275;
    }
    LOBYTE(v31) = 5;
    WPP_RECORDER_SF_(v33->DeviceExtension, v31, 7, v34, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    goto LABEL_96;
  }
  *(_DWORD *)a6 = 23;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 7, 254, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  v11 = WPP_GLOBAL_Control;
  if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return 0LL;
  v12 = 255;
LABEL_106:
  LOBYTE(v10) = 5;
  WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  return 0LL;
}
