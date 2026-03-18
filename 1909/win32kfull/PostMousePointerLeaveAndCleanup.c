/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01E3810
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0012284 (_PostTransformableMessage.c)
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E1C90 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2C40 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = (__int64 *)((char *)a2 + 16);
  if ( !a2 )
    v2 = (__int64 *)gptiCurrent;
  v5 = *v2;
  if ( *(_QWORD *)(v5 + 1280) && (GetMiPWindowFlags(a2) & 1) == 0 )
  {
    v6 = GetMiPWindowFlags(a2) | 1;
    if ( a2 )
      InternalSetProp((__int64)a2, (unsigned __int16)gatomMiPFlags, v6, 5u);
    if ( !a1 || v5 != *(_QWORD *)(a1 + 16) )
    {
      **(_DWORD **)(v5 + 1280) &= ~4u;
      **(_DWORD **)(v5 + 1280) &= ~0x10u;
      **(_DWORD **)(v5 + 1280) &= ~2u;
      **(_DWORD **)(v5 + 1280) &= ~8u;
    }
    v7 = *(_QWORD *)(v5 + 1280);
    if ( (*(_DWORD *)v7 & 1) != 0 )
    {
      if ( !a2 )
        goto LABEL_15;
      PostTransformableMessage(a2, 0x24Au, ((unsigned __int64)(*(_WORD *)(v7 + 36) & 0xE1F7) << 16) | 1, 0LL, 0);
    }
    if ( a2 && *(_QWORD *)a2 != *(_QWORD *)(*(_QWORD *)(v5 + 424) + 448LL) )
    {
LABEL_16:
      if ( a2 )
        StopMiPIdleNotificationTimer(a2);
      return 1LL;
    }
LABEL_15:
    *(_QWORD *)(*(_QWORD *)(v5 + 424) + 448LL) = 0LL;
    goto LABEL_16;
  }
  return 1LL;
}
