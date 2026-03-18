/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000A930
 * Callers:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0005BE0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00061F0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0006A10 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00074C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00084C0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0009750 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUnwaitContext @ 0x1C000E794 (VidSchiUnwaitContext.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F1E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010B50 (VidSchSuspendResumeDevice.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0011D1C (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C001233C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0012420 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteRewindPacket @ 0x1C00125DC (VidSchiCompleteRewindPacket.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012E10 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C002F73C (VidSchiReadCommandFromContextQueue.c)
 *     VidSchSetNodePowerState @ 0x1C0033490 (VidSchSetNodePowerState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C0026244 (McTemplateK0pqq.c)
 *     McTemplateK0piixqq @ 0x1C002C198 (McTemplateK0piixqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // r15d
  int v6; // r12d
  int v7; // esi
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rcx
  bool v13; // zf
  unsigned int v14; // ecx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  int v21; // eax
  signed __int32 v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // r9
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  unsigned int v35; // ebp
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // eax
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  __int64 *v42; // rax
  __int64 *v43; // r14
  int v44; // ecx
  int v45; // [rsp+90h] [rbp+18h]

  v45 = a3;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = a3;
  v7 = (int)a2;
  v9 = *(_QWORD *)(v4 + 24);
  if ( bTracingEnabled )
  {
    v10 = *(_QWORD *)(a1 + 56);
    if ( !v10 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v10) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0pqq(a1, (unsigned int)&EventUpdateContextStatus, a3, v10, (char)a2, a3);
  }
  if ( v7 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 8) == 0
      && (*(_DWORD *)(a1 + 184) & 4) == 0
      && (*(_DWORD *)(a1 + 184) & 0x10) == 0
      && (*(_DWORD *)(a1 + 184) & 0x40) == 0
      && (*(_DWORD *)(a1 + 184) & 0x200) == 0
      && (*(_DWORD *)(a1 + 184) & 0x100) == 0
      && (*(_DWORD *)(a1 + 184) & 0x80u) == 0
      && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = (_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v16 + 8) != a1 + 8 )
          goto LABEL_69;
        v18 = *(_QWORD **)(a1 + 16);
        if ( (_QWORD *)*v18 != v17 )
          goto LABEL_69;
        *v18 = v16;
        *(_QWORD *)(v16 + 8) = v18;
        v19 = *(_DWORD *)(a1 + 404);
        a3 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(16LL * v19 + v4 + 2024) == 16LL * v19 + v4 + 2024 )
        {
          v20 = *(unsigned __int16 *)(v4 + 4);
          *(_DWORD *)(v4 + 1752) |= 1 << v19;
          if ( !_bittest64(*(const signed __int64 **)(a3 + 480), v20)
            && ((-1 << *(_DWORD *)(a1 + 404)) & *(_DWORD *)(v4 + 1756)) == 0
            && !*(_DWORD *)(v4 + 2868) )
          {
            RtlSetBitEx(a3 + 472, v20);
          }
        }
        v21 = *(_DWORD *)(v4 + 2844);
        if ( !v21 )
        {
          if ( (unsigned __int8)RtlAreBitsClearEx(v9 + 424, 0LL, *(unsigned int *)(v9 + 72))
            && *(_DWORD *)(*(_QWORD *)(v9 + 16) + 136LL) == 1 )
          {
            v38 = *(_DWORD *)(v4 + 11192);
            if ( v38 != -1 && *(_QWORD *)(v9 + 2456) )
            {
              (*(void (__fastcall **)(_QWORD))(v9 + 2456))(*(_QWORD *)(v9 + 2496));
              v38 = *(_DWORD *)(v4 + 11192);
            }
            if ( v38 != -1 && *(_QWORD *)(v9 + 2464) )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2464))(*(_QWORD *)(v9 + 2496), v38);
          }
          RtlSetBitEx(v9 + 424, *(unsigned __int16 *)(v4 + 4));
          v21 = *(_DWORD *)(v4 + 2844);
          v6 = v45;
        }
        *(_DWORD *)(v4 + 2844) = v21 + 1;
        *(_DWORD *)(a1 + 184) |= 1u;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0);
        a2 = (_QWORD *)(16LL * *(unsigned int *)(a1 + 404) + v4 + 2024);
        if ( v22 == 1 )
        {
          v29 = *a2;
          if ( *(_QWORD **)(*a2 + 8LL) != a2 )
            goto LABEL_69;
          *v17 = v29;
          *(_QWORD *)(a1 + 16) = a2;
          *(_QWORD *)(v29 + 8) = v17;
          *a2 = v17;
        }
        else
        {
          v23 = (_QWORD *)a2[1];
          if ( (_QWORD *)*v23 != a2 )
            goto LABEL_69;
          *v17 = a2;
          *(_QWORD *)(a1 + 16) = v23;
          *v23 = v17;
          a2[1] = v17;
        }
        if ( *(_DWORD *)(a1 + 408) == 1 )
        {
          a2 = (_QWORD *)(a1 + 416);
          v30 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                     + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                         + 216LL);
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
          {
            v31 = *v30;
            if ( *(_QWORD **)(*v30 + 8LL) != v30 )
              goto LABEL_69;
            *a2 = v31;
            *(_QWORD *)(a1 + 424) = v30;
            *(_QWORD *)(v31 + 8) = a2;
            *v30 = a2;
          }
          else
          {
            v37 = (_QWORD *)v30[1];
            if ( (_QWORD *)*v37 != v30 )
              goto LABEL_69;
            *a2 = v30;
            *(_QWORD *)(a1 + 424) = v37;
            *v37 = a2;
            v30[1] = a2;
          }
        }
        v5 = 1;
      }
      goto LABEL_45;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v39[3] = 281LL;
    v39[4] = 1024LL;
    v39[5] = v9;
    v39[6] = v4;
    v39[7] = a1;
    WdLogEvent5_WdCriticalError(v39);
    __debugbreak();
