/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x18013BAC4
 * Callers:
 *     DllMain @ 0x180067C84 (DllMain.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x18013B8A4 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013BDE0 (McTemplateU0pqpqqqqqq.c)
 */

__int64 AERTMemoryShutdown(void)
{
  int v0; // edx
  int v1; // r8d
  CAudioSessionManager *v2; // rcx
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
  }
  if ( !InitOnceBeginInitialize(&gRTHeapInitOnce, 1u, &fPending, &Context) || fPending )
    goto LABEL_15;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids,
      Context);
  }
  AERTDestroyHeap(Context, v0, v1);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
LABEL_16:
      if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v2 + 7) & 0x40000) != 0
        && *((_BYTE *)v2 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v2 + 2), 0x19u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
        v2 = WPP_GLOBAL_Control;
      }
      goto LABEL_20;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
LABEL_15:
    v2 = WPP_GLOBAL_Control;
    goto LABEL_16;
  }
LABEL_20:
  if ( (byte_1801B8781 & 4) != 0 )
  {
    McTemplateU0pqpqqqqqq((_DWORD)v2, v0, v1, 2, 0, 0, 0, 0);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v2 + 7) & 0x40000) != 0
    && *((_BYTE *)v2 + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)v2 + 2), 0x1Au, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
  }
  return 0LL;
}
