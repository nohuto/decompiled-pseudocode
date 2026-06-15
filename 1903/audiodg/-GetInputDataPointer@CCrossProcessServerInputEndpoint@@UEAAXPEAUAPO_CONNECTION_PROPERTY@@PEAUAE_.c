/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002920
 * Callers:
 *     <none>
 * Callees:
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x1400027F0 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140002C5C (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x1400036C0 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     memcpy_0 @ 0x140017D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     McTemplateU0p @ 0x140053638 (McTemplateU0p.c)
 *     WPP_SF_s @ 0x1400539A8 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140053EB4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx @ 0x140054A98 (McTemplateU0pqxxx.c)
 *     McTemplateU0pqqqq @ 0x140055C8C (McTemplateU0pqqqq.c)
 *     WPP_SF_DDDD @ 0x140055DCC (WPP_SF_DDDD.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140056FD8 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140060090 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  struct AE_CURRENT_POSITION *v3; // r11
  unsigned int v6; // r12d
  UINT32 u32ValidFrameCount; // esi
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned __int32 v10; // eax
  int v11; // r13d
  int v12; // r14d
  CCrossProcessServerInputEndpoint *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // r13d
  unsigned int v22; // esi
  APO_BUFFER_FLAGS v23; // eax
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned __int8 *pBuffer; // r15
  unsigned int v27; // r13d
  unsigned int v28; // esi
  int v29; // edx
  int v30; // r11d
  int v31; // r9d
  unsigned int v32; // eax
  int v33; // r8d
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  int v36; // edx
  int v37; // ecx
  unsigned int v38; // ecx
  int v39; // ecx
  void *v40; // rcx
  const void *v41; // rdx
  unsigned int v42; // esi
  int v43; // edx
  UINT_PTR v44; // rax
  int v45; // r9d
  float (__fastcall *v46)(unsigned __int8 *); // rax
  void (__fastcall *v47)(unsigned __int8 *, float); // rcx
  void (__fastcall *v48)(unsigned __int8 *, float); // rcx
  float (__fastcall *v49)(unsigned __int8 *); // rax
  int v50; // [rsp+40h] [rbp-68h]
  CCrossProcessServerInputEndpoint *v51; // [rsp+48h] [rbp-60h]
  size_t Size; // [rsp+50h] [rbp-58h]
  UINT32 v53; // [rsp+B8h] [rbp+10h]
  unsigned int v55; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v6 = 0;
  if ( (byte_140087281 & 4) != 0 )
  {
    McTemplateU0pqxxx(
      a2->u32ValidFrameCount,
      (_DWORD)a2,
      (_DWORD)this - 456,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
    v3 = a3;
  }
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v8 = 0;
  v9 = *((_QWORD *)this - 48);
  v53 = u32ValidFrameCount;
  *((_DWORD *)this + 5) = u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 164), 0, 0);
  v11 = *((_DWORD *)this + 21);
  v50 = v11;
  v12 = v10 & 1;
  if ( (v10 & 1) == 0
    && (v13 = (CCrossProcessServerInputEndpoint *)((char *)this - 456),
        v51 = (CCrossProcessServerInputEndpoint *)((char *)this - 456),
        (*((_BYTE *)this - 280) & 1) == 0)
    || (v51 = (CCrossProcessServerInputEndpoint *)((char *)this - 456),
        v13 = (CCrossProcessServerInputEndpoint *)((char *)this - 456),
        !u32ValidFrameCount) )
  {
    if ( (byte_140087281 & 4) != 0 )
    {
      McTemplateU0pqxxx((_DWORD)this - 456, v10, (_DWORD)v13, 23, v10, u32ValidFrameCount, 101);
      v13 = v51;
    }
    if ( v11 == v12 || v12 )
      goto LABEL_23;
    CCrossProcessServerInputEndpoint::FillRampBuffer(v13);
    if ( u32ValidFrameCount )
    {
      v31 = *((_DWORD *)this - 91);
      if ( v31 )
      {
        v32 = *((_DWORD *)this - 88);
        v33 = *((_DWORD *)this - 89);
        v34 = *((_QWORD *)this - 43);
        if ( v32 > 0x18 )
        {
LABEL_36:
          if ( *((_DWORD *)this - 87) == 3 )
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              (_DWORD)this + 88,
              v34,
              u32ValidFrameCount,
              v31,
              v33,
              (__int64)F32InTOF32,
              (__int64)F32OutTOF32);
          else
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              (_DWORD)this + 88,
              v34,
              u32ValidFrameCount,
              v31,
              v33,
              (__int64)I32TOF32,
              (__int64)F32TOI32);
          goto LABEL_38;
        }
        switch ( v32 )
        {
          case 8u:
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              (_DWORD)this + 88,
              v34,
              u32ValidFrameCount,
              v31,
              v33,
              (__int64)UI8TOF32,
              (__int64)F32TOUI8);
            break;
          case 0x10u:
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              (_DWORD)this + 88,
              v34,
              u32ValidFrameCount,
              v31,
              v33,
              (__int64)I16TOF32,
              (__int64)F32TOI16);
            break;
          case 0x14u:
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              (_DWORD)this + 88,
              v34,
              u32ValidFrameCount,
              v31,
              v33,
              (__int64)I20TOF32,
              (__int64)F32TOI20);
            break;
          case 0x18u:
            v48 = F32TOI24W;
            if ( v33 != 32 )
              v48 = F32TOI24;
            v49 = I24WTOF32;
            if ( v33 != 32 )
              v49 = I24TOF32;
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              (_DWORD)this + 88,
              v34,
              u32ValidFrameCount,
              v31,
              v33,
              (__int64)v49,
              (__int64)v48);
            break;
          default:
            goto LABEL_36;
        }
      }
    }
