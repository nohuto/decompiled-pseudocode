/*
 * XREFs of ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x18014D0AC
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801104B4 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801109F4 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

void __fastcall AEWMILOG_POSITION(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  _WORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  char v11; // [rsp+24h] [rbp-5Ch]
  char v12; // [rsp+25h] [rbp-5Bh]
  __int128 v13; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+4Ch] [rbp-34h]
  void *v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  unsigned __int64 v18; // [rsp+68h] [rbp-18h]
  unsigned __int64 v19; // [rsp+70h] [rbp-10h]
  unsigned __int64 v20; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(v10, 0, 0x40uLL);
    v16 = 0;
    v17 = 0LL;
    v10[0] = 96;
    v18 = a6;
    v19 = a7;
    v20 = a8;
    v14 = 0x20000;
    v13 = AEWMIGUID_POSITION;
    v12 = 5;
    v11 = a4;
    v15 = a2;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v10);
  }
}
