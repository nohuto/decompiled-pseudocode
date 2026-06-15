/*
 * XREFs of ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1801480D0
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102774 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102CEC (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

void __fastcall AEWMILOG_GLITCH(__int64 a1, void *a2, __int64 a3, char a4, unsigned __int64 a5, unsigned __int64 a6)
{
  _WORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  char v9; // [rsp+24h] [rbp-5Ch]
  char v10; // [rsp+25h] [rbp-5Bh]
  __int128 v11; // [rsp+38h] [rbp-48h]
  int v12; // [rsp+4Ch] [rbp-34h]
  void *v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  unsigned __int64 v15; // [rsp+60h] [rbp-20h]
  unsigned __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(v8, 0, 0x40uLL);
    v12 = 0x20000;
    v14 = 0;
    v8[0] = 96;
    v15 = a5;
    v17 = 0LL;
    v18 = 0LL;
    v16 = a6;
    v11 = AEWMIGUID_GLITCH;
    v10 = 5;
    v9 = a4;
    v13 = a2;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v8);
  }
}
