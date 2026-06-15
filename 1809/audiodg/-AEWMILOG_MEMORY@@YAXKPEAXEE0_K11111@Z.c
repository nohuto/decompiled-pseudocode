/*
 * XREFs of ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x140062008
 * Callers:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140012328 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x14001340C (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1400134C0 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14004387C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140043940 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140043A54 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140043B18 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140043C80 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140043D98 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

void __fastcall AEWMILOG_MEMORY(
        __int64 a1,
        void *a2,
        UCHAR a3,
        UCHAR a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        unsigned __int64 a11)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-61h] BYREF
  __int64 v14; // [rsp+50h] [rbp-31h]
  int v15; // [rsp+58h] [rbp-29h]
  void *v16; // [rsp+60h] [rbp-21h]
  unsigned __int64 v17; // [rsp+68h] [rbp-19h]
  unsigned __int64 v18; // [rsp+70h] [rbp-11h]
  unsigned __int64 v19; // [rsp+78h] [rbp-9h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  unsigned __int64 v22; // [rsp+90h] [rbp+Fh]

  if ( g_u32AEWMILogLevel >= a3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.UserTime = 0x20000;
    v14 = 0LL;
    EventTrace.Size = 120;
    v16 = a5;
    v17 = a6;
    v19 = a8;
    v18 = a7;
    v15 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v22 = a11;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    EventTrace.Class.Level = a3;
    EventTrace.Class.Type = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
