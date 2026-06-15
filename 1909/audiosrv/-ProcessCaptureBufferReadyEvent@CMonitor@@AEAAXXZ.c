/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18010FFB4
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18010DC34 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??C?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180058F84 (--C-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18010DA18 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18010DAFC (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18010DBA0 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180110BE4 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx @ 0x180111C24 (McTemplateU0pxx.c)
 *     WPP_SF_qdDdigi @ 0x180111E18 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x18014C008 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x18014C0AC (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  void **v2; // rbx
  _QWORD *v3; // r12
  int v4; // r14d
  double v5; // xmm6_8
  int *v6; // r13
  unsigned __int64 v7; // r8
  __int64 v8; // r8
  double v9; // xmm0_8
  __int64 v10; // rax
  double v11; // xmm1_8
  void **v12; // rax
  unsigned int v13; // ecx
  unsigned __int8 v14; // r8
  int v15; // ecx
  ATL::CAtlException *v16; // rbx
  unsigned __int64 v17; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v18; // [rsp+38h] [rbp-D0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B8h] BYREF
  char v20; // [rsp+58h] [rbp-B0h]
  void **v21; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+78h] [rbp-90h] BYREF
  void **v25; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v26; // [rsp+88h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-78h] BYREF
  ATL::CAtlException *v28; // [rsp+A0h] [rbp-68h] BYREF
  CMonitor *v29; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v31; // [rsp+120h] [rbp+18h] BYREF
  int v32; // [rsp+128h] [rbp+20h] BYREF

  v29 = this;
  Src[1] = (void *)-2LL;
  v1 = this;
  v2 = 0LL;
  v21 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)((char *)v1 + 88);
  v26 = (_QWORD *)((char *)v1 + 88);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 11) + 40LL))(*((_QWORD *)v1 + 11), &v32);
  if ( v4 >= 0 )
  {
    v5 = DOUBLE_1_844674407370955e19;
    while ( v32 )
    {
      if ( !*((_QWORD *)v1 + 40) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x24u,
            (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
            v32);
        }
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **, CMonitor **, unsigned int *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 24LL))(
               *((_QWORD *)v1 + 11),
               &v26,
               &v29,
               &v30,
               &v22,
               &v31);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 11) + 32LL))(
                 *((_QWORD *)v1 + 11),
                 (unsigned int)v29);
          if ( v4 >= 0 )
          {
            AEWMILOG_GLITCH(v13, v1, v14, 0xCu, v22, v31, v17, v18);
            if ( (byte_1801B8781 & 1) != 0 )
              McTemplateU0pxx(v15, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v22, v31);
            ShipAssert(90113LL, 1LL);
          }
        }
        break;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 48LL))(*((_QWORD *)v1 + 10), &v24);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned int *, unsigned __int64 *))(*(_QWORD *)*v3 + 24LL))(
               *v3,
               Src,
               &v30,
               &v31);
        if ( v4 >= 0 )
        {
          v2 = (void **)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 304);
          v21 = v2;
          v6 = (int *)ATL::CAutoPtr<CMonitor::SampleDataBlock>::operator->((__int64)&v21);
          AEWMILOG_POSITION(v30, v1, v7, 5u, (unsigned __int64)&v23, *v6, v7, v30);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            v18 = v23;
            LODWORD(v17) = v24;
            WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, v8, v2, v30, v31);
          }
          v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 12) + 32LL))(
                 *((_QWORD *)v1 + 12),
                 &v23,
                 &v22);
          if ( v4 >= 0 )
          {
            v9 = (double)(int)v23;
            if ( (v23 & 0x8000000000000000uLL) != 0LL )
              v9 = v9 + v5;
            v10 = *((_QWORD *)v1 + 17);
            v11 = (double)(int)v10;
            if ( v10 < 0 )
              v11 = v11 + v5;
            *((double *)v6 + 2) = v9 / v11;
            memcpy_0(*((void **)v6 + 4), Src[0], v30 * *((_QWORD *)v1 + 56));
            v6[3] = v30;
            v6[6] = 0;
            v6[1] = v31;
            try
            {
              v12 = v2;
              v2 = 0LL;
              v21 = 0LL;
              v25 = v12;
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
                (__int64 *)v1 + 44,
                (__int64)&v25);
            }
            catch ( ATL::CAtlException *v28 )
            {
              v16 = v28;
              if ( *(_DWORD *)v28 == -1073741571 )
                _o__resetstkoflw();
              LODWORD(v25) = *(_DWORD *)v16;
              v4 = (int)v25;
              if ( (int)v25 < 0 )
              {
                if ( v20 )
                  LeaveCriticalSection(lpCriticalSection);
                v1 = v29;
                v2 = v21;
                goto LABEL_39;
              }
              v1 = v29;
              v2 = v21;
              v5 = DOUBLE_1_844674407370955e19;
              v3 = v26;
            }
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 11) + 32LL))(*((_QWORD *)v1 + 11), v30);
            if ( v4 >= 0 )
            {
              v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 11) + 40LL))(
                     *((_QWORD *)v1 + 11),
                     &v32);
              if ( v4 >= 0 )
                continue;
            }
          }
        }
      }
      break;
    }
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else if ( v20 )
  {
    LeaveCriticalSection(lpCriticalSection);
  }
LABEL_39:
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x25u,
        (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
        v4);
    }
    CMonitor::AbortMonitor(v1);
  }
  if ( v2 )
    CMonitor::SampleDataBlock::`scalar deleting destructor'(v2);
}
