/*
 * XREFs of VidSchiResetEngines @ 0x1C00CA08C
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C007AA10 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003E48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchIsTDRPending @ 0x1C00094D0 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00109A8 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C002E11C (VidSchiCompletePreemption.c)
 *     VidSchiResetEngine @ 0x1C002FB6C (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x1C00393BC (VidSchiResetHwEngine.c)
 */

char __fastcall VidSchiResetEngines(__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // di
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  unsigned int v12; // eax
  __int64 *v13; // r14
  __int64 v14; // r14
  char v15; // al
  int v16; // esi
  unsigned __int64 v17; // r14
  unsigned int v18; // eax
  __int64 *v19; // rcx
  unsigned int v20; // [rsp+60h] [rbp+18h]

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1) )
    return 1;
  if ( g_TdrConfig[0] == 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 2416) = a1;
  v9 = 0;
  v10 = 0LL;
  v20 = v8;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = a2;
      if ( (a2 & 1) != 0 )
      {
        v12 = VidSchiDriverNodeEngineToSchedulerNode(v5, v9, v8);
        v13 = *(__int64 **)(v5 + 616);
        if ( v12 < *(_DWORD *)(v5 + 688) )
          v13 += v12;
        v14 = *v13;
        if ( (*(_DWORD *)(v14 + 12) & 2) != 0 )
          v15 = VidSchiResetHwEngine(v14, v6);
        else
          v15 = VidSchiResetEngine(v14, v6);
        v7 = v15;
        if ( !v15 )
        {
LABEL_17:
          v8 = v20;
          break;
        }
        if ( (*(_DWORD *)(v14 + 12) & 2) == 0 )
          _bittestandset64((__int64 *)&v10, v9);
        v8 = v20;
      }
      ++v9;
      a2 >>= 1;
      if ( v11 < 2 )
        goto LABEL_17;
    }
  }
  *(_QWORD *)(v5 + 2416) = 0LL;
  if ( v7 )
  {
    v16 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v17 = v10;
        if ( (v10 & 1) != 0 )
        {
          v18 = VidSchiDriverNodeEngineToSchedulerNode(v5, v16, v8);
          v19 = *(__int64 **)(v5 + 616);
          if ( v18 < *(_DWORD *)(v5 + 688) )
            v19 += v18;
          VidSchiCompletePreemption(*v19);
          if ( VidSchIsTDRPending(v5) )
            break;
        }
        ++v16;
        v10 >>= 1;
        if ( v17 < 2 )
          return v7;
        v8 = v20;
      }
      return 0;
    }
  }
  return v7;
}