LABEL_90:
    *(_DWORD *)(a1 + 184) |= 0x80u;
    v40 = *(_QWORD **)(v4 + 2576);
    if ( *v40 != v4 + 2568 )
      goto LABEL_69;
    *v3 = v4 + 2568;
    v3[1] = v40;
    *v40 = v3;
    *(_QWORD *)(v4 + 2576) = v3;
    goto LABEL_45;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v11 + 8) != a1 + 8 )
    goto LABEL_69;
  v12 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)*v12 != v3 )
    goto LABEL_69;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    v13 = (*(_DWORD *)(v4 + 2844))-- == 1;
    if ( v13 )
      RtlClearBitEx(v9 + 424, *(unsigned __int16 *)(v4 + 4));
    v14 = *(_DWORD *)(a1 + 404);
    if ( *(_QWORD *)(v4 + 16LL * v14 + 2024) == v4 + 16LL * v14 + 2024 )
      *(_DWORD *)(v4 + 1752) &= ~(1 << v14);
    if ( *(_DWORD *)(a1 + 408) == 1 )
    {
      v32 = (_QWORD *)(a1 + 416);
      v33 = *(_QWORD *)(a1 + 416);
      if ( *(_QWORD *)(v33 + 8) != a1 + 416 )
        goto LABEL_69;
      a2 = *(_QWORD **)(a1 + 424);
      if ( (_QWORD *)*a2 != v32 )
        goto LABEL_69;
      *a2 = v33;
      *(_QWORD *)(v33 + 8) = a2;
      *(_QWORD *)(a1 + 424) = 0LL;
      *v32 = 0LL;
    }
    *(_DWORD *)(a1 + 184) &= ~1u;
  }
  switch ( v7 )
  {
    case 0:
      v26 = *(_QWORD **)(v4 + 2560);
      if ( *v26 != v4 + 2552 )
        goto LABEL_69;
      *v3 = v4 + 2552;
      *(_QWORD *)(a1 + 16) = v26;
      *v26 = v3;
      *(_QWORD *)(v4 + 2560) = v3;
      *(_DWORD *)(a1 + 184) = 0;
      break;
    case 8:
      goto LABEL_90;
    case 9:
      v41 = *(_QWORD **)(v4 + 2592);
      if ( *v41 != v4 + 2584 )
        goto LABEL_69;
      *v3 = v4 + 2584;
      *(_QWORD *)(a1 + 16) = v41;
      *v41 = v3;
      *(_QWORD *)(v4 + 2592) = v3;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1093LL) )
      {
        KeResetEvent((PRKEVENT)(v9 + 2376));
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1093LL) = 1;
      }
      *(_DWORD *)(a1 + 184) |= 0x200u;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1096LL);
      break;
    case 10:
      v34 = *(_QWORD **)(v4 + 2592);
      if ( *v34 != v4 + 2584 )
        goto LABEL_69;
      *v3 = v4 + 2584;
      *(_QWORD *)(a1 + 16) = v34;
      *v34 = v3;
      *(_QWORD *)(v4 + 2592) = v3;
      if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
      {
        --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1096LL);
        *(_DWORD *)(a1 + 184) &= ~0x200u;
      }
      *(_DWORD *)(a1 + 184) |= 0x100u;
      *(_DWORD *)(a1 + 184) &= ~0x80u;
      v35 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 11192LL);
      if ( v35 != -1 )
      {
        v42 = (__int64 *)(a1 + 656);
        v43 = *(__int64 **)(a1 + 656);
        if ( v43 != (__int64 *)(a1 + 656) )
        {
          do
          {
            v44 = *((_DWORD *)v43 + 12);
            if ( (v44 & 0x10) != 0 )
            {
              a3 = *(_QWORD *)(v9 + 2464);
              if ( a3 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2464))(*(_QWORD *)(v9 + 2496), v35);
                v44 = *((_DWORD *)v43 + 12);
                v42 = (__int64 *)(a1 + 656);
              }
              *((_DWORD *)v43 + 12) = v44 & 0xFFFFFFEF;
            }
            v43 = (__int64 *)*v43;
          }
          while ( v43 != v42 );
        }
      }
      v36 = *(_QWORD *)(a1 + 104);
      if ( !*(_DWORD *)(v36 + 1096) )
      {
        *(_BYTE *)(v36 + 1092) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1093LL) = 0;
        KeSetEvent((PRKEVENT)(v9 + 2376), 0, 0);
      }
      break;
    case 1:
      v15 = *(_QWORD **)(v4 + 2560);
      if ( *v15 == v4 + 2552 )
      {
        *v3 = v4 + 2552;
        *(_QWORD *)(a1 + 16) = v15;
        *v15 = v3;
        *(_QWORD *)(v4 + 2560) = v3;
        break;
      }
