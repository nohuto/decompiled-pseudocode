/*
 * XREFs of ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z @ 0x140054DA0
 * Callers:
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140055088 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140055810 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 * Callees:
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentQueue(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem **a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // r9d
  unsigned int *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax

  v9 = (unsigned int *)*((_QWORD *)this + 8);
  if ( v9[45] == -1 )
  {
    v16 = *v9;
    v17 = *((_QWORD *)this + 8);
    *a3 = v16;
    v18 = *(_DWORD *)(v17 + 4);
    v19 = *((_QWORD *)this + 9);
    *a4 = v18;
    *a5 = *(_DWORD *)(v19 + 132);
    *a2 = (struct SharedMessageQueueItem *)*((_QWORD *)this + 14);
  }
  else
  {
    v10 = v9[46];
    v11 = *((_QWORD *)this + 8);
    *a3 = v10;
    v12 = *(_DWORD *)(v11 + 188);
    *a4 = v12;
    if ( v10 == v12
      || !CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v10, *(_DWORD *)(*((_QWORD *)this + 9) + 140LL)) )
    {
      *a2 = (struct SharedMessageQueueItem *)*((_QWORD *)this + 14);
      v13 = (unsigned int *)*((_QWORD *)this + 8);
      *a3 = *v13;
      v14 = v13[1];
      v15 = *((_QWORD *)this + 9);
      *a4 = v14;
      *a5 = *(_DWORD *)(v15 + 132);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 8) + 180LL), -1);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 8) + 184LL), 0);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 8) + 188LL), 0);
    }
    else
    {
      *a2 = (struct SharedMessageQueueItem *)*((_QWORD *)this + 15);
      *a5 = *(_DWORD *)(*((_QWORD *)this + 9) + 140LL);
    }
  }
}
