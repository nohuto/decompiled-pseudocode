/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x18013B8A4
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x18013BAC4 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013BDE0 (McTemplateU0pqpqqqqqq.c)
 */

void __fastcall AERTDestroyHeap(void *a1, int a2, int a3)
{
  CAudioSessionManager *v4; // rcx

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids, a1);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    if ( (RtlDestroyMemoryBlockLookaside(a1) & 0xC0000000) != 0xC0000000 )
    {
LABEL_11:
      v4 = WPP_GLOBAL_Control;
      goto LABEL_12;
    }
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
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
  if ( (byte_1801B8781 & 4) != 0 )
  {
    McTemplateU0pqpqqqqqq((_DWORD)v4, a2, a3, 4, (char)a1, 0, 0, 0);
    v4 = WPP_GLOBAL_Control;
  }
  if ( v4 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v4 + 7) & 0x40000) != 0
    && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)v4 + 2), 0x20u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
  }
}
