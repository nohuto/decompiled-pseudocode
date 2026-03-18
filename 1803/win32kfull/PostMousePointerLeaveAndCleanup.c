/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01ABEC0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0061C04 (_PostTransformableMessage.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01AAEDC (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01AB67C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01AB6AC (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  __int64 MiPWindowFlags; // rax
  __int64 v7; // rcx

  v2 = (__int64 *)((char *)a2 + 16);
  if ( !a2 )
    v2 = (__int64 *)gptiCurrent;
  v5 = *v2;
  if ( *(_QWORD *)(v5 + 1248) && (GetMiPWindowFlags(a2) & 1) == 0 )
  {
    MiPWindowFlags = GetMiPWindowFlags(a2);
    SetMiPWindowFlags(a2, MiPWindowFlags | 1);
    if ( !a1 || v5 != *(_QWORD *)(a1 + 16) )
    {
      **(_DWORD **)(v5 + 1248) &= ~4u;
      **(_DWORD **)(v5 + 1248) &= ~0x10u;
      **(_DWORD **)(v5 + 1248) &= ~2u;
      **(_DWORD **)(v5 + 1248) &= ~8u;
    }
    v7 = *(_QWORD *)(v5 + 1248);
    if ( (*(_DWORD *)v7 & 1) != 0 )
    {
      if ( !a2 )
        goto LABEL_13;
      PostTransformableMessage(
        (__int64)a2,
        586LL,
        ((unsigned __int16)(*(_WORD *)(v7 + 36) & 0xE1F7) << 16) | 1LL,
        0LL,
        0);
    }
    if ( a2 && *(_QWORD *)a2 != *(_QWORD *)(*(_QWORD *)(v5 + 424) + 440LL) )
    {
LABEL_14:
      if ( a2 )
        StopMiPIdleNotificationTimer(a2);
      return 1LL;
    }
LABEL_13:
    *(_QWORD *)(*(_QWORD *)(v5 + 424) + 440LL) = 0LL;
    goto LABEL_14;
  }
  return 1LL;
}