LABEL_38:
    v23 = BUFFER_VALID;
LABEL_24:
    a2->u32BufferFlags = v23;
    a2->pBuffer = *((_QWORD *)this - 43);
    v24 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL);
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL),
              v24 & 0xFFFFFFFD,
              v24);
    }
    while ( v25 != v24 );
    goto LABEL_17;
  }
  v14 = *((_QWORD *)this - 48);
  v15 = *(_QWORD *)(v14 + 16);
  v16 = *(_QWORD *)(v14 + 24);
  if ( v15 < 0 )
  {
    if ( (byte_140087281 & 4) != 0 )
    {
      McTemplateU0p(v14, v10, v13);
      v13 = (CCrossProcessServerInputEndpoint *)((char *)this - 456);
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
      v13 = (CCrossProcessServerInputEndpoint *)((char *)this - 456);
    }
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v13 + 9) + 164LL), 0xFFFFFFFE);
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_59;
    }
LABEL_58:
    WPP_SF_D(v35[2], 33LL, &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, 0LL);
LABEL_59:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6B5u, -2147467259);
    if ( (byte_140087281 & 4) != 0 )
      McTemplateU0pqxxx(v37, v36, (_DWORD)v51, 23, v15, v16, 102);
    v8 = 0;
    goto LABEL_23;
  }
  if ( v16 < 0 )
  {
    if ( (byte_140087281 & 4) != 0 )
    {
      McTemplateU0p(v14, v10, v13);
      v13 = (CCrossProcessServerInputEndpoint *)((char *)this - 456);
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
      v13 = (CCrossProcessServerInputEndpoint *)((char *)this - 456);
    }
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v13 + 9) + 164LL), 0xFFFFFFFE);
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  v17 = *((unsigned int *)this - 76);
  v18 = *(_DWORD *)(*((_QWORD *)this - 47) + 152LL);
  if ( v17 == 76800 )
    v19 = v15 % 76800;
  else
    v19 = v15 % v17;
  v55 = v19 + v18;
  if ( v17 == 76800 )
    v20 = v16 % 76800;
  else
    v20 = v16 % v17;
  v21 = v20 + v18;
  v6 = v15 - v16;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 176), 0, 0) )
  {
    v38 = a2->u32ValidFrameCount;
    if ( v38 >= v6 / *((_DWORD *)this - 92) )
      v38 = v6 / *((_DWORD *)this - 92);
    a2->u32ValidFrameCount = v38;
    *((_DWORD *)this + 5) = v38;
    v53 = v38;
  }
  (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v13 + 80LL))(
    v13,
    v3,
    v16);
  v8 = v53 * *((_DWORD *)this - 92);
  *((_DWORD *)this + 20) = 0;
  if ( v8 <= v6 )
  {
    v22 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL) - v21;
    if ( v8 > v22 )
    {
      memcpy_0(*((void **)this - 43), (const void *)(*((_QWORD *)this - 48) + v21), v22);
      memcpy_0(
        (void *)(v22 + *((_QWORD *)this - 43)),
        (const void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 152LL)),
        v8 - v22);
      a2->pBuffer = *((_QWORD *)this - 43);
      *((_DWORD *)this + 4) = 1;
    }
    else
    {
      a2->pBuffer = v21 + *((_QWORD *)this - 48);
      *((_DWORD *)this + 4) = 0;
    }
    goto LABEL_15;
  }
  Size = v8 - v6;
  AEWMILOG_GLITCH(v55, v51, v8 - v6, 2u, v55, v21, *((unsigned int *)this - 76), Size);
  if ( (byte_140087281 & 1) != 0 )
    McTemplateU0pqqqq(
      v39,
      (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
      (_DWORD)v51,
      v55,
      v21,
      *((_DWORD *)this - 76),
      Size);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_DDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_43cde05969da3960aebe4417d768cccb_Traceguids,
      v55,
      v21,
      v8,
      v6);
  }
  if ( v15 > 0 )
    CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 5LL, "CpGlitchEvent::SERVER_INPUT_STARVATION");
  if ( !v6 )
  {
    *((_DWORD *)this + 20) = v8;
LABEL_23:
    v23 = BUFFER_SILENT;
    goto LABEL_24;
  }
  v40 = (void *)*((_QWORD *)this - 43);
  v41 = (const void *)(*((_QWORD *)this - 48) + v21);
  v42 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL) - v21;
  if ( v6 <= v42 )
  {
    memcpy_0(v40, v41, v6);
  }
  else
  {
    memcpy_0(v40, v41, v42);
    memcpy_0(
      (void *)(v42 + *((_QWORD *)this - 43)),
      (const void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 152LL)),
      v6 - v42);
  }
  v43 = 128;
  if ( *((_DWORD *)this - 88) != 8 )
    v43 = 0;
  memset_0((void *)(*((_QWORD *)this - 43) + v6), v43, Size);
  v44 = *((_QWORD *)this - 43);
  *((_DWORD *)this + 20) = Size;
  a2->pBuffer = v44;
  *((_DWORD *)this + 4) = 1;
