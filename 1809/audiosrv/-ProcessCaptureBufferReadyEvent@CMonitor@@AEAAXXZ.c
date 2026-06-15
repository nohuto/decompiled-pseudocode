/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102774
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18010061C (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100460 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x1801004E4 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180100588 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1801033F0 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx @ 0x180104394 (McTemplateU0pxx.c)
 *     WPP_SF_qdDdigi @ 0x180104590 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1801480D0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x180148174 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  int *v2; // rbx
  int *v3; // r15
  _QWORD *v4; // r13
  int v5; // r14d
  double v6; // xmm6_8
  unsigned __int8 v7; // r8
  __int64 v8; // r8
  double v9; // xmm0_8
  __int64 v10; // rax
  double v11; // xmm1_8
  int *v12; // rax
  unsigned int v13; // ecx
  unsigned __int8 v14; // r8
  int v15; // ecx
  ATL::CAtlException *v16; // rbx
  unsigned __int64 v17; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v18; // [rsp+38h] [rbp-D0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+78h] [rbp-90h] BYREF
  int *v24; // [rsp+80h] [rbp-88h] BYREF
  int *v25; // [rsp+88h] [rbp-80h] BYREF
  void *Src; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  ATL::CAtlException *v29; // [rsp+A8h] [rbp-60h] BYREF
  CMonitor *v30; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v32; // [rsp+120h] [rbp+18h] BYREF
  int v33; // [rsp+128h] [rbp+20h] BYREF

  v30 = this;
  v28 = -2LL;
  v1 = this;
  v2 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 392);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_QWORD *)((char *)v1 + 80);
  v27 = (_QWORD *)((char *)v1 + 80);
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v33);
  if ( v5 < 0 )
  {
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_44;
  }
  v6 = DOUBLE_1_844674407370955e19;
  while ( 1 )
  {
    if ( !v33 )
      goto LABEL_41;
    if ( !*((_QWORD *)v1 + 39) )
      break;
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 9) + 48LL))(*((_QWORD *)v1 + 9), &v23);
    if ( v5 < 0 )
      goto LABEL_9;
    v5 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)*v4 + 24LL))(
           *v4,
           &Src,
           &v31,
           &v32);
    if ( v5 < 0 )
      goto LABEL_9;
    v2 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 296);
    AEWMILOG_POSITION(*v2, v1, v7, 5u, (unsigned __int64)&v22, *v2, v22, (unsigned int)v31);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v18 = v22;
      LODWORD(v17) = v23;
      WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, v8, v2, v31, v32);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 32LL))(
           *((_QWORD *)v1 + 11),
           &v22,
           &v21);
    if ( v5 < 0 )
    {
LABEL_17:
      if ( v20 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_44;
    }
    v9 = (double)(int)v22;
    if ( (v22 & 0x8000000000000000uLL) != 0LL )
      v9 = v9 + v6;
    v10 = *((_QWORD *)v1 + 16);
    v11 = (double)(int)v10;
    if ( v10 < 0 )
      v11 = v11 + v6;
    *((double *)v2 + 2) = v9 / v11;
    memcpy_0(*((void **)v2 + 3), Src, (unsigned int)v31 * *((_QWORD *)v1 + 55));
    try
    {
      v2[3] = v31;
      v2[1] = v32;
      v12 = v2;
      v2 = 0LL;
      v24 = v12;
      ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
        (__int64 *)v1 + 43,
        (__int64)&v24);
    }
    catch ( ATL::CAtlException *v29 )
    {
      v16 = v29;
      if ( *(_DWORD *)v29 == -1073741571 )
        o__resetstkoflw_0();
      LODWORD(v24) = *(_DWORD *)v16;
      v5 = (int)v24;
      if ( (int)v24 >= 0 )
      {
        v1 = v30;
        v2 = 0LL;
        v6 = DOUBLE_1_844674407370955e19;
        v4 = v27;
        v3 = v25;
        goto LABEL_29;
      }
      if ( v20 )
        LeaveCriticalSection(lpCriticalSection);
      v1 = v30;
      v2 = 0LL;
LABEL_44:
      if ( v5 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x23u,
            (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
            v5);
        }
        CMonitor::AbortMonitor(v1);
      }
      if ( v2 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'((void **)v2);
    }
LABEL_29:
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
           *((_QWORD *)v1 + 10),
           (unsigned int)v31);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v33);
      if ( v5 >= 0 )
        continue;
    }
    goto LABEL_17;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v33);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, int **, CMonitor **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
         *((_QWORD *)v1 + 10),
         &v25,
         &v30,
         &v31,
         &v21,
         &v32);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
               *((_QWORD *)v1 + 10),
               (unsigned int)v30),
        v5 < 0) )
  {
LABEL_9:
    if ( !v20 )
    {
LABEL_43:
      v2 = v3;
      goto LABEL_44;
    }
  }
  else
  {
    AEWMILOG_GLITCH(v13, v1, v14, 0xCu, v21, v32, v17, v18);
    if ( (byte_1801B46C1 & 1) != 0 )
      McTemplateU0pxx(v15, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v21, v32);
    ShipAssert(90113LL, 1LL);
LABEL_41:
    v2 = v3;
    if ( !v20 )
      goto LABEL_44;
  }
  LeaveCriticalSection(lpCriticalSection);
  goto LABEL_43;
}
