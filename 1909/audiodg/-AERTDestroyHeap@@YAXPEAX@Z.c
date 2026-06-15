/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14004093C
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140040D1C (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140032A48 (WPP_SF_q.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041160 (McTemplateU0pqpqqqqqq.c)
 */

void __fastcall AERTDestroyHeap(void *a1, int a2, int a3)
{
  _UNKNOWN **v4; // rcx

  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids, a1);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    if ( (RtlDestroyMemoryBlockLookaside(a1) & 0xC0000000) != 0xC0000000 )
    {
LABEL_11:
      v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
      goto LABEL_12;
    }
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids,
        a1);
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( (byte_140086281 & 4) != 0 )
  {
    McTemplateU0pqpqqqqqq((_DWORD)v4, a2, a3, 4, (char)a1, 0, 0, 0);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_((__int64)v4[2], 0x20u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
}
