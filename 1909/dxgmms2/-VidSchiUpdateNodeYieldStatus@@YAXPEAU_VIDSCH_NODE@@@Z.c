/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0014954
 * Callers:
 *     VidSchiSelectContext @ 0x1C00085C0 (VidSchiSelectContext.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013D30 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0014A08 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0014AD4 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqxxxx @ 0x1C002D6D8 (McTemplateK0pqxxxx.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbp
  int v3; // ecx
  int v4; // esi
  LARGE_INTEGER v5; // rdx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER v7; // r8
  __int64 v8; // rax
  unsigned int refreshed; // eax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  union _LARGE_INTEGER v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_DWORD *)(v1 + 184);
  v12.QuadPart = 0LL;
  v4 = ~((1 << (v3 + 1)) - 1);
  v6 = KeQueryPerformanceCounter(&v12);
  v8 = *((_QWORD *)a1 + 248);
  if ( (v4 & *((_DWORD *)a1 + 439)) != 0 )
  {
    if ( v8 )
    {
      v10 = v6.QuadPart - v8;
      v11 = *((_QWORD *)a1 + 249);
      if ( v10 < v11 )
      {
        *((_QWORD *)a1 + 248) = 0LL;
        *((_QWORD *)a1 + 249) = v11 - v10;
      }
      else
      {
        VidSchiStopNodeYield((unsigned __int64)a1, v5.QuadPart, v7.QuadPart);
      }
    }
    if ( *((_BYTE *)a1 + 2008) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx(
        *((_DWORD *)a1 + 439) & v4,
        v5.LowPart,
        v7.LowPart,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1756) & v4,
        0,
        0);
  }
  else if ( !v8 )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v6.QuadPart,
      (union _LARGE_INTEGER)v12.QuadPart,
      refreshed);
  }
}
