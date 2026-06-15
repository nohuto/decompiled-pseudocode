/*
 * XREFs of ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140040EC0
 * Callers:
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140053520 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140032A98 (WPP_SF_q.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041190 (McTemplateU0pqpqqqqqq.c)
 */

__int64 __fastcall AERTUnlockZoneHeap(void *a1, int a2, int a3)
{
  _UNKNOWN **v4; // rcx
  int v5; // ebx

  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids, a1);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( !a1 )
  {
    v5 = 0;
    goto LABEL_13;
  }
  v5 = RtlUnlockMemoryZone(a1);
  if ( (v5 & 0xC0000000) != 0xC0000000 )
    goto LABEL_12;
  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
LABEL_12:
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
LABEL_13:
  if ( (byte_140087281 & 4) != 0 )
  {
    McTemplateU0pqpqqqqqq((_DWORD)v4, a2, a3, 9, (char)a1, 0, 0, 0);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_((__int64)v4[2], 0x3Au, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
  return v5 | 0x10000000u;
}