LABEL_69:
      __fastfail(3u);
    default:
      v27 = *(_QWORD **)(v4 + 2544);
      if ( *v27 != v4 + 2536 )
        goto LABEL_69;
      *v3 = v4 + 2536;
      *(_QWORD *)(a1 + 16) = v27;
      *v27 = v3;
      *(_QWORD *)(v4 + 2544) = v3;
      switch ( v7 )
      {
        case 2:
          *(_DWORD *)(a1 + 184) |= 8u;
          break;
        case 3:
          *(_DWORD *)(a1 + 184) |= 0x10u;
          break;
        case 4:
          v28 = *(_DWORD *)(a1 + 184) | 0x20;
LABEL_60:
          *(_DWORD *)(a1 + 184) = v28;
          goto LABEL_45;
        case 7:
          v28 = *(_DWORD *)(a1 + 184) | 0x40;
          goto LABEL_60;
      }
      break;
  }
LABEL_45:
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 188) = v7;
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 316) + 12LL)) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 196) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 200) = *(_DWORD *)(a1 + 772);
  v13 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 316) = ((unsigned __int8)*(_DWORD *)(a1 + 316) + 1) & 7;
  if ( !v13 )
  {
    v24 = *(_QWORD *)(a1 + 56);
    if ( !v24 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v24) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq(
        *(_QWORD *)(a1 + 448),
        (_DWORD)a2,
        a3,
        v24,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v4 + 2000),
        *(_DWORD *)(a1 + 436),
        3);
  }
  return v5;
}
