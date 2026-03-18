/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013DC8
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C002FDD8 (VidSchiSelectContext.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013BD8 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0013E94 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0013F60 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqxxxx @ 0x1C002CFC4 (McTemplateK0pqxxxx.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // r14
  int v3; // ebp
  LARGE_INTEGER v4; // rdx
  LARGE_INTEGER v5; // rsi
  LARGE_INTEGER v6; // r8
  __int64 v7; // rax
  unsigned int refreshed; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  union _LARGE_INTEGER v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = ~((1 << (*(_DWORD *)(v1 + 184) + 1)) - 1);
  v5 = KeQueryPerformanceCounter(&v11);
  v7 = *((_QWORD *)a1 + 248);
  if ( (v3 & *((_DWORD *)a1 + 439)) != 0 )
  {
    if ( v7 )
    {
      v9 = v5.QuadPart - v7;
      v10 = *((_QWORD *)a1 + 249);
      if ( v9 < v10 )
      {
        *((_QWORD *)a1 + 248) = 0LL;
        *((_QWORD *)a1 + 249) = v10 - v9;
      }
      else
      {
        VidSchiStopNodeYield((unsigned __int64)a1, v4.QuadPart, v6.QuadPart);
      }
    }
    if ( *((_BYTE *)a1 + 2008) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx(
        *((_DWORD *)a1 + 439) & v3,
        v4.LowPart,
        v6.LowPart,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1756) & v3,
        0,
        0);
  }
  else if ( !v7 )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v5.QuadPart,
      (union _LARGE_INTEGER)v11.QuadPart,
      refreshed);
  }
}
