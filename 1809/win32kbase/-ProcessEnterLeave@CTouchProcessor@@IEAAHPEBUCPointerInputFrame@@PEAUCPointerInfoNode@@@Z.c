/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C014146C
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0141FD8 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0142400 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0138874 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C01487C8 (WPP_RECORDER_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // ebx
  struct CPointerInfoNode *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  PDEVICE_OBJECT v18; // rcx
  unsigned __int16 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r8
  char v27; // al
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  bool v34; // cf
  int v35; // r9d
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43[44]; // [rsp+50h] [rbp-B0h] BYREF
  char v44; // [rsp+100h] [rbp+0h]
  _BYTE v45[192]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v46[12]; // [rsp+1D0h] [rbp+D0h] BYREF
  _OWORD v47[12]; // [rsp+290h] [rbp+190h] BYREF

  v6 = 0;
  v7 = 0LL;
  memset(v45, 0, 177);
  memset(v43, 0, sizeof(v43));
  v44 = 0;
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xAAu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = *(unsigned int *)a3;
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v13);
    v14 = *(unsigned int *)a3;
  }
  if ( (v14 & 0x400) == 0 && !*((_DWORD *)a3 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v13);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xABu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v18 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v19 = 172;
LABEL_38:
        WPP_RECORDER_SF_(
          (__int64)v18->DeviceExtension,
          5u,
          0xBu,
          v19,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        goto LABEL_58;
      }
      goto LABEL_58;
    }
LABEL_32:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v25 = CInputDest::CInputDest(v47, *((_QWORD *)a3 + 32), *((_DWORD *)a3 + 119));
      CInputDest::operator=((__int64)v45, v25);
      CInputDest::~CInputDest((CInputDest *)v47);
    }
    else
    {
      CInputDest::operator=((__int64)v45, (__int64)a3 + 24);
    }
    v27 = CInputDest::operator==(v43, (__int64)v45, v26);
    v28 = *((_QWORD *)this + 1);
    if ( v27 )
    {
      WPP_RECORDER_SF_(v28, 4u, 0xBu, 0xAFu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v18 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v19 = 176;
        goto LABEL_38;
      }
    }
    else
    {
      WPP_RECORDER_SF_(v28, 4u, 0xCu, 0xB1u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
        && ((v31 = *((_DWORD *)a3 + 61), (v31 & 4) != 0) || (v31 & 0x40000) != 0)
        && (v31 & 0x10000) == 0 )
      {
        v32 = *(_DWORD *)a3 | 0x40;
        *(_DWORD *)a3 = v32;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x20u;
          v32 = *(_DWORD *)a3;
          v33 = -__CFSHR__(*(_DWORD *)v7, 6);
        }
        else
        {
          LOBYTE(v33) = 0;
        }
        v34 = __CFSHR__(v32, 7);
        v35 = 179;
      }
      else
      {
        v36 = *(_DWORD *)a3 | 8;
        *(_DWORD *)a3 = v36;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x10u;
          v36 = *(_DWORD *)a3;
          v33 = -__CFSHR__(*(_DWORD *)v7, 5);
        }
        else
        {
          LOBYTE(v33) = 0;
        }
        v34 = __CFSHR__(v36, 4);
        v35 = 178;
      }
      WPP_RECORDER_SF_qdqd(*((_QWORD *)this + 1), v29, v30, v35, v42, (char)a3, -v34, (char)v7, v33);
      if ( v7 )
      {
        v40 = *((unsigned int *)v7 + 2);
        if ( (unsigned int)v40 >= *((_DWORD *)a2 + 12) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
          v40 = *((unsigned int *)v7 + 2);
        }
        *(_DWORD *)(224 * v40 + *((_QWORD *)a2 + 14) + 204) &= ~1u;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0xB4u,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v6 = 1;
    }
    goto LABEL_58;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v14, (__int64)a2, v13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((struct _KTHREAD **)this, a2, *((_WORD *)a3 + 118), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0 || (*(_DWORD *)v7 & 0x400) != 0 )
      {
        v24 = CInputDest::CInputDest(v46, *((_QWORD *)v7 + 32), *((_DWORD *)v7 + 119));
        CInputDest::operator=((__int64)v43, v24);
        CInputDest::~CInputDest((CInputDest *)v46);
      }
      else
      {
        CInputDest::operator=((__int64)v43, (__int64)v7 + 24);
      }
    }
    goto LABEL_32;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_32;
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 1),
    4u,
    0xBu,
    0xADu,
    (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
    *((unsigned __int16 *)a3 + 118));
  v18 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = 174;
    goto LABEL_38;
  }
LABEL_58:
  CInputDest::~CInputDest((CInputDest *)v43);
  CInputDest::~CInputDest((CInputDest *)v45);
  return v6;
}