LABEL_15:
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) != 0 )
    goto LABEL_17;
  if ( v50 == v12 )
    goto LABEL_17;
  if ( !v12 )
    goto LABEL_17;
  pBuffer = (unsigned __int8 *)a2->pBuffer;
  v27 = *((_DWORD *)this - 87);
  v28 = *((_DWORD *)this - 88);
  if ( (unsigned int)CheckSampleForSilence(pBuffer, *((_DWORD *)this - 91), v28, v27) )
    goto LABEL_17;
  v45 = *((_DWORD *)this - 89);
  if ( v28 > 0x18 )
    goto LABEL_95;
  switch ( v28 )
  {
    case 8u:
      v46 = UI8TOF32;
      v47 = F32TOUI8;
      break;
    case 0x10u:
      v46 = I16TOF32;
      v47 = F32TOI16;
      break;
    case 0x14u:
      v46 = I20TOF32;
      v47 = F32TOI20;
      break;
    case 0x18u:
      v46 = I24WTOF32;
      if ( v45 != 32 )
        v46 = I24TOF32;
      v47 = F32TOI24W;
      if ( v45 != 32 )
        v47 = F32TOI24;
      break;
    default:
LABEL_95:
      v46 = F32InTOF32;
      if ( v27 != 3 )
        v46 = I32TOF32;
      v47 = F32OutTOF32;
      if ( v27 != 3 )
        v47 = F32TOI32;
      break;
  }
  ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
    (_DWORD)this + 88,
    (_DWORD)pBuffer,
    v30,
    v29,
    v45,
    (__int64)v46,
    (__int64)v47);
LABEL_17:
  *((_DWORD *)this + 21) = v12;
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqxxx(v6, v8, (_DWORD)this - 456, 6, v8, v6, *((_DWORD *)this + 4));
}
