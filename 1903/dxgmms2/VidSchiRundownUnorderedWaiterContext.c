/*
 * XREFs of VidSchiRundownUnorderedWaiterContext @ 0x1C00306C4
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0010FD4 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011350 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0030754 (VidSchiRundownUnorderedWaiterDevice.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E8D0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0030FF0 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  __int64 v7; // rdx
  int v8; // eax

  v3 = (_QWORD *)(a2 + 656);
  v5 = *(_QWORD **)(a2 + 656);
  while ( v5 != v3 )
  {
    v7 = (__int64)(v5 - 4);
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v7 + 48) == 4 )
    {
      v8 = *(_DWORD *)(v7 + 272);
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 4) != 0 )
        {
          LOBYTE(a3) = 1;
          VidSchiUnblockUnorderedWaitQueuePacket(a1, v7, a3);
        }
        else if ( (v8 & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL) + 2428LL) & 1) != 0 )
        {
          LOBYTE(a3) = 1;
          VidSchiUnwaitWaitQueuePacket(a1, v7, a3);
        }
      }
    }
  }
}
