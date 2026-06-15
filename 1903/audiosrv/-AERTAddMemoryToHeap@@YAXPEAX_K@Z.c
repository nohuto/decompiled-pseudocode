/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x18013BB60
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x18013BC28 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x18013C0E8 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013C290 (McTemplateU0pqpqqqqqq.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, unsigned __int64 a2)
{
  int v4; // edx
  int v5; // ebx
  int v6; // r8d
  int v7; // ecx

  v5 = ((__int64 (*)(void))RtlExtendMemoryBlockLookaside)();
  if ( v5 == -1073741663 && (int)IncreaseProcessWorkingSet(a2) >= 0 )
    v5 = RtlExtendMemoryBlockLookaside(a1, a2);
  v7 = -1073741824;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    v7 = (int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids,
        a1);
    }
  }
  if ( (byte_1801B9781 & 4) != 0 )
    McTemplateU0pqpqqqqqq(v7, v4, v6, 5, (char)a1, a2, 0, 0);
}
