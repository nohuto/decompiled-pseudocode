/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14004387C
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000ADF0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140019F10 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140043D98 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x140062008 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, unsigned __int64 a2)
{
  void *v4; // rdx
  int v5; // ebx
  unsigned int v6; // ecx
  unsigned __int64 v7; // [rsp+40h] [rbp-28h]
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v5 = ((__int64 (*)(void))RtlExtendMemoryBlockLookaside)();
  if ( v5 == -1073741663 && (int)IncreaseProcessWorkingSet(a2) >= 0 )
    v5 = RtlExtendMemoryBlockLookaside(a1, a2);
  v6 = -1073741824;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    v6 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_c553bd3a27e539e4ab650ec0a4fc27b6_Traceguids,
        a1);
    }
  }
  AEWMILOG_MEMORY(v6, v4, 5u, 5u, a1, a2, 0LL, 0LL, v7, v8, v5);
}
