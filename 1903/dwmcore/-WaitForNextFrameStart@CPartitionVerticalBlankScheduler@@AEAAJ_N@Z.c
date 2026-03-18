/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800940C4
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800A2A10 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800D77A0 (-EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D8940 (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180193678 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  __int64 v2; // r12
  DWORD v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __m128i v8; // xmm1
  __int128 v9; // xmm0
  unsigned int v10; // ecx
  unsigned int v11; // eax
  void *v12; // r15
  signed int v13; // edi
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned int v17; // ecx
  __int64 *v18; // r14
  __int64 v19; // rax
  int v20; // eax
  char v21; // al
  __int64 v22; // r8
  char *v23; // rsi
  unsigned __int64 VSync; // rbx
  unsigned __int64 v26; // rcx
  HANDLE Handles[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+8h]
  unsigned int v29; // [rsp+98h] [rbp+10h]
  void *v30; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v5 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Start);
  v6 = *((_QWORD *)this + 3238);
  if ( v6 && !*(_BYTE *)(v6 + 1058) && *(_BYTE *)(v6 + 1060) )
  {
    v7 = *((_QWORD *)this + 3237);
    v8 = *(__m128i *)(v6 + 496);
    *(_OWORD *)Handles = *(_OWORD *)(v7 + 480);
    v9 = *(_OWORD *)(v6 + 480);
    v10 = *(_DWORD *)(v7 + 496) + 1;
    *(_OWORD *)Handles = v9;
    v11 = _mm_cvtsi128_si32(v8) + 1;
    if ( v11 <= v10 )
      v11 = v10;
    v28 = v11;
  }
  else
  {
    v28 = 0;
  }
  v12 = 0LL;
  if ( !a2 )
    v12 = (void *)*((_QWORD *)this + 5);
  v13 = -2003304307;
  v14 = 0LL;
  v15 = 0LL;
  v16 = *(_QWORD *)(*((_QWORD *)this + 8) + 64LL);
  v29 = 0;
  v17 = *(_DWORD *)(v16 + 48);
  LODWORD(v30) = v17;
  if ( !v17 )
  {
LABEL_22:
    if ( v13 < 0 )
      goto LABEL_40;
    goto LABEL_23;
  }
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + *(_QWORD *)(v16 + 24)) + 48LL))(
            *(_QWORD *)(v2 + *(_QWORD *)(v16 + 24)),
            80LL) )
    {
      if ( !v15
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + *(_QWORD *)(v16 + 24)) + 48LL))(
             *(_QWORD *)(v2 + *(_QWORD *)(v16 + 24)),
             73LL) )
      {
        v15 = *(_QWORD *)(v2 + *(_QWORD *)(v16 + 24));
      }
      goto LABEL_45;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + *(_QWORD *)(v16 + 24)) + 256LL))(*(_QWORD *)(v2 + *(_QWORD *)(v16 + 24))) )
      break;
LABEL_45:
    v2 += 8LL;
    if ( ++v29 >= (unsigned int)v30 )
      goto LABEL_46;
  }
  v17 = v29;
  v14 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL * v29);
  if ( v14 )
    goto LABEL_15;
LABEL_46:
  if ( !v15 )
    v15 = v14;
  v14 = v15;
  if ( !v15 )
    goto LABEL_22;
LABEL_15:
  v18 = (__int64 *)(v14 + 64);
  v30 = 0LL;
  (*(void (__fastcall **)(__int64 *, void **))(*v18 + 80))(v18, &v30);
  v19 = *v18;
  if ( !v30 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64 *, void *))(v19 + 96))(v18, v12);
    goto LABEL_22;
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v19 + 88))(v18, v28);
  v13 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802920EC, 1u, v20, 0x4C1u, 0LL);
  if ( v13 >= 0 )
  {
    if ( v13 != 142213121 )
    {
      Handles[1] = v12;
      Handles[0] = v30;
      v13 = WaitForMultipleObjects((v12 != 0LL) + 1, Handles, 0, 0x64u);
      if ( !v13 )
        byte_18033C9B8 = 1;
    }
    goto LABEL_22;
  }
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802920EC, 1u, v13, 0x1C2u, 0LL);
LABEL_23:
  if ( !*((_BYTE *)this + 26236) || (v21 = 1, v13 < 0) )
    v21 = 0;
  *((_BYTE *)this + 26237) = v21;
  if ( v13 < 0 )
  {
    if ( v13 != -2003304307 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802920EC, 1u, v13, 0x1CFu, 0LL);
  }
  else
  {
    v22 = 0LL;
    if ( v13 != 142213121 )
      goto LABEL_27;
  }
  VSync = CPartitionVerticalBlankScheduler::EstimateNextVSync(this);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
  CPartitionVerticalBlankScheduler::TraceTime(this);
  v26 = *((_QWORD *)this + 4455);
  if ( v26 >= VSync )
    VSync = *(_QWORD *)(*((_QWORD *)this + 3237) + 1464LL) + v26 - v26 % *(_QWORD *)(*((_QWORD *)this + 3237) + 1464LL);
  v5 = 1000 * (VSync - v26) / g_qpcFrequency.QuadPart + 1;
  Sleep(v5);
  v13 = 0;
  v22 = 1LL;
  *(_BYTE *)(*((_QWORD *)this + 3237) + 1200LL) = 1;
LABEL_27:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Stop, v22, v5);
  v23 = (char *)this + 30920;
  if ( v23[24] )
  {
    *(_WORD *)(v23 + 25) = 1;
    *((_QWORD *)v23 + 6) = 0LL;
    *((_QWORD *)v23 + 5) = 0LL;
    *((_QWORD *)v23 + 5) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v23);
  }
  return (unsigned int)v13;
}
