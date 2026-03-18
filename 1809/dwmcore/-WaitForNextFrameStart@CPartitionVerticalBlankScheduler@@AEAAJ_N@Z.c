/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800C967C
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800786A0 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x180079D74 (-EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007AF24 (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180151A04 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  DWORD v2; // ebx
  __int64 v5; // rcx
  void *v6; // r12
  _QWORD *v7; // rbp
  signed int v8; // edi
  __int64 v9; // r13
  __int64 v10; // r15
  _QWORD *v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  int v15; // eax
  bool v16; // al
  __int64 v17; // r8
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v22; // eax
  unsigned __int64 VSync; // rbx
  unsigned __int64 v24; // rcx
  HANDLE Handles[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+8h]
  unsigned int v27; // [rsp+98h] [rbp+10h]
  void *v28; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Start);
  v5 = *((_QWORD *)this + 3233);
  if ( v5 && !*(_BYTE *)(v5 + 1058) && *(_BYTE *)(v5 + 1060) )
  {
    v19 = *((_QWORD *)this + 3232);
    v20 = *(__m128i *)(v5 + 496);
    *(_OWORD *)Handles = *(_OWORD *)(v19 + 480);
    v21 = *(_OWORD *)(v5 + 480);
    v5 = (unsigned int)(*(_DWORD *)(v19 + 496) + 1);
    *(_OWORD *)Handles = v21;
    v22 = _mm_cvtsi128_si32(v20) + 1;
    if ( v22 <= (unsigned int)v5 )
      v22 = v5;
    v26 = v22;
  }
  else
  {
    v26 = 0;
  }
  if ( a2 )
    v6 = 0LL;
  else
    v6 = (void *)*((_QWORD *)this + 5);
  v7 = 0LL;
  v27 = 0;
  v8 = -2003304307;
  v9 = *(_QWORD *)(*((_QWORD *)this + 8) + 64LL);
  LODWORD(v28) = *(_DWORD *)(v9 + 48);
  if ( (_DWORD)v28 )
  {
    v10 = 0LL;
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10 + *(_QWORD *)(v9 + 24)) + 48LL))(
             *(_QWORD *)(v10 + *(_QWORD *)(v9 + 24)),
             76LL) )
      {
        v11 = *(_QWORD **)(v10 + *(_QWORD *)(v9 + 24));
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v11 + 224LL))(v11) )
        {
          v12 = v11[21];
          if ( *(_BYTE *)(v12 + 321) )
          {
            if ( *(_BYTE *)(v12 + 322) )
              goto LABEL_14;
          }
        }
      }
      else if ( !v7
             && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10 + *(_QWORD *)(v9 + 24)) + 48LL))(
                  *(_QWORD *)(v10 + *(_QWORD *)(v9 + 24)),
                  69LL) )
      {
        v7 = *(_QWORD **)(v10 + *(_QWORD *)(v9 + 24));
      }
      v10 += 8LL;
      ++v27;
    }
    while ( v27 < (unsigned int)v28 );
    if ( !v7 )
      goto LABEL_22;
    v11 = v7;
LABEL_14:
    if ( !v11 )
      goto LABEL_22;
    v28 = 0LL;
    v13 = v11 + 8;
    (*(void (__fastcall **)(_QWORD *, void **))(*v13 + 80LL))(v13, &v28);
    v14 = *v13;
    if ( !v28 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD *, void *))(v14 + 96))(v13, v6);
      goto LABEL_22;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v14 + 88))(v13, v26);
    v8 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18024C878, 1u, v15, 0x4E3u);
    if ( v8 < 0 )
      goto LABEL_43;
    if ( v8 != 142213121 )
    {
      Handles[1] = v6;
      Handles[0] = v28;
      v8 = WaitForMultipleObjects((v6 != 0LL) + 1, Handles, 0, 0x64u);
      if ( !v8 )
        byte_180307F20 = 1;
    }
  }
LABEL_22:
  if ( v8 < 0 )
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18024C878, 1u, v8, 0x1C6u);
  v16 = *((_BYTE *)this + 26196) && v8 >= 0;
  *((_BYTE *)this + 26197) = v16;
  if ( v8 < 0 )
  {
    if ( v8 != -2003304307 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18024C878, 1u, v8, 0x1D3u);
  }
  else
  {
    v17 = 0LL;
    if ( v8 != 142213121 )
      goto LABEL_27;
  }
  VSync = CPartitionVerticalBlankScheduler::EstimateNextVSync(this);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
  CPartitionVerticalBlankScheduler::TraceTime(this);
  v24 = *((_QWORD *)this + 4414);
  if ( v24 >= VSync )
    VSync = *(_QWORD *)(*((_QWORD *)this + 3232) + 1464LL) + v24 - v24 % *(_QWORD *)(*((_QWORD *)this + 3232) + 1464LL);
  v2 = 1000 * (VSync - v24) / g_qpcFrequency.QuadPart + 1;
  Sleep(v2);
  v8 = 0;
  *(_BYTE *)(*((_QWORD *)this + 3232) + 1200LL) = 1;
  v17 = 1LL;
LABEL_27:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Stop, v17, v2);
  if ( *((_BYTE *)this + 30616) )
  {
    *(_WORD *)((char *)this + 30617) = 1;
    *((_QWORD *)this + 3830) = 0LL;
    *((_QWORD *)this + 3829) = 0LL;
    *((_QWORD *)this + 3829) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 30592));
  }
  return (unsigned int)v8;
}
