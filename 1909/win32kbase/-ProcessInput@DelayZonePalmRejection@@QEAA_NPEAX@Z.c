/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C016DC40 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C00232D0 (_HMObjectFromHandle.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C0168DD0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C0174BF0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0175340 (WPP_RECORDER_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C017C48C (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01804C8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0180840 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C018151C (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_dqddd @ 0x1C018176C (WPP_RECORDER_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C018D854 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C018D8E4 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

char __fastcall DelayZonePalmRejection::ProcessInput(LARGE_INTEGER *this, struct CPointerInputFrame *a2)
{
  BOOL v2; // r14d
  struct CPointerInputFrame *v3; // r15
  unsigned int v5; // r8d
  bool v6; // cl
  bool v7; // r12
  __int64 *QuadPart; // rdx
  unsigned int v9; // eax
  struct tagPOINT v10; // rbx
  int v11; // r13d
  char v12; // si
  const struct tagPOINTER_INFO *PointerInfo; // rax
  int v14; // edx
  const struct tagPOINTER_INFO *v15; // r14
  int v16; // eax
  LARGE_INTEGER v17; // rax
  int v18; // edx
  int v19; // eax
  LONG HighPart; // eax
  LONG v21; // eax
  LARGE_INTEGER v22; // r12
  LONG v23; // eax
  LARGE_INTEGER v24; // rax
  int v25; // eax
  bool v26; // al
  int v27; // r8d
  int v28; // r9d
  unsigned __int8 v29; // cl
  bool v30; // r12
  char v31; // al
  LARGE_INTEGER v32; // rcx
  DWORD LowPart; // eax
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  CHidInput *v37; // rcx
  CHidInput *v38; // rcx
  LARGE_INTEGER v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  bool v42; // zf
  LARGE_INTEGER v43; // rcx
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+38h] [rbp-D0h]
  bool v47[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+5Ch] [rbp-ACh]
  BOOL v49; // [rsp+60h] [rbp-A8h]
  BOOL v50; // [rsp+64h] [rbp-A4h]
  __int64 *v51[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-90h]
  unsigned int v53; // [rsp+7Ch] [rbp-8Ch]
  _OWORD v54[4]; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v55[2]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v56[2]; // [rsp+E8h] [rbp-20h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v46 = *((_DWORD *)a2 + 10);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      8,
      13,
      (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
      this->HighPart,
      v46);
  }
  v5 = *((_DWORD *)v3 + 12);
  v6 = 0;
  v7 = 0;
  v47[1] = 0;
  LOBYTE(v2) = 0;
  v47[0] = 0;
  QuadPart = 0LL;
  v49 = v2;
  v9 = 0;
  LOBYTE(v50) = 0;
  v10 = 0LL;
  v51[0] = 0LL;
  v11 = 0;
  v47[2] = 0;
  LOBYTE(v48) = 0;
  v12 = 1;
  v53 = v5;
  v52 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, v3, v9);
      v15 = PointerInfo;
      if ( PointerInfo )
      {
        v16 = *(_DWORD *)PointerInfo;
        if ( v16 == 3 )
        {
          v17 = this[4];
          if ( !v17.QuadPart )
          {
            v17 = *(LARGE_INTEGER *)((char *)v3 + 64);
            this[4] = v17;
          }
          if ( *((_QWORD *)v3 + 8) != v17.QuadPart )
            goto LABEL_92;
          v47[1] = 1;
          this[6] = KeQueryPerformanceCounter(0LL);
          v19 = *((_DWORD *)v15 + 3);
          if ( (v19 & 1) != 0 )
          {
            HighPart = this[5].HighPart;
            if ( !HighPart )
            {
              v10 = (struct tagPOINT)*((_QWORD *)v15 + 7);
              v47[2] = 1;
            }
            v21 = HighPart + 1;
            this[5].HighPart = v21;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_dqd(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                v18,
                8,
                14,
                (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
                *((_DWORD *)v15 + 1),
                this[4].QuadPart,
                v21);
            }
            v22 = this[20];
            if ( v22.QuadPart )
            {
              memset(&v54[2], 0, 0x20uLL);
              v55[0] = v54[2];
              v55[1] = v54[3];
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
                (LARGE_INTEGER)v22.QuadPart,
                0xFFFFFFFFLL,
                v55,
                v15,
                v11++);
            }
          }
          else if ( (v19 & 2) == 0 )
          {
            v23 = this[5].HighPart;
            if ( v23 )
              this[5].HighPart = --v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_dqd(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                v18,
                8,
                15,
                (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
                *((_DWORD *)v15 + 1),
                this[4].QuadPart,
                v23);
            }
          }
          QuadPart = v51[0];
          if ( (*((_DWORD *)v15 + 3) & 0x8000) != 0 )
            LOBYTE(v48) = 1;
          goto LABEL_38;
        }
        if ( v16 != 2 )
          goto LABEL_92;
        v24 = this[2];
        if ( !v24.QuadPart )
        {
          v24 = *(LARGE_INTEGER *)((char *)v3 + 64);
          this[2] = v24;
        }
        if ( *((_QWORD *)v3 + 8) != v24.QuadPart )
          goto LABEL_92;
        v7 = 1;
        v47[0] = 1;
        QuadPart = (__int64 *)KeQueryPerformanceCounter(0LL).QuadPart;
        v51[0] = QuadPart;
        v25 = *((_DWORD *)v15 + 3);
        if ( (v25 & 0x10000) == 0 )
        {
          if ( (v25 & 0x40000) != 0 )
          {
            LowPart = this[5].LowPart;
            if ( LowPart )
              this[5].LowPart = --LowPart;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(QuadPart) = 4;
              WPP_RECORDER_SF_dqd(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                (_DWORD)QuadPart,
                8,
                17,
                (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
                *((_DWORD *)v15 + 1),
                this[2].QuadPart,
                LowPart);
              QuadPart = v51[0];
            }
          }
          goto LABEL_39;
        }
        v47[3] = 0;
        ++this[5].LowPart;
        memset(v54, 0, 0x20uLL);
        v26 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                *((void **)v15 + 2),
                *(struct tagPOINT *)((char *)v15 + 48),
                *(struct tagPOINT *)((char *)v15 + 56),
                &v47[3],
                (struct CDelayZonePanelTelemetryData *)v54);
        v29 = v50;
        v30 = v26;
        if ( !v50 )
        {
          v29 = v26;
          v50 = v26;
        }
        v31 = v49;
        if ( !v49 )
        {
          v31 = !v30;
          v49 = !v30;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqddd(
            v29,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            v27,
            v28,
            v45,
            *((_DWORD *)v15 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v29,
            v31);
        v32 = this[20];
        if ( v32.QuadPart && v30 )
        {
          v56[0] = v54[0];
          v56[1] = v54[1];
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
            (LARGE_INTEGER)v32.QuadPart,
            v47[3],
            v56,
            v15,
            v11++);
        }
      }
      QuadPart = v51[0];
LABEL_38:
      v7 = v47[0];
LABEL_39:
      v9 = v52 + 1;
      v52 = v9;
      if ( v9 >= v53 )
      {
        LOBYTE(v2) = v49;
        v6 = v47[1];
        break;
      }
    }
  }
  if ( LOBYTE(this->LowPart) )
  {
    if ( v7 )
    {
      v34 = this[13].HighPart;
      if ( v34 )
      {
        v35 = (unsigned __int64)(1000 * ((_QWORD)QuadPart - this[6].QuadPart)) / gliQpcFreq.QuadPart;
        v36 = (unsigned __int64)(1000 * ((_QWORD)QuadPart - this[6].QuadPart)) % gliQpcFreq.QuadPart;
        if ( (unsigned int)v35 > v34 )
        {
          LOBYTE(this->LowPart) = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 4;
            WPP_RECORDER_SF_L(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v36,
              8,
              19,
              (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
              v35);
          }
        }
      }
    }
    goto LABEL_55;
  }
  v14 = 1;
  if ( v6 )
  {
    LOBYTE(this->LowPart) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v14, 8, 18, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids);
