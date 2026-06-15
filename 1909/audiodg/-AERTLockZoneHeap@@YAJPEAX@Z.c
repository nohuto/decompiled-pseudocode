/*
 * XREFs of ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140040B84
 * Callers:
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140053300 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DF8C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140040FB8 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041160 (McTemplateU0pqpqqqqqq.c)
 */

__int64 __fastcall AERTLockZoneHeap(void *a1, int a2, int a3)
{
  int v4; // ebx
  int v5; // ecx

  if ( a1 )
  {
    v4 = ((__int64 (*)(void))RtlLockMemoryZone)();
    if ( v4 == -1073741663 && (int)IncreaseProcessWorkingSet(0x100000uLL) >= 0 )
      v4 = RtlLockMemoryZone(a1);
  }
  else
  {
    v4 = 0;
  }
  v5 = -1073741824;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    v5 = (int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
    }
  }
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqpqqqqqq(v5, a2, a3, 8, (char)a1, 0, 0, 0);
  return v4 | 0x10000000u;
}
