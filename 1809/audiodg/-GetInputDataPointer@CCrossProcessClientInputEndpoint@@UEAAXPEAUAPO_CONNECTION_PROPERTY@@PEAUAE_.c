/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400565E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400556C4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140055810 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     WPP_SF_s @ 0x140055FD0 (WPP_SF_s.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140056324 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pq @ 0x140056A94 (McTemplateU0pq.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400621FC (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140062318 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v3; // rsi
  unsigned __int8 v7; // r8
  UINT32 u32ValidFrameCount; // r12d
  APO_BUFFER_FLAGS u32BufferFlags; // ebp
  unsigned int v10; // ecx
  unsigned __int8 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rcx
  const CHAR *v14; // r8
  unsigned int v15; // edx
  struct SharedMessageQueueItem *v16; // rax
  __int64 v17; // rcx
  struct SharedMessageQueueItem *v18; // [rsp+70h] [rbp+8h] BYREF

  v3 = (char *)this - 448;
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 448,
    (unsigned __int8)a3,
    0xDu,
    a2->u32ValidFrameCount,
    a2->u32BufferFlags,
    0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  u32BufferFlags = BUFFER_SILENT;
  *((_DWORD *)this + 4) = 2;
  if ( a3 )
  {
    memset_0(a3, 0, sizeof(struct AE_CURRENT_POSITION));
    a3->Flag = POSITION_INVALID;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidFlags(
          (CCrossProcessBaseEndpoint *)v3,
          *(_DWORD *)(*((_QWORD *)this - 48) + 164LL),
          v7) )
  {
    AEWMILOG_SECURITY(v10, v3, v11);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
    goto LABEL_5;
  }
  if ( !u32ValidFrameCount )
    goto LABEL_5;
  if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessBaseEndpoint *)v3, &v18) )
  {
    AEWMILOG_GLITCH(v12, v3, v11, 2u, 0LL, 0LL, 0LL, 0LL);
    if ( (byte_140089301 & 1) != 0 )
      McTemplateU0pq(v13, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_7c5ececd2ea730d065da838b30948055_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v14 = "CpGlitchEvent::CLIENT_INPUT_NO_MESSAGES";
    v15 = 1;
LABEL_16:
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, v15, v14);
    goto LABEL_5;
  }
  v16 = v18;
  if ( *((_DWORD *)v18 + 14) != u32ValidFrameCount )
  {
    AEWMILOG_GLITCH(v12, v3, v11, 2u, 1uLL, 1uLL, 1uLL, 1uLL);
    if ( (byte_140089301 & 1) != 0 )
      McTemplateU0pq(v17, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        &WPP_7c5ececd2ea730d065da838b30948055_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v14 = "CpGlitchEvent::CLIENT_INPUT_SIZE_MISMATCH";
    v15 = 2;
    goto LABEL_16;
  }
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v18 + 1);
    *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v16 + 2);
    *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v16 + 6);
  }
  if ( *((_DWORD *)v16 + 2) != 2 )
  {
    a2->u32BufferFlags = BUFFER_VALID;
    a2->pBuffer = *((_QWORD *)this - 48) + *((unsigned int *)v16 + 1);
    *((_DWORD *)this + 4) = 0;
    u32BufferFlags = a2->u32BufferFlags;
    goto LABEL_6;
  }
  *((_DWORD *)this + 4) = 0;
LABEL_5:
  _InterlockedExchange((volatile __int32 *)this - 72, 1);
  a2->pBuffer = *((_QWORD *)this - 43);
  a2->u32BufferFlags = BUFFER_SILENT;
LABEL_6:
  AEWMILOG_DATA(a2->u32ValidFrameCount, v3, v11, 0xEu, a2->u32ValidFrameCount, 0LL, u32BufferFlags);
}
