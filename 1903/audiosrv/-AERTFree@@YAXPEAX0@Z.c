/*
 * XREFs of ?AERTFree@@YAXPEAX0@Z @ 0x18013BE78
 * Callers:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x180139580 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013C290 (McTemplateU0pqpqqqqqq.c)
 */

void __fastcall AERTFree(void *a1, void *a2, int a3)
{
  if ( g_bSkipRTHeap )
  {
    operator delete(a1);
  }
  else
  {
    if ( a2 )
    {
      if ( a1 )
      {
        LODWORD(a1) = RtlFreeMemoryBlockLookaside(a2, a1) & 0xC0000000;
        if ( (_DWORD)a1 == -1073741824 )
        {
          LODWORD(a1) = (_DWORD)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x25u,
              (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids,
              a2);
          }
        }
      }
    }
    if ( (byte_1801B9781 & 4) != 0 )
      McTemplateU0pqpqqqqqq((_DWORD)a1, (_DWORD)a2, a3, 6, (char)a2, 0, 0, 0);
  }
}
