/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x18013B778
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1801396B4 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x18013B6B0 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013BDE0 (McTemplateU0pqpqqqqqq.c)
 *     WPP_SF_Pq @ 0x18013BFA0 (WPP_SF_Pq.c)
 */

CAudioSessionManager *__fastcall AERTAllocate(CAudioSessionManager *a1, void *a2, int a3)
{
  int v5; // eax
  __int64 v6; // rdx
  CAudioSessionManager *v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  if ( g_bSkipRTHeap )
    return (CAudioSessionManager *)operator new(0xE8uLL);
  v7 = 0LL;
  if ( a2 )
  {
    v5 = RtlAllocateMemoryBlockLookaside(a2, 232LL, &v7);
    if ( v5 < 0 )
    {
      if ( v5 == -1073741670 )
      {
        AERTAddMemoryToHeap(a2, 0x100000uLL);
        if ( (int)RtlAllocateMemoryBlockLookaside(a2, 232LL, &v7) < 0 )
        {
          a1 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
          {
            v6 = 35LL;
LABEL_15:
            WPP_SF_Pq(*((_QWORD *)a1 + 2), v6);
          }
        }
      }
      else
      {
        a1 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          v6 = 36LL;
          goto LABEL_15;
        }
      }
    }
  }
  if ( (byte_1801B8781 & 4) != 0 )
    McTemplateU0pqpqqqqqq((_DWORD)a1, (_DWORD)a2, a3, 6, (char)a2, 232, 0, 0);
  return v7;
}