LABEL_55:
      v14 = 1;
    }
  }
  v37 = (CHidInput *)(unsigned int)this->HighPart;
  if ( !(_DWORD)v37 )
  {
    if ( LOBYTE(this->LowPart) )
    {
      if ( v47[1] && v47[2] )
      {
        v39 = this[20];
        this->HighPart = 2;
        v12 = 1;
        if ( !v39.QuadPart )
          goto LABEL_92;
        v40 = 1LL;
        v41 = 2LL;
        goto LABEL_83;
      }
      if ( v7 && v50 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v37, 0, this[12].HighPart);
        this[7].QuadPart = (LONGLONG)v3;
        v42 = this[3].QuadPart == 0;
        LOBYTE(this[1].LowPart) = 1;
        this[8].QuadPart = (LONGLONG)v3;
        if ( v42 )
        {
          v43 = this[2];
          v51[0] = (__int64 *)&this[3];
          v51[1] = (__int64 *)HMObjectFromHandle(v43.LowPart);
          HMAssignmentLock(v51);
        }
        v39 = this[20];
        v12 = 0;
        this->HighPart = 1;
        if ( v39.QuadPart )
        {
          v40 = 0LL;
          v41 = 1LL;
          goto LABEL_83;
        }
        goto LABEL_92;
      }
    }
    this->HighPart = 2;
    goto LABEL_91;
  }
  v38 = (CHidInput *)(unsigned int)((_DWORD)v37 - 1);
  if ( (_DWORD)v38 )
  {
    if ( (_DWORD)v38 != 1 )
      goto LABEL_92;
    if ( !this[5].HighPart && !this[5].LowPart && !(_BYTE)v48 )
    {
      this[4].QuadPart = 0LL;
      this[2].QuadPart = 0LL;
      this->HighPart = 0;
    }
    goto LABEL_91;
  }
  if ( v47[1] && v47[2] )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v38, 1, 0);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts((DelayZonePalmRejection *)this, v10);
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
    v39 = this[20];
    v12 = 1;
    if ( v39.QuadPart )
    {
      v40 = 1LL;
LABEL_69:
      v41 = (unsigned int)this->HighPart;
LABEL_83:
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
        (LARGE_INTEGER)v39.QuadPart,
        v41,
        v40);
      goto LABEL_92;
    }
    goto LABEL_92;
  }
  if ( !v7 )
  {
LABEL_91:
    v12 = 1;
    goto LABEL_92;
  }
  if ( v2 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v38, 1, 0);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
    v12 = 1;
  }
  else
  {
    this[8].QuadPart = (LONGLONG)v3;
    v12 = 0;
  }
  v39 = this[20];
  if ( v39.QuadPart )
  {
    v40 = 0LL;
    goto LABEL_69;
  }
LABEL_92:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v14,
      8,
      20,
      (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
      this->HighPart,
      v12);
  }
  return v12;
}
