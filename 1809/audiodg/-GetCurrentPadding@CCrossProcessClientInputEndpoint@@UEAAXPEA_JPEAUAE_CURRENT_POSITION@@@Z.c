/*
 * XREFs of ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140056420
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140055810 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x140062150 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetCurrentPadding(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 v5; // r9
  struct SharedMessageQueueItem *v6; // rcx
  double v7; // xmm0_8
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]
  struct SharedMessageQueueItem *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessClientInputEndpoint *)((char *)this - 8), &v9) )
  {
    v6 = v9;
    v7 = *((float *)this + 37);
    *((_DWORD *)this + 115) = *((_DWORD *)v9 + 14);
    v5 = (unsigned int)(int)((double)*((int *)v6 + 14) * 10000000.0 / v7 + 0.5);
  }
  else
  {
    *((_DWORD *)this + 115) = 0;
    v5 = 0LL;
  }
  *a2 = v5;
  v8 = *(unsigned int *)(*((_QWORD *)this + 7) + 4LL);
  AEWMILOG_POSITION(**((_DWORD **)this + 7), (char *)this - 8, v8, 3u, **((unsigned int **)this + 7), v8, v5, 0LL);
}
