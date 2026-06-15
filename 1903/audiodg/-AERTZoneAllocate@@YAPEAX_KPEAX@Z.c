/*
 * XREFs of ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x1400147C0
 * Callers:
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005E04C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 * Callees:
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1400407BC (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041190 (McTemplateU0pqpqqqqqq.c)
 *     WPP_SF_Pq @ 0x140041350 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTZoneAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // edx
  int v5; // ecx
  __int64 v6; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v9 = 0LL;
  RtlAllocateMemoryZone(a2, a1, &v9);
  if ( !v9 )
  {
    v8 = 0x100000LL;
    if ( a1 > 0x100000 )
      v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v8);
    RtlAllocateMemoryZone(a2, a1, &v9);
    if ( !v9 )
    {
      v5 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_Pq(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, v6, a1, a2);
      }
    }
  }
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqpqqqqqq(v5, v4, v6, 6, (char)a2, a1, 0, 0);
  return v9;
}
