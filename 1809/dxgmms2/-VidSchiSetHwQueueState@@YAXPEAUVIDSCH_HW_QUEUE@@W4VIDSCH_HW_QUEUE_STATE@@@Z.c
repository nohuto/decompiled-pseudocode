/*
 * XREFs of ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C003560C
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034BD8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034EB8 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiSetHwQueueState(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  void (__fastcall *v8)(_QWORD); // rax
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD *v11; // rax

  v4 = *(unsigned int *)(a1 + 116);
  if ( (_DWORD)v4 != a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
    v6 = *(_QWORD *)(v5 + 24);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v7 = *(_DWORD *)(v5 + 1704);
        if ( v7 != -1 && *(_DWORD *)(v6 + 60) != -1 )
        {
          *(_DWORD *)(v5 + 1704) = v7 + 1;
          ++*(_DWORD *)(v6 + 60);
          if ( *(_DWORD *)(v5 + 1704) != 1 || *(_DWORD *)(v5 + 11192) == -1 )
            goto LABEL_5;
          v8 = *(void (__fastcall **)(_QWORD))(v6 + 2456);
          goto LABEL_19;
        }
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v4);
        v9[7] = 0LL;
        v9[3] = 281LL;
        v9[4] = 28672LL;
        v9[5] = a1;
        v9[6] = v5;
        WdLogEvent5_WdCriticalError(v9);
        __debugbreak();
      }
      else if ( a2 != 2 )
      {
LABEL_5:
        *(_DWORD *)(a1 + 116) = a2;
        return;
      }
    }
    if ( (_DWORD)v4 != 1 )
      goto LABEL_5;
    v10 = *(_DWORD *)(v5 + 1704);
    if ( !v10 || !*(_DWORD *)(v6 + 60) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v4);
      v11[7] = 0LL;
      v11[3] = 281LL;
      v11[4] = 4096LL;
      v11[5] = a1;
      v11[6] = v5;
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
      JUMPOUT(0x1C003577ALL);
    }
    *(_DWORD *)(v5 + 1704) = v10 - 1;
    --*(_DWORD *)(v6 + 60);
    if ( *(_DWORD *)(v5 + 1704) || *(_DWORD *)(v5 + 11192) == -1 )
      goto LABEL_5;
    v8 = *(void (__fastcall **)(_QWORD))(v6 + 2464);
LABEL_19:
    if ( v8 )
      v8(*(_QWORD *)(v6 + 2496));
    goto LABEL_5;
  }
}
