/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C013449C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01355A4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0142400 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0070760 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0138874 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C013E0C4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C0162458 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  PDEVICE_OBJECT v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebp
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 *v23; // r14
  __int64 v24; // r15
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  CInputDest *Queue; // rax
  PDEVICE_OBJECT v29; // rcx
  unsigned __int16 v30; // r9
  int v31; // r8d
  int v32; // eax
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v39; // [rsp+28h] [rbp-1E0h]
  int v40; // [rsp+30h] [rbp-1D8h] BYREF
  struct tagQMSG *v41; // [rsp+38h] [rbp-1D0h]
  _OWORD v42[11]; // [rsp+40h] [rbp-1C8h] BYREF
  _OWORD v43[12]; // [rsp+F0h] [rbp-118h] BYREF

  v41 = a4;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xF5u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
  if ( !*((_DWORD *)a5 + 25) )
  {
    *(_DWORD *)a6 = 23;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xF6u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 247;
LABEL_77:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( !*((_QWORD *)a3 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v13, (__int64)a2, v14) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v18 = *(_DWORD *)a3;
  v19 = 1;
  if ( (*(_DWORD *)a3 & 1) != 0 )
  {
    if ( (v18 & 8) != 0 || (v18 & 0x10) != 0 || (v18 & 0x40) != 0 || (v18 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xFAu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 251;
        goto LABEL_77;
      }
      return 0LL;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 118), 0LL);
    v23 = (__int64 *)ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xFCu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 253;
        goto LABEL_77;
      }
      return 0LL;
    }
    v24 = *((_QWORD *)a2 + 14) + 224LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 27) )
      *((_QWORD *)a5 + 27) = v24;
    v25 = *(_DWORD *)(v24 + 204);
    if ( (v25 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xFEu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 255;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( (v25 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x100u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 257;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( (*(_DWORD *)v23 & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v21, v22);
    v26 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v26 & 0x8000000) != 0
      || v26 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v27 = *(unsigned int *)v23, (v27 & 0x800000) != 0)
      || (v27 & 0x8000000) != 0
      || (v27 & 0x80000000) != 0
      || (*((_DWORD *)v23 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x102u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 259;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( (v27 & 0x100000) != 0 && (v27 & 0x400000) == 0 )
    {
      if ( (v27 & 0x200000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, 0x800000LL, 0x8000000LL);
      *(_DWORD *)a6 = 21;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x104u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 261;
      goto LABEL_77;
    }
    if ( *((_DWORD *)v23 + 61) != *((_DWORD *)a3 + 61) )
    {
      *(_DWORD *)a6 = 5;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x106u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 263;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v23 + 75) == 100 )
    {
      *(_DWORD *)a6 = 6;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x108u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 265;
        goto LABEL_77;
      }
      return 0LL;
    }
    CInputDest::CInputDest(v43, *((_QWORD *)a3 + 32), *((_DWORD *)a3 + 119));
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v23, &v40);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v43) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v43, (const struct CInputDest *)(v24 + 16)) )
      {
        if ( *((_QWORD *)a5 + 27) == v24 )
        {
          v31 = *((_DWORD *)a2 + 10);
          v42[0] = v43[0];
          v42[1] = v43[1];
          v42[2] = v43[2];
          v42[3] = v43[3];
          v42[4] = v43[4];
          v42[5] = v43[5];
          v42[6] = v43[6];
          v42[7] = v43[7];
          v42[8] = v43[8];
          v32 = *((_DWORD *)a3 + 58);
          v33 = *((_DWORD *)a3 + 60);
          v42[9] = v43[9];
          v39 = v32;
          v34 = v23[2];
          v42[10] = v43[10];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v42,
                               (_DWORD)v41,
                               v31,
                               v33,
                               v34,
                               v39) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              4u,
              0xBu,
              0x110u,
              (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                0xBu,
                0x111u,
                (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
            goto LABEL_72;
          }
          *(_DWORD *)a6 = 7;
        }
        else
        {
          *(_DWORD *)a6 = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)this + 1),
            4u,
            0xBu,
            0x10Eu,
            (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
          v29 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v30 = 271;
            goto LABEL_70;
          }
        }
      }
      else
      {
        *(_DWORD *)a6 = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)this + 1),
          4u,
          0xBu,
          0x10Cu,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        v29 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v30 = 269;
LABEL_70:
          WPP_RECORDER_SF_(
            (__int64)v29->DeviceExtension,
            5u,
            0xBu,
            v30,
            (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        }
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x10Au,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v29 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v30 = 267;
        goto LABEL_70;
      }
    }
    v19 = 0;
LABEL_72:
    CInputDest::~CInputDest((CInputDest *)v43);
    return v19;
  }
  *(_DWORD *)a6 = 2;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xF8u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = 249;
    goto LABEL_77;
  }
  return 0LL;
}
