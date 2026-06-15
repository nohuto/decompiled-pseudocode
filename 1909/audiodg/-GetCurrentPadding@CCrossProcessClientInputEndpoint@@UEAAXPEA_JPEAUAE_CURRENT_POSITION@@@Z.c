/*
 * XREFs of ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140054240
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140052E6C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     McTemplateU0pqxxxx @ 0x140053638 (McTemplateU0pqxxxx.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetCurrentPadding(
        CCrossProcessClientInputEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v5; // r8
  struct SharedMessageQueueItem *v6; // rcx
  double v7; // xmm0_8
  struct SharedMessageQueueItem *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessClientInputEndpoint *)((char *)this - 8), &v8) )
  {
    v6 = v8;
    v7 = *((float *)this + 37);
    *((_DWORD *)this + 115) = *((_DWORD *)v8 + 14);
    v5 = (unsigned int)(int)((double)*((int *)v6 + 14) * 10000000.0 / v7 + 0.5);
  }
  else
  {
    *((_DWORD *)this + 115) = 0;
    v5 = 0LL;
  }
  *a2 = v5;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxxx(
      **((unsigned int **)this + 8),
      *(unsigned int *)(*((_QWORD *)this + 8) + 4LL),
      (__int64)this - 8,
      3,
      **((_DWORD **)this + 8),
      *(_DWORD *)(*((_QWORD *)this + 8) + 4LL),
      v5,
      0);
}
