/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C014FED0
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C0141370 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C013C6F0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C0147E7C (WPP_RECORDER_SF_L.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C014C77C (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C014F7FC (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C014FB60 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1C014FC88 (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C0150770 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C01509AC (WPP_RECORDER_SF_qddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C0156EA0 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C0156F30 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(LARGE_INTEGER *this, LARGE_INTEGER *a2)
{
  BOOL v2; // r14d
  unsigned int LowPart; // r8d
  char v6; // r12
  char v7; // al
  LARGE_INTEGER PerformanceCounter; // rdx
  unsigned int v9; // ecx
  unsigned __int8 v10; // si
  struct tagPOINT v11; // rbx
  int v12; // r13d
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v14; // r14
  int v15; // eax
  LARGE_INTEGER v16; // rax
  int v17; // eax
  LONG HighPart; // eax
  LONG v19; // eax
  LARGE_INTEGER v20; // r12
  LONG v21; // eax
  LARGE_INTEGER v22; // rax
  int v23; // eax
  bool v24; // al
  int v25; // r8d
  int v26; // r9d
  char v27; // cl
  bool v28; // r12
  char v29; // al
  LARGE_INTEGER v30; // rcx
  DWORD v31; // eax
  unsigned int v32; // ecx
  unsigned __int64 v33; // rax
  CHidInput *v34; // rcx
  CHidInput *v35; // rcx
  LARGE_INTEGER v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  int v40; // [rsp+28h] [rbp-A9h]
  struct CDelayZonePanelTelemetryData *v41; // [rsp+30h] [rbp-A1h]
  __int64 v42; // [rsp+38h] [rbp-99h]
  char v43; // [rsp+58h] [rbp-79h]
  char v44; // [rsp+59h] [rbp-78h]
  char v45; // [rsp+5Ah] [rbp-77h]
  bool v46; // [rsp+5Bh] [rbp-76h] BYREF
  char v47; // [rsp+5Ch] [rbp-75h]
  LARGE_INTEGER v48; // [rsp+60h] [rbp-71h]
  BOOL v49; // [rsp+68h] [rbp-69h]
  BOOL v50; // [rsp+6Ch] [rbp-65h]
  unsigned int v51; // [rsp+70h] [rbp-61h]
  unsigned int v52; // [rsp+74h] [rbp-5Dh]
  _OWORD v53[4]; // [rsp+78h] [rbp-59h] BYREF
  _OWORD v54[2]; // [rsp+B8h] [rbp-19h] BYREF
  _OWORD v55[2]; // [rsp+D8h] [rbp+7h] BYREF

  WPP_RECORDER_SF_d(
    this[14].QuadPart,
    4u,
    0xDu,
    0xDu,
    (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
    this->HighPart);
  LowPart = a2[6].LowPart;
  v6 = 0;
  v7 = 0;
  v43 = 0;
  LOBYTE(v2) = 0;
  LOBYTE(v50) = 0;
  PerformanceCounter.QuadPart = 0LL;
  v49 = v2;
  v9 = 0;
  v48.QuadPart = 0LL;
  v10 = 1;
  v52 = LowPart;
  v51 = 0;
  v11 = 0LL;
  v44 = 0;
  v12 = 0;
  v45 = 0;
  v47 = 0;
  if ( LowPart )
  {
    while ( 1 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(
                      (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
                      (const struct CPointerInputFrame *)a2,
                      v9);
      v14 = PointerInfo;
      if ( PointerInfo )
      {
        v15 = *(_DWORD *)PointerInfo;
        if ( v15 == 3 )
        {
          v16 = this[4];
          if ( !v16.QuadPart )
          {
            v16 = a2[8];
            this[4] = v16;
          }
          if ( a2[8].QuadPart != v16.QuadPart )
            goto LABEL_79;
          v44 = 1;
          this[6] = KeQueryPerformanceCounter(0LL);
          v17 = *((_DWORD *)v14 + 3);
          if ( (v17 & 1) != 0 )
          {
            HighPart = this[5].HighPart;
            if ( !HighPart )
            {
              v11 = (struct tagPOINT)*((_QWORD *)v14 + 7);
              v45 = 1;
            }
            v19 = HighPart + 1;
            this[5].HighPart = v19;
            LODWORD(v42) = v19;
            WPP_RECORDER_SF_qd(
              this[14].QuadPart,
              4u,
              0xDu,
              0xEu,
              (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
              this[4].QuadPart,
              v42);
            v20 = this[17];
            if ( v20.QuadPart )
            {
              memset(&v53[2], 0, 0x20uLL);
              v54[0] = v53[2];
              v54[1] = v53[3];
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
                (LARGE_INTEGER)v20.QuadPart,
                0xFFFFFFFFLL,
                v54,
                v14,
                v12++);
            }
          }
          else if ( (v17 & 2) == 0 )
          {
            v21 = this[5].HighPart;
            if ( v21 )
              this[5].HighPart = --v21;
            LODWORD(v42) = v21;
            WPP_RECORDER_SF_qd(
              this[14].QuadPart,
              4u,
              0xDu,
              0xFu,
              (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
              this[4].QuadPart,
              v42);
          }
          PerformanceCounter = v48;
          if ( (*((_DWORD *)v14 + 3) & 0x8000) != 0 )
            v47 = 1;
          goto LABEL_31;
        }
        if ( v15 != 2 )
          goto LABEL_79;
        v22 = this[2];
        if ( !v22.QuadPart )
        {
          v22 = a2[8];
          this[2] = v22;
        }
        if ( a2[8].QuadPart != v22.QuadPart )
          goto LABEL_79;
        v6 = 1;
        v43 = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v48 = PerformanceCounter;
        v23 = *((_DWORD *)v14 + 3);
        if ( (v23 & 0x10000) == 0 )
        {
          if ( (v23 & 0x40000) != 0 )
          {
            v31 = this[5].LowPart;
            if ( v31 )
              this[5].LowPart = --v31;
            LODWORD(v42) = v31;
            WPP_RECORDER_SF_qd(
              this[14].QuadPart,
              4u,
              0xDu,
              0x11u,
              (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
              this[2].QuadPart,
              v42);
            PerformanceCounter = v48;
          }
          goto LABEL_32;
        }
        v46 = 0;
        ++this[5].LowPart;
        memset(v53, 0, 0x20uLL);
        v24 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                *((void **)v14 + 2),
                *(struct tagPOINT *)((char *)v14 + 48),
                *(struct tagPOINT *)((char *)v14 + 56),
                &v46,
                (struct CDelayZonePanelTelemetryData *)v53);
        v27 = v50;
        v28 = v24;
        if ( !v50 )
        {
          v27 = v24;
          v50 = v24;
        }
        v29 = v49;
        if ( !v49 )
        {
          v29 = !v28;
          v49 = !v28;
        }
        WPP_RECORDER_SF_qddd(this[14].QuadPart, 1, v25, v26, v40, this[2].QuadPart, this[5].LowPart, v27, v29);
        v30 = this[17];
        if ( v30.QuadPart && v28 )
        {
          v55[0] = v53[0];
          v55[1] = v53[1];
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
            (LARGE_INTEGER)v30.QuadPart,
            v46,
            v55,
            v14,
            v12++);
        }
      }
      PerformanceCounter = v48;
LABEL_31:
      v6 = v43;
LABEL_32:
      v9 = v51 + 1;
      v51 = v9;
      if ( v9 >= v52 )
      {
        LOBYTE(v2) = v49;
        v7 = v44;
        break;
      }
    }
  }
  if ( LOBYTE(this->LowPart) )
  {
    if ( v6 )
    {
      v32 = this[13].HighPart;
      if ( v32 )
      {
        v33 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[6].QuadPart)) / gliQpcFreq.QuadPart;
        if ( (unsigned int)v33 > v32 )
        {
          LOBYTE(this->LowPart) = 0;
          LODWORD(v41) = v33;
          WPP_RECORDER_SF_L(
            this[14].QuadPart,
            4u,
            0xDu,
            0x13u,
            (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
            v41);
        }
      }
    }
  }
  else if ( v7 )
  {
    LOBYTE(this->LowPart) = 1;
    WPP_RECORDER_SF_(this[14].QuadPart, 4u, 0xDu, 0x12u, (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
  }
  v34 = (CHidInput *)(unsigned int)this->HighPart;
  if ( !(_DWORD)v34 )
  {
    if ( LOBYTE(this->LowPart) )
    {
      if ( v44 && v45 )
      {
        v36 = this[17];
        v38 = 2LL;
        this->HighPart = 2;
        v10 = 1;
        if ( !v36.QuadPart )
          goto LABEL_79;
        v37 = 1LL;
LABEL_72:
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
          (LARGE_INTEGER)v36.QuadPart,
          v38,
          v37);
        goto LABEL_79;
      }
      if ( v6 && v50 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v34, 0, this[12].HighPart);
        this[7].QuadPart = (LONGLONG)a2;
        LOBYTE(this[1].LowPart) = 1;
        this[8].QuadPart = (LONGLONG)a2;
        DelayZonePalmRejection::LockTouchDeviceHandle((DelayZonePalmRejection *)this);
        v36 = this[17];
        v10 = 0;
        this->HighPart = 1;
        if ( !v36.QuadPart )
          goto LABEL_79;
        v37 = 0LL;
        v38 = 1LL;
        goto LABEL_72;
      }
    }
    this->HighPart = 2;
    goto LABEL_78;
  }
  v35 = (CHidInput *)(unsigned int)((_DWORD)v34 - 1);
  if ( !(_DWORD)v35 )
  {
    if ( v44 && v45 )
    {
      if ( LOBYTE(this[1].LowPart) == 1 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v35, 1, 0);
        LOBYTE(this[1].LowPart) = 0;
      }
      DelayZonePalmRejection::SuppressDeadzoneContacts((DelayZonePalmRejection *)this, v11);
      DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
      v36 = this[17];
      v10 = 1;
      if ( !v36.QuadPart )
        goto LABEL_79;
      v37 = 1LL;
LABEL_58:
      v38 = (unsigned int)this->HighPart;
      goto LABEL_72;
    }
    if ( v6 )
    {
      if ( v2 )
      {
        if ( LOBYTE(this[1].LowPart) == 1 )
        {
          CHidInput::HandleDelayZonePalmRejectionTimer(v35, 1, 0);
          LOBYTE(this[1].LowPart) = 0;
        }
        DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
        v10 = 1;
      }
      else
      {
        this[8].QuadPart = (LONGLONG)a2;
        v10 = 0;
      }
      v36 = this[17];
      if ( !v36.QuadPart )
        goto LABEL_79;
      v37 = 0LL;
      goto LABEL_58;
    }
LABEL_78:
    v10 = 1;
    goto LABEL_79;
  }
  if ( (_DWORD)v35 == 1 )
  {
    if ( !this[5].HighPart && !this[5].LowPart && !v47 )
    {
      this[4].QuadPart = 0LL;
      this[2].QuadPart = 0LL;
      this->HighPart = 0;
    }
    goto LABEL_78;
  }
LABEL_79:
  LODWORD(v42) = v10;
  LODWORD(v41) = this->HighPart;
  WPP_RECORDER_SF_dd(
    this[14].QuadPart,
    4u,
    0xDu,
    0x14u,
    (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
    v41,
    v42);
  return v10;
}
