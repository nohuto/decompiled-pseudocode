/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C0015D14
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0008280 (VidSchiScheduleCommandToRun.c)
 *     VidSchiClearFlipDevice @ 0x1C0011354 (VidSchiClearFlipDevice.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0015C70 (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0015CD8 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v5; // rcx

  v1 = 0;
  v2 = (_QWORD **)(a1 + 2872);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v5[1] = v2;
    v3[1] = 0LL;
    *v3 = 0LL;
    v1 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v3 - 5));
  }
  return v1;
}
