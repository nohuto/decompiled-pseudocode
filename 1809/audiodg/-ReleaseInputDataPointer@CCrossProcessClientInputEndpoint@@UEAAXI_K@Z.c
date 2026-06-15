/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140056960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140055088 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400556C4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     WPP_SF_s @ 0x140055FD0 (WPP_SF_s.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400621FC (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  char *v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int8 v7; // r8
  unsigned int v8; // ecx
  unsigned __int8 v9; // r8
  void *v10; // rcx
  _BYTE v11[64]; // [rsp+40h] [rbp-48h] BYREF

  v3 = (char *)this - 448;
  v4 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 448, a3, 0xFu, a2, 0LL, 0LL);
  v6 = *((_QWORD *)this - 48);
  *((_DWORD *)this + 5) = 0;
  if ( CCrossProcessBaseEndpoint::IsValidFlags((CCrossProcessBaseEndpoint *)v3, *(_DWORD *)(v6 + 164), v7) )
  {
    if ( !*((_DWORD *)this + 4) )
      v8 = _InterlockedExchangeAdd64(
             (volatile signed __int64 *)(*((_QWORD *)this - 48) + 24LL),
             (unsigned int)(v4 * *((_DWORD *)this - 92)));
  }
  else
  {
    AEWMILOG_SECURITY(v8, v3, v9);
    v8 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_7c5ececd2ea730d065da838b30948055_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
  }
  if ( (_DWORD)v4 )
    CCrossProcessBaseEndpoint::GetNextTimestampMessage((volatile __int32 **)v3, (struct SharedMessageQueueItem *)v11);
  AEWMILOG_DATA(v8, v3, v9, 0x10u, v4, 0LL, *((int *)this + 4));
  v10 = (void *)*((_QWORD *)this - 3);
  if ( v10 )
    SetEvent(v10);
  *((_DWORD *)this + 4) = 3;
}
