/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140054420
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140052CD4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140052E6C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     McTemplateU0p @ 0x140053548 (McTemplateU0p.c)
 *     WPP_SF_s @ 0x1400538B8 (WPP_SF_s.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140053DC4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pq @ 0x14005493C (McTemplateU0pq.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140060090 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessBaseEndpoint *v3; // rsi
  APO_BUFFER_FLAGS *p_u32BufferFlags; // r15
  UINT32 u32ValidFrameCount; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  unsigned __int8 v12; // r8
  __int64 v13; // rcx
  const CHAR *v14; // r8
  unsigned int v15; // edx
  struct SharedMessageQueueItem *v16; // rax
  __int64 v17; // rcx
  struct SharedMessageQueueItem *v18; // [rsp+70h] [rbp+8h] BYREF

  v3 = (CCrossProcessClientInputEndpoint *)((char *)this - 448);
  p_u32BufferFlags = &a2->u32BufferFlags;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx((_DWORD)this, (_DWORD)a2, (_DWORD)this - 448, 13, a2->u32ValidFrameCount, *p_u32BufferFlags, 0);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  if ( a3 )
    memset_0(a3, 0, sizeof(struct AE_CURRENT_POSITION));
  if ( !CCrossProcessBaseEndpoint::IsValidFlags(v3, *(unsigned int *)(*((_QWORD *)this - 47) + 164LL)) )
  {
    if ( (byte_140086281 & 4) != 0 )
      McTemplateU0p(v10, v9, (__int64)v3);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 164LL), 0xFFFFFFFE);
    goto LABEL_9;
  }
  if ( !u32ValidFrameCount )
  {
LABEL_9:
    _InterlockedExchange((volatile __int32 *)this - 72, 1);
    a2->pBuffer = *((_QWORD *)this - 42);
    a2->u32BufferFlags = BUFFER_SILENT;
    goto LABEL_10;
  }
  if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(v3, &v18) )
  {
    AEWMILOG_GLITCH(v11, v3, v12, 2u, 0LL, 0LL, 0LL, 0LL);
    if ( (byte_140086281 & 1) != 0 )
      McTemplateU0pq(v13, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_4f0ed37fbc483b3865e07d1aeee510ae_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v14 = "CpGlitchEvent::CLIENT_INPUT_NO_MESSAGES";
    v15 = 1;
LABEL_22:
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, v15, v14);
    goto LABEL_9;
  }
  v16 = v18;
  if ( *((_DWORD *)v18 + 14) != u32ValidFrameCount )
  {
    AEWMILOG_GLITCH(v11, v3, v12, 2u, 1uLL, 1uLL, 1uLL, 1uLL);
    if ( (byte_140086281 & 1) != 0 )
      McTemplateU0pq(v17, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        &WPP_4f0ed37fbc483b3865e07d1aeee510ae_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v14 = "CpGlitchEvent::CLIENT_INPUT_SIZE_MISMATCH";
    v15 = 2;
    goto LABEL_22;
  }
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v18 + 1);
    *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v16 + 2);
    *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v16 + 6);
  }
  if ( *((_DWORD *)v16 + 2) == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    goto LABEL_9;
  }
  *p_u32BufferFlags = BUFFER_VALID;
  a2->pBuffer = *((_QWORD *)this - 47) + *((unsigned int *)v16 + 1);
  *((_DWORD *)this + 4) = 0;
LABEL_10:
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(a2->u32ValidFrameCount, v9, (_DWORD)v3, 14, a2->u32ValidFrameCount, 0, *p_u32BufferFlags);
}
