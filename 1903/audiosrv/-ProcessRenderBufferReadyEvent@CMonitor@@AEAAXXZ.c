/*
 * XREFs of ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801109F4
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18010E134 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_qdd @ 0x1800D2360 (WPP_SF_qdd.c)
 *     ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x18010DC5C (--1-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18010DFFC (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18010E0A0 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18010E2F0 (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18010F51C (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1801110E4 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx @ 0x180112124 (McTemplateU0pxx.c)
 *     WPP_SF_qdDdigi @ 0x180112318 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x18014D008 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x18014D0AC (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessRenderBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // r14
  int v2; // r15d
  unsigned __int8 v3; // r8
  unsigned int v4; // ecx
  int v5; // ecx
  double v6; // xmm7_8
  unsigned int v7; // r13d
  double *v8; // rbx
  unsigned __int8 v9; // r8
  double v10; // xmm6_8
  __int64 v11; // rax
  double v12; // xmm0_8
  double v13; // xmm6_8
  double v14; // xmm8_8
  double v15; // xmm0_8
  __int64 v16; // rax
  double v17; // xmm1_8
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned __int64 v20; // rax
  int v21; // edi
  _QWORD *Head; // rax
  ATL::CAtlException *v23; // rbx
  __int64 *v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v27; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v29; // [rsp+38h] [rbp-D0h]
  double v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  CMonitor::SampleDataBlock *v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  void *v35[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v36[8]; // [rsp+78h] [rbp-90h] BYREF
  ATL::CAtlException *v37; // [rsp+80h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-80h] BYREF
  char v39; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v42; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+128h] [rbp+20h] BYREF

  v35[1] = (void *)-2LL;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v39 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 23) + 48LL))(*((_QWORD *)v1 + 23), &v41);
  if ( v2 < 0 )
  {
LABEL_2:
    if ( v39 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_51;
  }
  if ( !*((_QWORD *)v1 + 46) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 25) + 32LL))(
           *((_QWORD *)v1 + 25),
           &v43,
           &v42);
    if ( v2 < 0 )
      goto LABEL_2;
    v4 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
    }
    AEWMILOG_GLITCH(v4, v1, v3, 0xDu, v43, v42, v28, v29);
    if ( (byte_1801B9781 & 1) != 0 )
      McTemplateU0pxx(v5, (unsigned int)&EVT_GLITCH_CM_RENDER, (_DWORD)v1, v43, v42);
    ShipAssert(90113LL, 0LL);
  }
  v6 = DOUBLE_1_844674407370955e19;
  while ( *((_QWORD *)v1 + 46) )
  {
    v7 = *((_DWORD *)v1 + 62) - v41;
    if ( !v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v21 = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 44)
                        + 12LL);
        Head = (_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 44);
        LODWORD(v27) = 0;
        LODWORD(v26) = v21;
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x28u,
          (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
          *Head,
          v26,
          v27);
      }
      break;
    }
    v8 = *(double **)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 44);
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 25) + 32LL))(
           *((_QWORD *)v1 + 25),
           &v43,
           &v34);
    if ( v2 < 0 )
      break;
    v10 = (double)(int)v43;
    if ( (v43 & 0x8000000000000000uLL) != 0LL )
      v10 = v10 + v6;
    v11 = *((_QWORD *)v1 + 32);
    v12 = (double)(int)v11;
    if ( v11 < 0 )
      v12 = v12 + v6;
    v13 = v10 / v12;
    v14 = (double)*(int *)(*((_QWORD *)v1 + 13) + 4LL) * v13;
    if ( *((double *)v1 + 59) == 0.0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)v1 + 12) + 32LL))(
             *((_QWORD *)v1 + 12),
             &v33,
             v36);
      if ( v2 < 0 )
        break;
      v15 = (double)(int)v33;
      if ( v33 < 0 )
        v15 = v15 + v6;
      v16 = *((_QWORD *)v1 + 17);
      v17 = (double)(int)v16;
      if ( v16 < 0 )
        v17 = v17 + v6;
      *((double *)v1 + 59) = v15 / v17 - v8[2];
    }
    AEWMILOG_POSITION((int)v14, v1, v9, 6u, v26, *(int *)v8, (unsigned int)(int)v14, v7);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v31 = v34;
      v30 = v13;
      v29 = v43;
      LODWORD(v28) = v41;
      WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, v18, v8, *((_DWORD *)v8 + 3), *((_DWORD *)v8 + 1));
    }
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(int)GetTickCount() - (double)*((int *)v1 + 116)) & _xmm) > 30000.0 )
    {
      *((_DWORD *)v1 + 116) = GetTickCount();
      CMonitor::MeasureClockDrift(v1, v8[2], v13);
    }
    v19 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 6);
    if ( v19 >= v7 )
      v19 = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)v1 + 24) + 24LL))(
           *((_QWORD *)v1 + 24),
           v19,
           v35);
    if ( v2 >= 0 )
    {
      memcpy_0(
        v35[0],
        (const void *)(*((_QWORD *)v8 + 4) + *((_QWORD *)v1 + 56) * *((unsigned int *)v8 + 6)),
        *((_QWORD *)v1 + 56) * v19);
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 24) + 32LL))(
             *((_QWORD *)v1 + 24),
             v19,
             *((_DWORD *)v8 + 1) & 2);
      if ( v2 >= 0 )
      {
        *((_DWORD *)v8 + 6) += v19;
        if ( *((_DWORD *)v8 + 6) == *((_DWORD *)v8 + 3) )
        {
          v32 = 0LL;
          v20 = ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 352);
          v2 = 0;
          try
          {
            v32 = 0LL;
            v42 = v20;
            ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
              (__int64 *)v1 + 38,
              (__int64)&v42);
          }
          catch ( ATL::CAtlException *v37 )
          {
            v24 = &v25;
            v23 = v37;
            if ( *(_DWORD *)v37 == -1073741571 )
              _o__resetstkoflw();
            LODWORD(v42) = *(_DWORD *)v23;
            v1 = this;
            v2 = v42;
            v6 = DOUBLE_1_844674407370955e19;
          }
          ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(&v32, (unsigned int)v24);
        }
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 23) + 48LL))(*((_QWORD *)v1 + 23), &v41);
          if ( v2 >= 0 )
            continue;
        }
      }
    }
    break;
  }
  if ( v39 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_51:
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x29u,
        (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
}
